INSERT INTO asociacion (CIF, denominacion, direccion, provincia, tipo, utilidadpub) VALUES
('A10000001', 'Salud Global', 'Calle Vida 12', 'Madrid', 'Sanitaria', 'Sí'),
('B10000002', 'Educando Futuro', 'Av. Saber 8', 'Barcelona', 'Educativa', 'Sí'),
('C10000003', 'Verde Esperanza', 'Camino Bosque 5', 'Valencia', 'Ecológica', 'Sí'),
('D10000004', 'Ayuda Animal', 'Calle Patas 44', 'Sevilla', 'Protección Animal', 'No'),
('E10000005', 'Manos Unidas', 'Av. Unión 10', 'Zaragoza', 'Integración Social', 'Sí');

INSERT INTO participantes (dni, nombre, id_asociacion) VALUES
('11111111A', 'Ana Torres', 1),
('22222222B', 'Luis Martínez', 1),
('33333333C', 'Carmen López', 2),
('44444444D', 'Pedro Ruiz', 2),
('55555555E', 'Lucía Gómez', 3),
('66666666F', 'Carlos Díaz', 3),
('77777777G', 'Sara Cano', 4),
('88888888H', 'Javier Méndez', 4),
('99999999I', 'Nuria Salas', 5),
('00000000J', 'Diego Romero', 5),
('11112222A', 'Laura Rivas', 1),
('22223333B', 'Tomás Herrera', 1),
('33334444C', 'Beatriz Sánchez', 2),
('44445555D', 'Iván Molina', 2),
('55556666E', 'Elena Castro', 3),
('66667777F', 'Alberto Vidal', 3),
('77778888G', 'Claudia Reyes', 4),
('88889999H', 'Gustavo Ortega', 4),
('99990000I', 'Raquel Peña', 5),
('00001111J', 'Andrés Vega', 5),
('10101010A', 'Esteban Silva', 1),
('20202020B', 'María Paredes', 1),
('30303030C', 'Roberto León', 2),
('40404040D', 'Isabel Domínguez', 2),
('50505050E', 'Cristina Mar', 3),
('60606060F', 'Felipe Lobo', 3),
('70707070G', 'Teresa Campos', 4),
('80808080H', 'Ignacio Bravo', 4),
('90909090I', 'Julia Navarro', 5),
('00000001J', 'Emilio Duarte', 5);

INSERT INTO trabajadores (fechaingreso, id_participantes) VALUES
('2020-01-10', 1), ('2020-02-15', 2), ('2020-03-20', 3), ('2020-04-25', 4),
('2020-05-30', 5), ('2020-06-10', 6), ('2020-07-12', 7), ('2020-08-14', 8),
('2020-09-16', 9), ('2020-10-18', 10), ('2021-01-05', 11), ('2021-02-06', 12),
('2021-03-07', 13), ('2021-04-08', 14), ('2021-05-09', 15), ('2021-06-10', 16),
('2021-07-11', 17), ('2021-08-12', 18), ('2021-09-13', 19), ('2021-10-14', 20);

INSERT INTO asalariados (cargo, sueldo, irpf, seguro, id_participantes) VALUES
('Médico', 2500.00, 15.00, 300.00, 1),
('Ingeniero', 2200.00, 12.00, 250.00, 2),
('Profesor', 1800.00, 10.00, 200.00, 3),
('Coordinador', 2600.00, 18.00, 320.00, 4),
('Técnico', 2000.00, 14.00, 230.00, 5),
('Psicólogo', 2400.00, 16.00, 310.00, 6),
('Veterinario', 2100.00, 13.00, 260.00, 7),
('Gestor', 1900.00, 10.00, 220.00, 8),
('Analista', 2300.00, 17.00, 280.00, 9),
('Consultor', 2700.00, 19.00, 350.00, 10);

INSERT INTO voluntarios (edad, profesion, horas, id_trabajadores) VALUES
('28', 'Enfermero', 15, 11),
('32', 'Docente', 12, 12),
('24', 'Diseñadora', 10, 13),
('29', 'Arquitecto', 8, 14),
('30', 'Bióloga', 14, 15),
('27', 'Fontanero', 9, 16),
('31', 'Conductor', 16, 17),
('34', 'Psicóloga', 7, 18),
('26', 'Traductora', 11, 19),
('33', 'Investigador', 13, 20);

INSERT INTO socios (direccion, provincia, fechaalta, cuotamensual, aportacionanual, id_trabajadores) VALUES
('Calle Norte 1', 'Madrid', '2020-01-10', 25.00, 300.00, 1),
('Av. Este 2', 'Barcelona', '2020-02-15', 30.00, 360.00, 2),
('Paseo Sur 3', 'Valencia', '2020-03-20', 20.00, 240.00, 3),
('Calle Oeste 4', 'Sevilla', '2020-04-25', 35.00, 420.00, 4),
('Calle Central 5', 'Zaragoza', '2020-05-30', 28.00, 336.00, 5),
('Calle Paz 6', 'Madrid', '2020-06-10', 26.00, 312.00, 6),
('Av. Unión 7', 'Barcelona', '2020-07-12', 22.00, 264.00, 7),
('Calle Esperanza 8', 'Sevilla', '2020-08-14', 27.00, 324.00, 8),
('Camino Vida 9', 'Valencia', '2020-09-16', 24.00, 288.00, 9),
('Calle Ciencia 10', 'Zaragoza', '2020-10-18', 29.00, 348.00, 10);

INSERT INTO proyectos (beneficios, objetivo, zona, pais, id_asociacion, id_padre) VALUES
('Salud básica', 'Atención médica rural', 'Amazonas', 'Perú', 1, NULL),
('Educación móvil', 'Acceso a primaria', 'Oriente', 'Colombia', 2, NULL),
('Alimentos diarios', 'Nutrición infantil', 'Altiplano', 'Bolivia', 3, NULL),
('Reforestación', 'Replantar zonas verdes', 'Andes', 'Chile', 3, NULL),
('Protección animal', 'Rescate de fauna', 'Andalucía', 'España', 4, NULL),
('Agua potable', 'Saneamiento básico', 'Altiplano', 'Bolivia', 1, 1),
('Bibliotecas móviles', 'Fomentar lectura', 'Sierra', 'Ecuador', 2, 2),
('Huertos urbanos', 'Autonomía alimentaria', 'Cataluña', 'España', 3, 3),
('Campamentos de rescate', 'Albergue temporal', 'Norte', 'Siria', 4, 5),
('Talleres de ciencia', 'Innovación escolar', 'Madrid', 'España', 5, NULL);
