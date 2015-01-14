<?php
/**
 * @file
 * d.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function d_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'location_selector';
  $page->task = 'page';
  $page->admin_title = 'Location selector';
  $page->admin_description = '';
  $page->path = 'location';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_location_selector_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'location_selector';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'grid-3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'fifth' => NULL,
      'sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f019a69-81b9-4447-b604-38dc477e08f3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9517a3a0-7b42-47a3-8900-034b1adf7b97';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'views-231054bf3ca8ff94e1689ab7b45fdbbb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9517a3a0-7b42-47a3-8900-034b1adf7b97';
    $display->content['new-9517a3a0-7b42-47a3-8900-034b1adf7b97'] = $pane;
    $display->panels['first'][0] = 'new-9517a3a0-7b42-47a3-8900-034b1adf7b97';
    $pane = new stdClass();
    $pane->pid = 'new-ed3bb56d-1384-4aa0-95d2-09951eeb63a3';
    $pane->panel = 'fourth';
    $pane->type = 'block';
    $pane->subtype = 'views-bee0ddb167a605aeb002055b5fe54408';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ed3bb56d-1384-4aa0-95d2-09951eeb63a3';
    $display->content['new-ed3bb56d-1384-4aa0-95d2-09951eeb63a3'] = $pane;
    $display->panels['fourth'][0] = 'new-ed3bb56d-1384-4aa0-95d2-09951eeb63a3';
    $pane = new stdClass();
    $pane->pid = 'new-dffcd4ce-187e-4446-8b4e-3deef48f1352';
    $pane->panel = 'sixth';
    $pane->type = 'block';
    $pane->subtype = 'views-e8030573b690b330e9570b2a877951be';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dffcd4ce-187e-4446-8b4e-3deef48f1352';
    $display->content['new-dffcd4ce-187e-4446-8b4e-3deef48f1352'] = $pane;
    $display->panels['sixth'][0] = 'new-dffcd4ce-187e-4446-8b4e-3deef48f1352';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9517a3a0-7b42-47a3-8900-034b1adf7b97';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['location_selector'] = $page;

  return $pages;

}
