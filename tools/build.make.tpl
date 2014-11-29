core = 7.x
api = 2

projects[drupal][type] = core
projects[drupal][download][type] = "git"
projects[drupal][download][url] = "https://github.com/omega8cc/7x.git"
projects[drupal][download][tag] = "7.34.1"
projects[drupal][patch][] = "http://patches.development.vdmi.nl/drupal/drupal_vhostalias.patch"
projects[drupal][patch][] = "http://patches.development.vdmi.nl/drupal/tk-patch-htaccess.patch"
projects[drupal][patch][] = "http://patches.development.vdmi.nl/drupal/tk-patch-private-file.patch"

projects[darts][type] = "profile"
projects[darts][download][type] = "kraftwagen_directory"
projects[darts][download][url] = "**SRC_DIR**"
