<?php
/**
 * @file
 * spads_site_structure.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function spads_site_structure_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-item-home',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:about/resources
  $menu_links['main-menu:about/resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/resources',
    'router_path' => 'about/resources',
    'link_title' => 'Resources',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => 'about',
  );
  // Exported menu link: main-menu:about/team
  $menu_links['main-menu:about/team'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/team',
    'router_path' => 'about/team',
    'link_title' => 'Team',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => 'about',
  );
  // Exported menu link: main-menu:http://dev.scratchpads.eu/
  $menu_links['main-menu:http://dev.scratchpads.eu/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://dev.scratchpads.eu/',
    'router_path' => '',
    'link_title' => 'Sandbox',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'external_link',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/44',
  );
  // Exported menu link: main-menu:http://dev.scratchpads.eu/project/issues
  $menu_links['main-menu:http://dev.scratchpads.eu/project/issues'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://dev.scratchpads.eu/project/issues',
    'router_path' => '',
    'link_title' => 'Issues queue',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'external_link',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/44',
  );
  // Exported menu link: main-menu:http://twitter.com/scratchpads
  $menu_links['main-menu:http://twitter.com/scratchpads'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://twitter.com/scratchpads',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'external_link',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'news',
  );
  // Exported menu link: main-menu:http://wiki.scratchpads.eu/
  $menu_links['main-menu:http://wiki.scratchpads.eu/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://wiki.scratchpads.eu/',
    'router_path' => '',
    'link_title' => 'Help Wiki',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'external_link',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/44',
  );
  // Exported menu link: main-menu:https://git.scratchpads.eu/v
  $menu_links['main-menu:https://git.scratchpads.eu/v'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://git.scratchpads.eu/v',
    'router_path' => '',
    'link_title' => 'Git repository',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'external_link',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/26',
  );
  // Exported menu link: main-menu:news
  $menu_links['main-menu:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-item-news',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:node/12
  $menu_links['main-menu:node/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Explore',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-item-explore',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/13
  $menu_links['main-menu:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Sites list',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'node/12',
  );
  // Exported menu link: main-menu:node/20
  $menu_links['main-menu:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Ambassadors',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/44',
  );
  // Exported menu link: main-menu:node/21
  $menu_links['main-menu:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Info / Duties',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/20',
  );
  // Exported menu link: main-menu:node/24
  $menu_links['main-menu:node/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Writting modules',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/26',
  );
  // Exported menu link: main-menu:node/25
  $menu_links['main-menu:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'GIT commits',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/26',
  );
  // Exported menu link: main-menu:node/26
  $menu_links['main-menu:node/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Develop',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-item-develop',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:node/27
  $menu_links['main-menu:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Concept',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'about',
  );
  // Exported menu link: main-menu:node/28
  $menu_links['main-menu:node/28'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => 'about',
  );
  // Exported menu link: main-menu:node/29
  $menu_links['main-menu:node/29'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Partner projects',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'about',
  );
  // Exported menu link: main-menu:node/30
  $menu_links['main-menu:node/30'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/30',
    'router_path' => 'node/%',
    'link_title' => 'Policies',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'about',
  );
  // Exported menu link: main-menu:node/31
  $menu_links['main-menu:node/31'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/31',
    'router_path' => 'node/%',
    'link_title' => 'Sponsors',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'about',
  );
  // Exported menu link: main-menu:node/39
  $menu_links['main-menu:node/39'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/39',
    'router_path' => 'node/%',
    'link_title' => 'Create your own site',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'about',
  );
  // Exported menu link: main-menu:node/40
  $menu_links['main-menu:node/40'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Publish your data online',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'about',
  );
  // Exported menu link: main-menu:node/41
  $menu_links['main-menu:node/41'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'Contribute to global bioscience',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'about',
  );
  // Exported menu link: main-menu:node/42
  $menu_links['main-menu:node/42'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Collaborate with your peers',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'about',
  );
  // Exported menu link: main-menu:node/44
  $menu_links['main-menu:node/44'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/44',
    'router_path' => 'node/%',
    'link_title' => 'Support',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-item-support',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:node/479
  $menu_links['main-menu:node/479'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/479',
    'router_path' => 'node/%',
    'link_title' => 'Application form for training site',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/44',
  );
  // Exported menu link: main-menu:node/480
  $menu_links['main-menu:node/480'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/480',
    'router_path' => 'node/%',
    'link_title' => 'Proposition form to host a course',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/44',
  );
  // Exported menu link: main-menu:node/481
  $menu_links['main-menu:node/481'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/481',
    'router_path' => 'node/%',
    'link_title' => 'Ambassor application form',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/20',
  );
  // Exported menu link: main-menu:search/site
  $menu_links['main-menu:search/site'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search/site',
    'router_path' => 'search/site',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:support/ambassadors/current
  $menu_links['main-menu:support/ambassadors/current'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'support/ambassadors/current',
    'router_path' => 'support/ambassadors/current',
    'link_title' => 'Current Ambassadors',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/20',
  );
  // Exported menu link: main-menu:support/ambassadors/material
  $menu_links['main-menu:support/ambassadors/material'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'support/ambassadors/material',
    'router_path' => 'support/ambassadors/material',
    'link_title' => 'Ambassador support material',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/20',
  );
  // Exported menu link: main-menu:support/training/material
  $menu_links['main-menu:support/training/material'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'support/training/material',
    'router_path' => 'support/training/material',
    'link_title' => 'Training material',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'support',
  );
  // Exported menu link: menu-join-the-community:http://get.scratchpads.eu
  $menu_links['menu-join-the-community:http://get.scratchpads.eu'] = array(
    'menu_name' => 'menu-join-the-community',
    'link_path' => 'http://get.scratchpads.eu',
    'router_path' => '',
    'link_title' => 'Create a Scratchpad',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'join-create',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-join-the-community:node/13
  $menu_links['menu-join-the-community:node/13'] = array(
    'menu_name' => 'menu-join-the-community',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Join a Scratchpad',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'join-join',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-join-the-community:node/20
  $menu_links['menu-join-the-community:node/20'] = array(
    'menu_name' => 'menu-join-the-community',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Become a Scratchpad ambassador',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'join-ambassador',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: menu-join-the-community:node/26
  $menu_links['menu-join-the-community:node/26'] = array(
    'menu_name' => 'menu-join-the-community',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Develop Scratchpad source code',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'join-develop',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-join-the-community:node/30
  $menu_links['menu-join-the-community:node/30'] = array(
    'menu_name' => 'menu-join-the-community',
    'link_path' => 'node/30',
    'router_path' => 'node/%',
    'link_title' => 'Read about our policy',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'join-policy',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
  );
  // Exported menu link: menu-join-the-community:support/training/events
  $menu_links['menu-join-the-community:support/training/events'] = array(
    'menu_name' => 'menu-join-the-community',
    'link_path' => 'support/training/events',
    'router_path' => 'support/training/events',
    'link_title' => 'Sign up for Scratchpad training',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'join-signup',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ambassador support material');
  t('Ambassadors');
  t('Ambassor application form');
  t('Application form for training site');
  t('Become a Scratchpad ambassador');
  t('Collaborate with your peers');
  t('Concept');
  t('Contribute to global bioscience');
  t('Create a Scratchpad');
  t('Create your own site');
  t('Current Ambassadors');
  t('Develop');
  t('Develop Scratchpad source code');
  t('Explore');
  t('FAQ');
  t('GIT commits');
  t('Git repository');
  t('Help Wiki');
  t('Home');
  t('Info / Duties');
  t('Issues queue');
  t('Join a Scratchpad');
  t('News');
  t('Partner projects');
  t('Policies');
  t('Proposition form to host a course');
  t('Publish your data online');
  t('Read about our policy');
  t('Resources');
  t('Sandbox');
  t('Search');
  t('Sign up for Scratchpad training');
  t('Sites list');
  t('Sponsors');
  t('Support');
  t('Team');
  t('Training material');
  t('Twitter');
  t('Writting modules');


  return $menu_links;
}
