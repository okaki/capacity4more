#!/bin/sh

# ---------------------------------------------------------------------------- #
#
# Installs Drush.
#
# ---------------------------------------------------------------------------- #


# Install Drush.
cd $TRAVIS_BUILD_DIR
export PATH="$HOME/.composer/vendor/bin:$PATH"
composer global require drush/drush 6.*
phpenv rehash

# Create the Drush alias.
mkdir -p ~/.drush
cp $TRAVIS_BUILD_DIR/build/travis/config/aliases.drushrc.php ~/.drush/

drush --version
