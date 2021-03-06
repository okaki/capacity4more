<?php

/**
 * @file
 * Render the "Advanced Search" icon + popover.
 */
?>

<i
  class="fa fa-info-circle"
  data-toggle="popover"
  data-placement="right"
  data-html="true"
  data-trigger="click"
  title="Advanced Search"
  data-content="
  <div class='search-tips'>
    <p>You can use these tips to focus your search.</p>
    <ul>
      <li>Search for combined wording by adding &quot;speech marks&quot; around several words; for ex: <cite>&quot;sustainable energy&quot;</cite></li>
      <li>By adding AND between words, for ex: <cite>Energy AND Water</cite>; your result(s) will include multiple terms.</li>
      <li>By adding OR between words, for ex: <cite>Energy OR Water</cite>; your result(s) will include either or both terms.</li>
      <li>By adding NOT between words, for ex: <cite>Energy NOT Water</cite>; your result(s) will include a term but not the other (search for 'energy' but not 'water').</li>
      <li>By combining operators, for ex: <cite>((Energy AND Water) OR DNA) NOT Electricity</cite>; your result(s) will follow the logic.</li>
    </ul>
    <p>Please note that operators are case sensitive and always in capitals to work!</p>
  </div>">
</i>
