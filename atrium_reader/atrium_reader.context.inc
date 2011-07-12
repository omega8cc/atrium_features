<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_reader_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'atrium_reader';
  $context->description = 'Featurewide context for Atrium Reader.';
  $context->tag = 'atrium_reader';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'feed_reader' => 'feed_reader',
        'blog' => 0,
        'feed_fast' => 0,
        'group' => 0,
        'post' => 0,
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        'reader' => 'reader',
        'reader/*' => 'reader/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'atrium_reader' => 'atrium_reader',
        'atrium_reader_feeds' => 'atrium_reader_feeds',
        'atrium_reader:page_1' => 0,
        'atrium_reader:page_2' => 0,
        'atrium_reader:page_3' => 0,
        'atrium_reader_blocks' => 0,
        'blog' => 0,
        'feeds_data_feed_fast' => 0,
        'feeds_data_feed_reader' => 0,
        'og' => 0,
        'og_ghp_ron' => 0,
        'og_members' => 0,
        'og_members_block' => 0,
        'og_members_faces' => 0,
        'og_my' => 0,
        'og_mytracker' => 0,
        'og_recent_type_term' => 0,
        'og_tracker' => 0,
        'og_unread' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'reader',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featurewide context for Atrium Reader.');
  t('atrium_reader');
  $export['atrium_reader'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'atrium_reader_listing';
  $context->description = 'Single feed item listing page within the reader.';
  $context->tag = 'atrium_reader';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'feed_reader' => 'feed_reader',
        'blog' => 0,
        'feed_fast' => 0,
        'group' => 0,
        'post' => 0,
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'views' => array(
      'values' => array(
        'atrium_reader:page_1' => 'atrium_reader:page_1',
        'atrium_reader:page_2' => 'atrium_reader:page_2',
        'atrium_reader:page_3' => 'atrium_reader:page_3',
        'atrium_reader' => 0,
        'atrium_reader_blocks' => 0,
        'atrium_reader_feeds' => 0,
        'blog' => 0,
        'feeds_data_feed_fast' => 0,
        'feeds_data_feed_reader' => 0,
        'og' => 0,
        'og_ghp_ron' => 0,
        'og_members' => 0,
        'og_members_block' => 0,
        'og_members_faces' => 0,
        'og_my' => 0,
        'og_mytracker' => 0,
        'og_recent_type_term' => 0,
        'og_tracker' => 0,
        'og_unread' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-atrium_reader_feeds-block_1' => array(
          'module' => 'views',
          'delta' => 'atrium_reader_feeds-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => '',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Single feed item listing page within the reader.');
  t('atrium_reader');
  $export['atrium_reader_listing'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'atrium_reader_overview';
  $context->description = 'Overview/landing page for reader.';
  $context->tag = 'atrium_reader';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'reader' => 'reader',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-atrium_reader_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'atrium_reader_blocks-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-atrium_reader_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'atrium_reader_blocks-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => '',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Overview/landing page for reader.');
  t('atrium_reader');
  $export['atrium_reader_overview'] = $context;

  return $export;
}
