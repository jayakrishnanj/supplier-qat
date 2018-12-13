<?php

/**
 * @file
 * Admin page callback file for the ctanywhere module.
 */

/**
 * Page callback: Generates the appropriate ctanywhere listing.
 *
 * @return string
 *   A renderable form array for the respective request.
 */
function ctanywhere_listing() {
  $header = array(
    array('data' => t('ID'), 'field' => 'id', 'sort' => 'asc'),
    array('data' => t('Url'), 'field' => 'url'),
    array('data' => t('Text to find'), 'field' => 'text_to_find'),
    array('data' => t('Text to replace'), 'field' => 'text_to_replace'),
    array('data' => t('Username'), 'field' => 'uid'),
    array('data' => t('Edit'), 'field' => 'Edit'),
    array('data' => t('Delete'), 'field' => 'Delete'),
  );
  $rows = array();
  $query = db_select('ctanywhere', 'cta')->fields('cta');
  $table_sort = $query->extend('TableSort')
    ->orderByHeader($header);
  $pager = $table_sort->extend('PagerDefault')
    ->limit(10);
  $results = $pager->execute();
  foreach ($results as $row) {
    $rows[] = array($row->id,
      check_plain($row->url),
      check_plain($row->text_to_find),
      check_plain($row->text_to_replace),
      user_load($row->uid)->name,
      l(t('edit'), 'admin/ctanywhere/' . $row->id . '/edit'),
      l(t('delete'), 'admin/ctanywhere/' . $row->id . '/delete',
        array('query' => array('destination' => 'admin/ctanywhere'))),
    );
  }
  return theme('table', array(
    'header' => $header,
    'rows' => $rows,
  )) . theme('pager');
}

/**
 * Form constructor for the ctanywhere setting add form.
 *
 * @see ctanywhere_form_validate()
 * @see ctanywhere_form_submit()
 *
 * @ingroup forms
 */
function ctanywhere_form($form, &$form_state, $id = NULL, $operation = NULL) {
  if (is_numeric($id) && $operation == 'edit') {
    $edit = db_select('ctanywhere', 'cta')
      ->fields('cta')
      ->condition('id', $id)
      ->execute()->fetchAssoc();
  }
  $form['url'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter your url:'),
    '#maxlength' => 255,
    '#default_value' => isset($edit['url']) ? $edit['url'] : '',
    '#required' => TRUE,
    '#description' => '<p>' . t('Enter a url or pattern no spaces allowed.')
    . '</p><p>'
    . t('Example any node alias or node/add or node/%/edit')
    . '</p>',
  );
  $form['text_to_find'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter your text to find:'),
    '#maxlength' => 255,
    '#default_value' => isset($edit['text_to_find']) ? $edit['text_to_find'] : '',
    '#required' => TRUE,
    '#description' => '<p>' . t('Enter a text to find. Markup is not allowed.')
    . '</p><p>'
    . t('Example "find me"')
    . '</p>',
  );
  $form['text_to_replace'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter your text to replace:'),
    '#maxlength' => 255,
    '#default_value' => isset($edit['text_to_replace']) ? $edit['text_to_replace'] : '',
    '#description' => '<p>' . t('Enter a text to replace. Markup is not allowed.')
    . '</p><p>'
    . t('Example "replace me". You can add space to replace the text with space or leave it empty to just remove the text.')
    . '</p>',
  );
  $form['id'] = array(
    '#type' => 'hidden',
    '#title' => t('Id:'),
    '#value' => isset($edit['id']) ? $edit['id'] : '',
  );
  $form['submit_button'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return $form;
}

/**
 * Form validation handler for ctanywhere_form().
 *
 * @see ctanywhere_form_submit()
 */
function ctanywhere_form_validate($form, &$form_state) {
  if ($form_state['values']['op'] == 'Save') {
    $url = $form_state['values']['url'];
    if (strpos(trim($url), ' ')) {
      form_set_error('url', t('Url must not contain spaces.'));
    }
  }
}

/**
 * Form submission handler for ctanywhere_form().
 *
 * @see ctanywhere_form_validate()
 */
function ctanywhere_form_submit($form, &$form_state) {
  global $user;
  $values = $form_state['values'];
  $octanywhere = new stdclass();
  $octanywhere->url = $values['url'];
  $octanywhere->text_to_find = strip_tags($values['text_to_find']);
  $octanywhere->text_to_replace = strip_tags($values['text_to_replace']);
  $octanywhere->uid = $user->uid;
  $octanywhere->updated = REQUEST_TIME;
  if ($values['id']) {
    $octanywhere->id = $values['id'];
    drupal_write_record('ctanywhere', $octanywhere, 'id');
    drupal_set_message(t('Your ctanywhre record has been saved successfully!'));
    $form_state['redirect'] = 'admin/ctanywhere';
  }
  else {
    $octanywhere->created = REQUEST_TIME;
    drupal_write_record('ctanywhere', $octanywhere);
    drupal_set_message(t('Your ctanywhere record has been saved successfully!'));
  }
}

/**
 * Function to confirm delete action.
 *
 * @see ctanywhere_delete_confirm_submit()
 */
function ctanywhere_delete_confirm($form, &$form_state, $id) {
  $form['id'] = array(
    '#type' => 'value',
    '#value' => $id,
  );
  return confirm_form($form,
    t('Are you sure you want to delete this change text anywhere configuration?'),
    '',
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel'));
}

/**
 * Form submission handler for ctanywhere_delete_confirm().
 *
 * @see ctanywhere_delete_confirm()
 */
function ctanywhere_delete_confirm_submit($form, &$form_state) {
  if ($form_state['values']['confirm']) {
    ctanywhere_delete($form_state['values']['id']);
    drupal_set_message(t('Change text anywhere setting has been deleted successfully.'));
  }
}
