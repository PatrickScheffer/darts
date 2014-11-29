<?php
/**
 * @file
 * Drush alias file.
 *
 * Alias documentation is at the bottom of this document.
 */

  $aliases['development'] = array(
    'remote-host' => '[host.uri]',
    'uri' => '[uri]',
    'root' => '[/path/to/drupal/root]', /* No slash at the and. */
    'path-aliases' => array(
      '%dump-dir' => '/home/[user]/.drush/dumps',
      '%files' => 'sites/default/files',
     ),
  );

  $aliases['staging'] = array(
    'remote-host' => '[host.uri]',
    'uri' => '[uri]',
    'root' => '[/path/to/drupal/root]', /* No slash at the and. */
    'path-aliases' => array(
      '%dump-dir' => '/home/[user]/.drush/dumps',
      '%files' => 'sites/default/files',
     ),
  );

  $aliases['live'] = array(
    'remote-host' => '[host.uri]',
    'uri' => '[uri]',
    'root' => '[/path/to/drupal/root]', /* No slash at the and. */
    'path-aliases' => array(
      '%dump-dir' => '/home/[user]/.drush/dumps',
      '%files' => 'sites/default/files',
     ),
  );

/**
 * Although most aliases will contain only a few options, a number
 * of settings that are commonly used appear below:
 *
 * - 'uri': In Drupal 7, the value of --uri should always be the same as
 *     when the site is being accessed from a web browser (e.g. http://mysite.org,
 *     although the http:// is optional).  In Drupal 6, the value of --uri should
 *     always be the same as the site's folder name in the 'sites' folder
 *     (e.g. default); it is best if the site folder name matches the
 *     URI from the browser, and is consistent on every instance of the
 *     same site (e.g. also use sites/mysite.org for http://dev.mysite.org).
 * - 'root': The Drupal root; must not be specified as a relative path.
 * - 'remote-port': If the database is remote and 'db-url' contains
 *     a tunneled port number, put the actual database port number
 *     used on the remote machine in the 'remote-port' setting.
 * - 'remote-host': The fully-qualified domain name of the remote system
 *     hosting the Drupal instance.  The remote-host option must be
 *     omitted for local sites, as this option controls whether or not
 *     rsync parameters are for local or remote machines.
 * - 'remote-user': The username to log in as when using ssh or rsync.
 * - 'os': The operating system of the remote server.  Valid values
 *     are 'Windows' and 'Linux'.  Default value is PHP_OS if 'remote-host'
 *     is not set, and 'Linux' (or $options['remote-os']) if it is.
 * - 'ssh-options': If the target requires special options, such as a non-
 *     standard port, alternative identity file, or alternative
 *     authentication method, ssh-options can contain a string of extra
 *     options that are used with the ssh command, eg "-p 100"
 * - 'parent': The name of a parent alias (e.g. '@server') to use as a basis
 *     for this alias.  Any value of the parent will appear in the child
 *     unless overridden by an item with the same name in the child.
 *     Multiple inheritance is possible; name multiple parents in the
 *     'parent' item separated by commas (e.g. '@server,@devsite').
 * - 'db-url': The Drupal 6 database connection string from settings.php.
 *     For remote databases accessed via an ssh tunnel, set the port
 *     number to the tunneled port as it is accessed on the local machine.
 *     If 'db-url' is not provided, then drush will automatically look it
 *     up, either from settings.php on the local machine, or via backend invoke
 *     if the target alias specifies a remote server.
 * - 'databases': Like 'db-url', but contains the full Drupal 7 databases
 *     record.  Drush will look up the 'databases' record if it is not specified.
 * - 'path-aliases': An array of aliases for common rsync targets.
 *   Relative aliases are always taken from the Drupal root.
 *     '%drush-script': The path to the 'drush' script, or to 'drush.php' or
 *       'drush.bat', as desired.  This is used by backend invoke when drush
 *       runs a drush command.  The default is 'drush' on remote machines, or
 *       the full path to drush.php on the local machine.
 *     '%drush': A read-only property: points to the folder that the drush script
 *       is stored in.
 *     '%dump-dir': Path to directory that "drush sql-sync" should use to store
 *       sql-dump files. Helpful filenames are auto-generated.
 *     '%dump': Path to the file that "drush sql-sync" should use to store sql-dump file.
 *     '%files': Path to 'files' directory.  This will be looked up if not specified.
 *     '%root': A reference to the Drupal root defined in the 'root' item
 *       in the site alias record.
 * - 'php': path to custom php interpreter, defaults to /usr/bin/php
 * - 'php-options': commandline options for php interpreter, you may
 *   want to set this to '-d error_reporting="E_ALL^E_DEPRECATED"'
 * - 'variables' : An array of name/value pairs which override Drupal variables.
 *    These values take precedence even over settings.php variable overrides.
 * - 'command-specific': These options will only be set if the alias
 *   is used with the specified command.  In the example below, the option
 *   `--no-cache` will be selected whenever the @stage alias
 *   is used in any of the following ways:
 *      drush @stage sql-sync @self @live
 *      drush sql-sync @stage @live
 *      drush sql-sync @live @stage
 *   In case of conflicting options, command-specific options in targets
 *   (source and destination) take precedence over command-specific options
 *   in the bootstrapped site, and command-specific options in a destination
 *   alias will take precedence over those in a source alias.
 * - 'source-command-specific' and 'target-command-specific': Behaves exactly
 *   like the 'command-specific' option, but is applied only if the alias
 *   is used as the source or target, respectively, of an rsync or sql-sync
 *   command.  In the example below, `--skip-tables-list=comments` whenever
 *   the alias @live is the target of an sql-sync command, but comments will
 *   be included if @live is the source for the sql-sync command.
 * - '#peer': Settings that begin with a '#' are not used directly by Drush, and
 *   in fact are removed before making a backend invoke call (for example). These
 *   kinds of values are useful in conjunction with shell aliases.  See
 *   `drush topic docs-shell-aliases` for more information on this.
 * Some examples appear below.  Remove the leading hash signs to enable.
 */