CREATE DATABASE bissu; 
USE bissu;
CREATE TABLE paleta (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nombre VARCHAR(100),
    codigo INT
);

CREATE TABLE colores (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nombre VARCHAR(100)
);

CREATE TABLE paleta_colores (
   paleta_id INT,
    colores_id INT,
    PRIMARY KEY (paleta_id, colores_id),
    FOREIGN KEY (paleta_id) REFERENCES paleta(id) ON DELETE CASCADE,
    FOREIGN KEY (colores_id) REFERENCES colores(id) ON DELETE CASCADE
);
