<?php
include 'db.php';

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $nombre = $_POST['nombre'];
    $id_estatus = $_POST['id_estatus'];

    $sql = "INSERT INTO lengua (nombre, id_estatus) VALUES ('$nombre', '$id_estatus')";

    if ($conn->query($sql) === TRUE) {
        header("Location: index.php");
        exit();
    } else {
        echo "Error: " . $conn->error;
    }
}
?>
