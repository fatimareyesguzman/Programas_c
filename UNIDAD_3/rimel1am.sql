CREATE DATABASE rimel1amuchos;
CREATE TABLE rimel (
    id INT AUTO_INCREMENT PRIMARY KEY,
    marcas VARCHAR(100),
    codigo INT
);

CREATE TABLE colores (
    id INT AUTO_INCREMENT PRIMARY KEY,
    rimel_id INT,
    color VARCHAR(20),
    FOREIGN KEY (rimel_id) REFERENCES rimel(id) ON DELETE CASCADE
);