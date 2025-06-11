<?php
include 'db.php';

if (isset($_GET['id'])) {
    $id = $_GET['id'];

    // Obtener lengua actual
    $res = $conn->query("SELECT * FROM lengua WHERE id_lengua = $id");
    $row = $res->fetch_assoc();

    // Obtener todos los estatus
    $estatus = $conn->query("SELECT * FROM estatus");
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $nombre = $_POST['nombre'];
    $id_estatus = $_POST['id_estatus'];

    $sql = "UPDATE lengua SET nombre='$nombre', id_estatus='$id_estatus' WHERE id_lengua=$id";

    if ($conn->query($sql) === TRUE) {
        header("Location: index.php");
        exit();
    } else {
        echo "Error: " . $conn->error;
    }
}
?>
<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <title>Editar Lengua</title>
</head>
<body>
    <h1>Editar Lengua</h1>
    <form action="update.php?id=<?= $id ?>" method="POST">
        <label>Nombre:</label>
        <input type="text" name="nombre" value="<?= $row['nombre'] ?>" required><br>

        <label>Estatus:</label>
        <select name="id_estatus" required>
            <?php while ($e = $estatus->fetch_assoc()): ?>
                <option value="<?= $e['id_estatus'] ?>" <?= $e['id_estatus'] == $row['id_estatus'] ? 'selected' : '' ?>>
                    <?= $e['nombre'] ?>
                </option>
            <?php endwhile; ?>
        </select><br>

        <input type="submit" value="Actualizar">
    </form>
</body>
</html>
<?php
include 'db.php';

if (isset($_GET['id'])) {
    $id = $_GET['id'];

    $sql = "DELETE FROM lengua WHERE id_lengua = $id";

    if ($conn->query($sql) === TRUE) {
        header("Location: index.php");
        exit();
    } else {
        echo "Error: " . $conn->error;
    }
}
?>
