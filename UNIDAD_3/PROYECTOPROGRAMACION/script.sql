CREATE DATABASE ongs;
USE ongs;

CREATE TABLE asociacion (
    id_asociacion INT PRIMARY KEY AUTO_INCREMENT,
    CIF VARCHAR(100),
    denominacion VARCHAR(100),
    direccion VARCHAR(100),
    provincia VARCHAR(100),
    tipo VARCHAR(100),
    utilidadpub VARCHAR(100)
);

CREATE TABLE proyectos (
    id_proyectos INT PRIMARY KEY AUTO_INCREMENT,
    beneficios VARCHAR(100),
    objetivo VARCHAR(100),
    zona VARCHAR(100),
    pais VARCHAR(100),
    id_asociacion INT,
    id_padre INT,
    FOREIGN KEY (id_asociacion) REFERENCES asociacion(id_asociacion),
    FOREIGN KEY (id_padre) REFERENCES proyectos(id_proyectos)
);

CREATE TABLE participantes (
    id_participantes INT PRIMARY KEY AUTO_INCREMENT,
    dni VARCHAR(100),
    nombre VARCHAR(100),
    id_asociacion INT,
    FOREIGN KEY (id_asociacion) REFERENCES asociacion(id_asociacion)
);

CREATE TABLE trabajadores (
    id_trabajadores INT PRIMARY KEY AUTO_INCREMENT,
    fechaingreso DATE,
    id_participantes INT,
    FOREIGN KEY (id_participantes) REFERENCES participantes(id_participantes)
);

CREATE TABLE asalariados (
    id_asalariados INT PRIMARY KEY AUTO_INCREMENT,
    cargo VARCHAR(100),
    sueldo DECIMAL(10,2) CHECK (sueldo >= 0),
    irpf DECIMAL(10,2) CHECK (irpf BETWEEN 0 AND 100),
    seguro DECIMAL(10,2) CHECK (seguro >= 0),
    id_participantes INT,
    FOREIGN KEY (id_participantes) REFERENCES participantes(id_participantes)
);

CREATE TABLE socios (
    id_socios INT PRIMARY KEY AUTO_INCREMENT,
    direccion VARCHAR(100),
    provincia VARCHAR(100),
    fechaalta DATE,
    cuotamensual DECIMAL(10,2) CHECK (cuotamensual >= 0),
    aportacionanual DECIMAL(10,2) CHECK (aportacionanual >= 0),
    id_trabajadores INT,
    FOREIGN KEY (id_trabajadores) REFERENCES trabajadores(id_trabajadores)
);

CREATE TABLE voluntarios (
    id_voluntarios INT PRIMARY KEY AUTO_INCREMENT,
    edad VARCHAR(100),
    profesion VARCHAR(100),
    horas INT CHECK (horas >= 0),
    id_trabajadores INT,
    FOREIGN KEY (id_trabajadores) REFERENCES trabajadores(id_trabajadores)
);

