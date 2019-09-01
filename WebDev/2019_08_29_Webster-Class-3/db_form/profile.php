<?php

    session_start();
    $event = $_SESSION["event"];
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <title>Profile</title>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="bootstrap.min.css">
    <style>
        /* Remove the navbar's default margin-bottom and rounded borders */ 
        .navbar {
        margin-bottom: 0;
        border-radius: 0;
        }
        
        /* Add a gray background color and some padding to the footer */
        footer {
        background-color: #f2f2f2;
        padding: 25px;
        }
    </style>
</head>
<body>

<nav class="navbar navbar-inverse">
  <div class="container-fluid">
    <div class="navbar-header">
      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#myNavbar">
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>                        
      </button>
      <a class="navbar-brand" href="#">Portfolio</a>
    </div>
    <div class="collapse navbar-collapse" id="myNavbar">
      <ul class="nav navbar-nav">
        <li class="active"><a href="#">Home</a></li>
      </ul>
      <ul class="nav navbar-nav navbar-right">
        <li><a href="logout.php">Logout</a></li>
      </ul>
    </div>
  </div>
</nav>

<div class="jumbotron">
  <div class="container text-center">
    <h1>Welcome <?php echo $_SESSION["name"];  ?></h1>
  </div>
</div>
  
<div class="container-fluid bg-3 text-center">
    <div class="row">
        <div class = "col-sm-6">    
            <?php

                echo "<h3>Gender : ".$_SESSION["gender"]."<br></h3>";

            ?>
        </div>
        <div class="col-sm-6">
            <?php

                echo "<h3>Event : ".strtoupper($_SESSION["event"])."<br></h3>"

            ?>
        </div>
    </div>

    <br>
    <br>

  <div class="row">
    <div class="col-sm-3">
      <img src="images/<?php echo $event;  ?>1.jpg" class="img-responsive" style="width:100%" alt="Image">
    </div>
    <div class="col-sm-3"> 
      <img src="images/<?php echo $event;  ?>2.jpg" class="img-responsive" style="width:100%" alt="Image">
    </div>
    <div class="col-sm-3"> 
      <img src="images/<?php echo $event;  ?>3.jpg" class="img-responsive" style="width:100%" alt="Image">
    </div>
    <div class="col-sm-3">
      <img src="images/<?php echo $event;  ?>4.jpg" class="img-responsive" style="width:100%" alt="Image">
    </div>
  </div>
</div><br>

</body>
</html>
