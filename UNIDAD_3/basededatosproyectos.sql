CREATE DATABASE hospital;
USE hospital;
CREATE TABLE ubicaciongeo(
    id_ubicaciongeo INT PRIMARY KEY AUTO_INCREMENT,
    latitud DECIMAL(10,5), 
    longitud DECIMAL(10,5)
);
CREATE TABLE tipo(
    id_tipo INT PRIMARY KEY AUTO_INCREMENT,
    nombre VARCHAR (100)
);
CREATE TABLE director(
    id_director INT PRIMARY KEY AUTO_INCREMENT, 
    nombre VARCHAR (100), 
    cedula VARCHAR (100), 
    telefono VARCHAR (100)
);
CREATE TABLE direccion(
    id_direccion INT PRIMARY KEY AUTO_INCREMENT,
    calle VARCHAR(100),
    colonia VARCHAR(100), 
    municipio VARCHAR (100),
    cp INT
);
CREATE TABLE hospital(
    id_hospital INT PRIMARY KEY AUTO_INCREMENT, 
    nombre VARCHAR (100),
    id_tipo INT,
    FOREIGN KEY (id_tipo)REFERENCES tipo(id_tipo),
    id_director INT,
    FOREIGN KEY (id_director) REFERENCES director(id_director), 
    id_ubicaciongeo INT,
    FOREIGN KEY (id_ubicaciongeo) REFERENCES ubicaciongeo(id_ubicaciongeo), 
    id_direccion INT,
    FOREIGN KEY (id_direccion) REFERENCES direccion (id_direccion)
);
CREATE TABLE areas(
    id_area INT PRIMARY KEY AUTO_INCREMENT, 
    nombre VARCHAR (100), 
    capacidad INT, 
    id_hospital INT,
    FOREIGN KEY (id_hospital) REFERENCES hospital(id_hospital)

);

INSERT INTO ubicaciongeo (latitud, longitud) VALUES
    (19.4326,-99.1332), 
    (40.7128,-74.0060),
    (-34.6037, -58.3816), 
    (48.8566,2.3522), 
    (35.6895, 139.6917);

INSERT INTO tipo (nombre) VALUES
('privado'), 
('publico');

INSERT INTO director(nombre, cedula, telefono) VALUES
('Juana Ramirez Jarquin','1234567','5512345678'),
('Aribel Estrada Lopez','2345678','5567890123'), 
('Erasto Torres Alberto','3456789','5588123456'),
('Pilar Morales Reyes','4567890','5577443322'),
('Danna Mendez Ramirez','5678901','5599008877');

INSERT INTO direccion(calle, colonia, municipio, cp) VALUES
('Av. Independencia #2001','Centro','Oaxaca de Juárez', 68000 ),
('Carretera Antigua a Ocotlán #1','La Esperanza','San Bartolo Coyotepec',71256 ),
('Av. Juárez #1525','Ex Marquesado','Oaxaca de Juárez',68030 ),
('Av. Universidad #560','Santa Rosa	','Oaxaca de Juárez',68120 ),
('Calle de los Derechos #101','Reforma','Oaxaca de Juárez',68050 );

INSERT INTO hospital (nombre, id_tipo, id_director, id_ubicaciongeo, id_direccion) VALUES
('Hospital General Dr. Aurelio Valdivieso', 2, 1, 1, 1),
('HRAEO (Hospital Regional de Alta Especialidad)', 2, 2, 2, 2),
('Hospital General de Zona No. 1 del IMSS', 2, 3, 3, 3),
('Hospital de la Mujer y el Niño Oaxaqueño', 1, 4, 4, 4),
('Hospital Reforma', 1, 5, 5, 5);

INSERT INTO areas(nombre, capacidad, id_hospital) VALUES
('urgencias', 30, 5),
('neonatologia', 55, 4), 
('terapia intensiva', 20, 3),
('oncologia', 27, 2), 
('cirujia general', 19, 1);


