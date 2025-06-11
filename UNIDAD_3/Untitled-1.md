gcc -Wall -Wextra -g3 \
"C:/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3/demo.c" \
-IC:"C:/Program Files/MySQL/MySQL Server 8.0/include" \
"C:/Program Files/MySQL/MySQL Server 8.0/lib/libmysql.lib" \
-o "C:/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3/output/demo.exe"

CREATE TABLE personas (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nombre VARCHAR(100),
    edad INT
);






FATIMA@DESKTOP-1HK5T2D UCRT64 /c/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3
$ "C:/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3/output/demo.exe"                                                                                                
FATIMA@DESKTOP-1HK5T2D UCRT64 /c/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3
$ gcc -Wall -Wextra -g3 "C:/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3/demo.c" -IC:"C:/Program Files/MySQL/MySQL Server 8.0/include" "C:/Program Files/MySQL/MySQL Server 8.0/lib/libmysql.lib" -o "C:/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3/output/demo.exe"

FATIMA@DESKTOP-1HK5T2D UCRT64 /c/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3
$ "C:/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3/output/demo.exe"                                                                                                
FATIMA@DESKTOP-1HK5T2D UCRT64 /c/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3
$ gcc -Wall -Wextra -g3 "C:/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3/demo.c" -IC:"C:/Program Files/MySQL/MySQL Server 8.0/include" "C:/Program Files/MySQL/MySQL Server 8.0/lib/libmysql.a" -o "C:/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3/output/demo.exe"

FATIMA@DESKTOP-1HK5T2D UCRT64 /c/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3
$ "C:/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3/output/demo.exe"                                                                                                
FATIMA@DESKTOP-1HK5T2D UCRT64 /c/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3
$ cd /c/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3/output
./demo.exe
Iniciando...Conexion exitosaConexion exitosaPersona creada.
1       Ana     28
Persona actualizada.
Persona eliminada.

FATIMA@DESKTOP-1HK5T2D UCRT64 /c/Proyectos_programacion/GitHub/Programas_en_c/UNIDAD_3/output
$ ./demo.exe
Iniciando...Conexion exitosaConexion exitosaPersona creada.
2       Ana     28
Persona actualizada.
Persona eliminada.
