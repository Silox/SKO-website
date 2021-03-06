<header class="site-header" id="site-header">
    <div class="container nav-container">
        <h1 class="site-header-logo">
            <?php print l('<img src="' . $base_path . path_to_theme() . '/assets/images/logo-shadow.png" alt="Student Kick-Off" />', '<front>', array('html' => TRUE)); ?>
        </h1>
        <nav>
            <ul class="horizontal-navigation site-navigation">
                <!--</li> and starting <li> have to be on the same line
                    because display:inline-block will add whitespace otherwise-->
                <li class="horizontal-navigation-item site-navigation-item <?php print ($title == "Nieuws") ? "site-navigation-current" : ""; ?>">
                    <?php print l('Home', '<front>', array('attributes' => array('class' => array('site-navigation-home')))); ?>
                <!-- </li><li class="horizontal-navigation-item site-navigation-item <?php print ($title == "Line-up") ? "site-navigation-current" : ""; ?>">
                    <?php print l('Line-up', 'line-up', array('attributes' => array('class' => array('site-navigation-line-up')))); ?>-->
                <!-- </li><li class="horizontal-navigation-item site-navigation-item <?php print ($title == "Studentvillage") ? "site-navigation-current" : ""; ?>">
                    <?php print l('Student village', 'studentvillage', array('attributes' => array('class' => array('site-navigation-student-village')))); ?>-->
                <!-- </li><li class="horizontal-navigation-item site-navigation-item <?php print ($title == "Info") ? "site-navigation-current" : ""; ?>">
                    <?php print l('Info', 'info', array('attributes' => array('class' => array('site-navigation-praktisch')))); ?>-->
                </li><li class="horizontal-navigation-item site-navigation-item <?php print ($title == "Historiek") ? "site-navigation-current" : ""; ?>">
                    <?php print l('Historiek', 'historiek', array('attributes' => array('class' => array('site-navigation-historiek')))); ?>
                </li><li class="horizontal-navigation-item site-navigation-item <?php print ($title == "Student Rock Rally") ? "site-navigation-current" : ""; ?>">
                    <?php print l('SRR', 'studentrockrally', array('attributes' => array('class' => array('site-navigation-student-rock-rally')))); ?>
                </li><li class="horizontal-navigation-item site-navigation-item <?php print ($title == "Korting") ? "site-navigation-current" : ""; ?>">
                    <?php print l('SKO Card', 'skocard', array('attributes' => array('class' => array('site-navigation-korting')))); ?>
                </li><li class="horizontal-navigation-item site-navigation-item <?php print ($title == "Join") ? "site-navigation-current" : ""; ?>">
                    <?php print l('Join', 'join', array('attributes' => array('class' => array('site-navigation-join')))); ?>
                </li><li class="horizontal-navigation-item site-navigation-item" id="nav-toggle"><a href="#">&equiv;</a></li>
            </ul>
        </nav>
    </div>
    <div id="login-container">
      <?php
        if(user_is_logged_in()) {
          print "Welkom, " . $user->name . "! ";
          print l('Log uit', 'user/logout', array('attributes' => array('class' => array('button button-yellow'))));
        } else {
          print "Welkom! ";
          print l('Log in', 'user', array('attributes' => array('class' => array('button')))) . " ";
          print l('Registreer', 'user/register', array('attributes' => array('class' => array('button button-yellow'))));
        }
      ?>
    </div>
</header>
