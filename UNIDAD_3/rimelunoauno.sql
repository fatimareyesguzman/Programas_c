CREATE DATABASE rimel1a1;
CREATE TABLE rimel (
    id INT AUTO_INCREMENT PRIMARY KEY,
    marcas VARCHAR(100),
    codigo INT
);

CREATE TABLE cepillo (
    id INT AUTO_INCREMENT PRIMARY KEY,
    rimel_id INT,
    cepillo VARCHAR(20),
    FOREIGN KEY (rimel_id) REFERENCES rimel(id) ON DELETE CASCADE
);