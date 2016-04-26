<?php
/**
 * @file
 * md_foto_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function md_foto_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'articles';
  $context->description = '';
  $context->tag = 'menu_active';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'articles',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('menu_active');
  $export['articles'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'photos';
  $context->description = '';
  $context->tag = 'menu_active';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'photos' => 'photos',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'photos',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('menu_active');
  $export['photos'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sidebar';
  $context->description = 'Show sidebar in article node type';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'articles' => 'articles',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-latest_from_blog-block' => array(
          'module' => 'views',
          'delta' => 'latest_from_blog-block',
          'region' => 'sidebar',
          'weight' => '-11',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'views-latest_photos-block' => array(
          'module' => 'views',
          'delta' => 'latest_photos-block',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Show sidebar in article node type');
  $export['sidebar'] = $context;

  return $export;
}
