<?php
include 'db.php';

// Obtener lenguas con su estatus
$result = $conn->query("SELECT lengua.id_lengua, lengua.nombre AS nombre_lengua, estatus.nombre AS nombre_estatus 
                        FROM lengua 
                        JOIN estatus ON lengua.id_estatus = estatus.id_estatus");

// Obtener estatus para el <select>
$estatus = $conn->query("SELECT * FROM estatus");
?>
<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <title>CRUD Lenguas</title>
</head>
<body>
    <h1>Gestión de Lenguas Indígenas</h1>

    <form action="insert.php" method="POST">
        <h2>Agregar Lengua</h2>
        <label>Nombre de la lengua:</label>
        <input type="text" name="nombre" required><br>

        <label>Estatus:</label>
        <select name="id_estatus" required>
            <option value="">Seleccione</option>
            <?php while($e = $estatus->fetch_assoc()): ?>
                <option value="<?= $e['id_estatus'] ?>"><?= $e['nombre'] ?></option>
            <?php endwhile; ?>
        </select><br>

        <input type="submit" value="Agregar Lengua">
    </form>

    <hr>
    <h2>Lista de Lenguas</h2>
    <table border="1">
        <tr>
            <th>ID</th>
            <th>Nombre</th>
            <th>Estatus</th>
            <th>Acciones</th>
        </tr>
        <?php while($row = $result->fetch_assoc()): ?>
        <tr>
            <td><?= $row['id_lengua'] ?></td>
            <td><?= $row['nombre_lengua'] ?></td>
            <td><?= $row['nombre_estatus'] ?></td>
            <td>
                <a href="update.php?id=<?= $row['id_lengua'] ?>">Editar</a>
                <a href="delete.php?id=<?= $row['id_lengua'] ?>">Eliminar</a>
            </td>
        </tr>
        <?php endwhile; ?>
    </table>
</body>
</html>
