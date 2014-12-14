angular.module('c4mApp')
  .controller('DrupalFormCtrl', function($scope, DrupalSettings, EntityResource, Request, $window, $document, $modal, QuickPostService, $filter) {

    $scope.data = DrupalSettings.getData('vocabularies');

    $scope.model = {};

    $scope.popups = [];
    angular.forEach($scope.data, function(value, key) {
      $scope.popups[key] = 0;
    });

    $scope.filteredTerms = angular.copy($scope.data);

    $scope.updateSearch = function(vocab) {
      $scope.filteredTerms[vocab] = $filter('termsFilter')($scope.data[vocab], $scope.searchTerm);
    };

    // Toggle the visibility of the popovers.
    $scope.togglePopover = function(name, event) {
      QuickPostService.togglePopover(name, event, $scope.popups);
    };

    // Close all popovers on "ESC" key press.
    $scope.keyUpHandler = function(keyEvent) {
      QuickPostService.keyUpHandler(keyEvent, $scope);
    };

    $scope.updateSelectedTerms = function(key, vocab) {
      // Check/uncheck the checkbox in the drupal form.
      if($scope.model[key]) {
        jQuery('input[type=checkbox][value="' + key + '"]').attr("checked", true);
      }
      else {
        jQuery('input[type=checkbox][value="' + key + '"]').attr("checked", false);
        if (key in $scope.data[vocab]) {
          angular.forEach($scope.data[vocab][key].children, function(child, itemKey) {
            var childID = child.id;

            if (childID in $scope.model && $scope.model[childID] === true) {
              $scope.model[childID] = false;
              jQuery('input[type=checkbox][value="' + childID + '"]').attr("checked", false);
            }
          });
        }

      }
    };

    // Call the keyUpHandler function on key-up.
    $document.on('keyup', $scope.keyUpHandler);
  });
