<?php

    $name = $_POST["name"];
    $email = $_POST["em"];
    $pass = $_POST["ps"];
    $gender = $_POST["gender"];
    $event = $_POST["event"];

    $con = mysqli_connect("localhost", "root", "", "webster");

    if( $con ) {
        echo "connected successfully<br>";
    }
    else {
        echo "cannot connect";
        die();
    }

    $query = "insert into info values ('$email', '$name', '$pass', '$gender', '$event')";
    echo $query;

    mysqli_query($con, $query);

?>