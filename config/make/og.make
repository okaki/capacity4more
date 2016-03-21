core = 7.x
api = 2

; Organic Groups and friends.

projects[og][download][type] = "git"
projects[og][download][url] = "https://github.com/HelenaEksler/og.git"
projects[og][download][branch] = og_context_check_access
projects[og][type] = "module"
projects[og][subdir] = "contrib"
projects[og][patch][] = "https://www.drupal.org/files/issues/access_check_when_getting_groups.patch"

projects[og_purl][subdir] = "contrib"
projects[og_purl][version] = "1.x-dev"
projects[og_purl][patch][] = "https://www.drupal.org/files/issues/og_purl_node_delete-2419277-1.patch"

projects[og_variables][subdir] = "contrib"
projects[og_variables][version] = "1.0"

projects[og_vocab][subdir] = "contrib"
projects[og_vocab][version] = "1.2"
projects[og_vocab][patch][] = https://www.drupal.org/files/issues/og_vocab-fix_strict_warning.patch

projects[pluggable_node_access][download][type] = "git"
projects[pluggable_node_access][download][url] = "https://github.com/Gizra/pluggable_node_access.git"
projects[pluggable_node_access][download][branch] = 7.x-1.x
projects[pluggable_node_access][subdir] = "contrib"
projects[pluggable_node_access][type] = "module"

projects[purl][subdir] = "contrib"
projects[purl][version] = "1.x-dev"
projects[purl][patch][] = https://www.drupal.org/files/purl-1693984-10.patch
projects[purl][patch][] = https://www.drupal.org/files/issues/purl_modifiers_xx_cache-2419261-1.patch
projects[purl][patch][] = https://www.drupal.org/files/808956-14-purl-menu-behavior.patch
