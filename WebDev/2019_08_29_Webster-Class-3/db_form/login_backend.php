<?php

    session_start();

    $email = $_POST["em"];
    $pass = $_POST["ps"];

    $con = mysqli_connect("localhost", "root", "", "webster");

    if(!$con) {
        echo "cannot connect";
        die();
    }

    $query = "select * from info where email='$email' and pass='$pass'";
    $result = mysqli_query($con, $query);

    if(mysqli_num_rows($result) == 0) {
        echo "Incorrect username or password<br>";
        die();
    }

    $arr = mysqli_fetch_array($result);
    
    echo "Logged in successfully<br>";

    $_SESSION["name"] = $arr["name"];
    $_SESSION["email"] = $email;
    $_SESSION["pass"] = $pass;
    $_SESSION["event"] = $arr["event"];
    $_SESSION["gender"] = $arr["gender"];
    
    header("Location: profile.php");

?>