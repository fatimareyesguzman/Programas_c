#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <C:\Program Files\MySQL\MySQL Server 8.0\include\mysql.h>


typedef struct {
    int id_asociacion;
    char CIF[101];         
    char denominacion[101]; 
    char direccion[101];   
    char provincia[101]; 
    char tipo[101];        
    char utilidadpub[101]; 
} Asociacion;

typedef struct {
    int id_proyectos;
    char beneficios[101]; 
    char objetivo[101];   
    char zona[101];       
    char pais[101];       
    int id_asociacion;
    int id_padre;    
} Proyectos;

typedef struct {
    int id_participantes;
    char dni[101];        
    char nombre[101];     
    int id_asociacion;    
} Participantes;

typedef struct {
    int id_trabajadores;
    char fechaingreso[11]; 
    int id_participantes; 
} Trabajadores;

typedef struct {
    int id_asalariados;
    char cargo[101];      
    double sueldo;         
    double irpf;           
    double seguro;         
    int id_participantes;
} Asalariados;

typedef struct {
    int id_socios;
    char direccion[101];       
    char provincia[101];       
    char fechaalta[11];        
    double cuotamensual;       
    double aportacionanual;    
    int id_trabajadores;       
} Socios;

typedef struct {
    int id_voluntarios;
    char edad[101];            
    char profesion[101];      
    int horas;              
    int id_trabajadores;       
} Voluntarios;


MYSQL *con;


void finish_with_error() {
    fprintf(stderr, "Error de MySQL: %s\n", mysql_error(con));
    if (con != NULL) {
        mysql_close(con);
    }
    exit(1);
}

void conectar() {
    con = mysql_init(NULL);
    if (con == NULL) {
        fprintf(stderr, "mysql_init() falló\n");
        exit(1);
    }
    if (mysql_real_connect(con, "localhost", "root", "1234", "ongs", 3306, NULL, 0) == NULL) {
        finish_with_error();
    }
    printf("Conexión a la base de datos 'ongs' establecida correctamente.\n");
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

void get_string_input(char *buffer, size_t buffer_size) {
    if (fgets(buffer, buffer_size, stdin) != NULL) {
        size_t len = strcspn(buffer, "\n");
        buffer[len] = '\0';
        if (len == buffer_size - 1 && buffer[len] != '\n' && feof(stdin) == 0) {
            fprintf(stderr, "Advertencia: La entrada pudo ser truncada. Limpiando el buffer.\n");
            clear_input_buffer(); 
        }
    } else {
        fprintf(stderr, "Error leyendo la entrada.\n");
        buffer[0] = '\0'; 
    }
}

void display_main_menu() {
    printf("\n----- MENU PRINCIPAL DE GESTION DE ONGS -----\n");
    printf("1. Gestionar Asociaciones\n");
    printf("2. Gestionar Proyectos\n");
    printf("3. Gestionar Participantes\n");
    printf("4. Gestionar Trabajadores\n");
    printf("5. Gestionar Asalariados\n");
    printf("6. Gestionar Socios\n");
    printf("7. Gestionar Voluntarios\n");
    printf("8. Salir del programa\n");
    printf("Opcion: ");
}

void display_crud_menu(const char* table_name) {
    printf("\n----- GESTION DE %s -----\n", table_name);
    printf("1. Insertar %s\n", table_name);
    printf("2. Consultar %s\n", table_name);
    printf("3. Modificar %s\n", table_name);
    printf("4. Eliminar %s\n", table_name);
    printf("5. Volver al menu principal\n");
    printf("Opcion: ");
}


void insert_asociacion();
void read_asociaciones();
void update_asociacion();
void delete_asociacion();

void insert_proyectos();
void read_proyectos();
void update_proyectos();
void delete_proyectos();

void insert_participantes();
void read_participantes();
void update_participantes();
void delete_participantes();

void insert_trabajadores();
void read_trabajadores();
void update_trabajadores();
void delete_trabajadores();

void insert_asalariados();
void read_asalariados();
void update_asalariados();
void delete_asalariados();

void insert_socios();
void read_socios();
void update_socios();
void delete_socios();

void insert_voluntarios();
void read_voluntarios();
void update_voluntarios();
void delete_voluntarios();


void handle_crud_choice(int main_option, int crud_option) {
    switch (main_option) {
        case 1: 
            switch (crud_option) {
                case 1: insert_asociacion(); break;
                case 2: read_asociaciones(); break;
                case 3: update_asociacion(); break;
                case 4: delete_asociacion(); break;
                default: printf("Opcion CRUD invalida para Asociacion.\n"); break;
            }
            break;
        case 2: // Proyectos
            switch (crud_option) {
                case 1: insert_proyectos(); break;
                case 2: read_proyectos(); break;
                case 3: update_proyectos(); break;
                case 4: delete_proyectos(); break;
                default: printf("Opcion CRUD invalida para Proyectos.\n"); break;
            }
            break;
        case 3: // Participantes
            switch (crud_option) {
                case 1: insert_participantes(); break;
                case 2: read_participantes(); break;
                case 3: update_participantes(); break;
                case 4: delete_participantes(); break;
                default: printf("Opcion CRUD invalida para Participantes.\n"); break;
            }
            break;
        case 4: // Trabajadores
            switch (crud_option) {
                case 1: insert_trabajadores(); break;
                case 2: read_trabajadores(); break;
                case 3: update_trabajadores(); break;
                case 4: delete_trabajadores(); break;
                default: printf("Opcion CRUD invalida para Trabajadores.\n"); break;
            }
            break;
        case 5: // Asalariados
            switch (crud_option) {
                case 1: insert_asalariados(); break;
                case 2: read_asalariados(); break;
                case 3: update_asalariados(); break;
                case 4: delete_asalariados(); break;
                default: printf("Opcion CRUD invalida para Asalariados.\n"); break;
            }
            break;
        case 6: // Socios
            switch (crud_option) {
                case 1: insert_socios(); break;
                case 2: read_socios(); break;
                case 3: update_socios(); break;
                case 4: delete_socios(); break;
                default: printf("Opcion CRUD invalida para Socios.\n"); break;
            }
            break;
        case 7: // Voluntarios
            switch (crud_option) {
                case 1: insert_voluntarios(); break;
                case 2: read_voluntarios(); break;
                case 3: update_voluntarios(); break;
                case 4: delete_voluntarios(); break;
                default: printf("Opcion CRUD invalida para Voluntarios.\n"); break;
            }
            break;
        default:
            printf("Opcion de tabla invalida en handle_crud_choice.\n");
            break;
    }
}


// --- Funciones CRUD para Asociacion ---
void insert_asociacion() {
    Asociacion a;
    printf("--- Insertar Asociacion ---\n");
    clear_input_buffer(); // Limpiar el buffer si se llama después de un scanf
    printf("CIF: ");
    get_string_input(a.CIF, sizeof(a.CIF));
    printf("Denominacion: ");
    get_string_input(a.denominacion, sizeof(a.denominacion));
    printf("Direccion: ");
    get_string_input(a.direccion, sizeof(a.direccion));
    printf("Provincia: ");
    get_string_input(a.provincia, sizeof(a.provincia));
    printf("Tipo: ");
    get_string_input(a.tipo, sizeof(a.tipo));
    printf("Utilidad Publica (Si/No): ");
    get_string_input(a.utilidadpub, sizeof(a.utilidadpub));

    char query[512];
    snprintf(query, sizeof(query), "INSERT INTO asociacion (CIF, denominacion, direccion, provincia, tipo, utilidadpub) VALUES('%s', '%s', '%s', '%s', '%s', '%s')",
             a.CIF, a.denominacion, a.direccion, a.provincia, a.tipo, a.utilidadpub);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Asociacion insertada correctamente.\n");
    }
}

void read_asociaciones() {
    printf("--- Listado de Asociaciones ---\n");
    if (mysql_query(con, "SELECT id_asociacion, CIF, denominacion, direccion, provincia, tipo, utilidadpub FROM asociacion")) {
        finish_with_error();
    }
    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    MYSQL_ROW row;
    printf("%-5s %-15s %-25s %-25s %-15s %-15s %-15s\n", "ID", "CIF", "Denominacion", "Direccion", "Provincia", "Tipo", "Util.Pub");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    while ((row = mysql_fetch_row(result))) {
        printf("%-5s %-15s %-25s %-25s %-15s %-15s %-15s\n",
               row[0] ? row[0] : "NULL", row[1] ? row[1] : "NULL", row[2] ? row[2] : "NULL",
               row[3] ? row[3] : "NULL", row[4] ? row[4] : "NULL", row[5] ? row[5] : "NULL",
               row[6] ? row[6] : "NULL");
    }
    mysql_free_result(result);
}

void update_asociacion() {
    Asociacion a;
    printf("--- Actualizar Asociacion ---\n");
    read_asociaciones();
    printf("ID de la asociacion a actualizar: ");
    if (scanf("%d", &a.id_asociacion) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de scanf
    printf("Nuevo CIF: ");
    get_string_input(a.CIF, sizeof(a.CIF));
    printf("Nueva Denominacion: ");
    get_string_input(a.denominacion, sizeof(a.denominacion));
    printf("Nueva Direccion: ");
    get_string_input(a.direccion, sizeof(a.direccion));
    printf("Nueva Provincia: ");
    get_string_input(a.provincia, sizeof(a.provincia));
    printf("Nuevo Tipo: ");
    get_string_input(a.tipo, sizeof(a.tipo));
    printf("Nueva Utilidad Publica (Si/No): ");
    get_string_input(a.utilidadpub, sizeof(a.utilidadpub));

    char query[512];
    snprintf(query, sizeof(query), "UPDATE asociacion SET CIF='%s', denominacion='%s', direccion='%s', provincia='%s', tipo='%s', utilidadpub='%s' WHERE id_asociacion=%d",
             a.CIF, a.denominacion, a.direccion, a.provincia, a.tipo, a.utilidadpub, a.id_asociacion);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Asociacion actualizada correctamente.\n");
    }
}

void delete_asociacion() {
    int id;
    printf("--- Eliminar Asociacion ---\n");
    read_asociaciones();
    printf("ID de la asociacion a eliminar: ");
    if (scanf("%d", &id) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf porque no le sigue un get_string_input

    char query[128];
    snprintf(query, sizeof(query), "DELETE FROM asociacion WHERE id_asociacion=%d", id);

    if (mysql_query(con, query)) {
        // Manejar errores específicos si hay claves foráneas que impiden la eliminación
        fprintf(stderr, "Error al eliminar asociacion: %s\n", mysql_error(con));
        printf("Asegurese de que no haya proyectos o participantes asociados a esta asociacion.\n");
    } else {
        printf("Asociacion eliminada correctamente.\n");
    }
}

// --- Funciones CRUD para Proyectos ---
void insert_proyectos() {
    Proyectos p;
    printf("--- Insertar Proyecto ---\n");
    clear_input_buffer(); // Limpiar el buffer si se llama después de un scanf
    printf("Beneficios: ");
    get_string_input(p.beneficios, sizeof(p.beneficios));
    printf("Objetivo: ");
    get_string_input(p.objetivo, sizeof(p.objetivo));
    printf("Zona: ");
    get_string_input(p.zona, sizeof(p.zona));
    printf("Pais: ");
    get_string_input(p.pais, sizeof(p.pais));

    read_asociaciones(); // Mostrar asociaciones para que el usuario elija
    printf("ID de la Asociacion (debe existir): ");
    if (scanf("%d", &p.id_asociacion) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de scanf

    printf("ID de Proyecto Padre (opcional, 0 si no aplica): ");
    char id_padre_str[10]; // Para leer el ID o "0"
    get_string_input(id_padre_str, sizeof(id_padre_str));
    if (strcmp(id_padre_str, "0") == 0) {
        p.id_padre = 0; // Indicador para NULL
    } else {
        p.id_padre = atoi(id_padre_str);
    }
    
    char query[512];
    if (p.id_padre == 0) {
        snprintf(query, sizeof(query), "INSERT INTO proyectos (beneficios, objetivo, zona, pais, id_asociacion, id_padre) VALUES('%s', '%s', '%s', '%s', %d, NULL)",
                 p.beneficios, p.objetivo, p.zona, p.pais, p.id_asociacion);
    } else {
        snprintf(query, sizeof(query), "INSERT INTO proyectos (beneficios, objetivo, zona, pais, id_asociacion, id_padre) VALUES('%s', '%s', '%s', '%s', %d, %d)",
                 p.beneficios, p.objetivo, p.zona, p.pais, p.id_asociacion, p.id_padre);
    }

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Proyecto insertado correctamente.\n");
    }
}

void read_proyectos() {
    printf("--- Listado de Proyectos ---\n");
    // Se une con la tabla asociacion y proyectos (para el id_padre) para mostrar nombres legibles
    if (mysql_query(con, "SELECT p.id_proyectos, p.beneficios, p.objetivo, p.zona, p.pais, a.denominacion AS asociacion_nombre, ppadre.objetivo AS proyecto_padre_obj FROM proyectos p JOIN asociacion a ON p.id_asociacion = a.id_asociacion LEFT JOIN proyectos ppadre ON p.id_padre = ppadre.id_proyectos")) {
        finish_with_error();
    }
    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    MYSQL_ROW row;
    printf("%-5s %-15s %-20s %-15s %-15s %-25s %-20s\n", "ID", "Beneficios", "Objetivo", "Zona", "Pais", "Asociacion", "Proy. Padre");
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    while ((row = mysql_fetch_row(result))) {
        printf("%-5s %-15s %-20s %-15s %-15s %-25s %-20s\n",
               row[0] ? row[0] : "NULL", row[1] ? row[1] : "NULL", row[2] ? row[2] : "NULL",
               row[3] ? row[3] : "NULL", row[4] ? row[4] : "NULL", row[5] ? row[5] : "NULL",
               row[6] ? row[6] : "NULL");
    }
    mysql_free_result(result);
}

void update_proyectos() {
    Proyectos p;
    printf("--- Actualizar Proyecto ---\n");
    read_proyectos();
    printf("ID del proyecto a actualizar: ");
    if (scanf("%d", &p.id_proyectos) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de scanf
    printf("Nuevos Beneficios: ");
    get_string_input(p.beneficios, sizeof(p.beneficios));
    printf("Nuevo Objetivo: ");
    get_string_input(p.objetivo, sizeof(p.objetivo));
    printf("Nueva Zona: ");
    get_string_input(p.zona, sizeof(p.zona));
    printf("Nuevo Pais: ");
    get_string_input(p.pais, sizeof(p.pais));

    read_asociaciones(); // Mostrar asociaciones para que el usuario elija
    printf("Nuevo ID de la Asociacion (debe existir): ");
    if (scanf("%d", &p.id_asociacion) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de scanf

    printf("Nuevo ID de Proyecto Padre (opcional, 0 si no aplica): ");
    char id_padre_str[10];
    get_string_input(id_padre_str, sizeof(id_padre_str));
    if (strcmp(id_padre_str, "0") == 0) {
        p.id_padre = 0; // Indicador para NULL
    } else {
        p.id_padre = atoi(id_padre_str);
    }

    char query[512];
    if (p.id_padre == 0) {
        snprintf(query, sizeof(query), "UPDATE proyectos SET beneficios='%s', objetivo='%s', zona='%s', pais='%s', id_asociacion=%d, id_padre=NULL WHERE id_proyectos=%d",
                 p.beneficios, p.objetivo, p.zona, p.pais, p.id_asociacion, p.id_proyectos);
    } else {
        snprintf(query, sizeof(query), "UPDATE proyectos SET beneficios='%s', objetivo='%s', zona='%s', pais='%s', id_asociacion=%d, id_padre=%d WHERE id_proyectos=%d",
                 p.beneficios, p.objetivo, p.zona, p.pais, p.id_asociacion, p.id_padre, p.id_proyectos);
    }

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Proyecto actualizado correctamente.\n");
    }
}

void delete_proyectos() {
    int id;
    printf("--- Eliminar Proyecto ---\n");
    read_proyectos();
    printf("ID del proyecto a eliminar: ");
    if (scanf("%d", &id) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[128];
    snprintf(query, sizeof(query), "DELETE FROM proyectos WHERE id_proyectos=%d", id);

    if (mysql_query(con, query)) {
        fprintf(stderr, "Error al eliminar proyecto: %s\n", mysql_error(con));
        printf("Asegurese de que no haya otros proyectos que dependan de este (id_padre) o que este en tablas como Socios o Voluntarios.\n");
    } else {
        printf("Proyecto eliminado correctamente.\n");
    }
}

// --- Funciones CRUD para Participantes ---
void insert_participantes() {
    Participantes p;
    printf("--- Insertar Participante ---\n");
    clear_input_buffer(); // Limpiar el buffer si se llama después de un scanf
    printf("DNI: ");
    get_string_input(p.dni, sizeof(p.dni));
    printf("Nombre: ");
    get_string_input(p.nombre, sizeof(p.nombre));

    read_asociaciones(); // Mostrar asociaciones para que el usuario elija
    printf("ID de la Asociacion a la que pertenece (debe existir): ");
    if (scanf("%d", &p.id_asociacion) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf porque no le sigue un get_string_input

    char query[512];
    snprintf(query, sizeof(query), "INSERT INTO participantes (dni, nombre, id_asociacion) VALUES('%s', '%s', %d)",
             p.dni, p.nombre, p.id_asociacion);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Participante insertado correctamente.\n");
    }
}

void read_participantes() {
    printf("--- Listado de Participantes ---\n");
    // Unir con la tabla asociacion para mostrar el nombre de la asociacion
    if (mysql_query(con, "SELECT p.id_participantes, p.dni, p.nombre, a.denominacion AS asociacion_nombre FROM participantes p JOIN asociacion a ON p.id_asociacion = a.id_asociacion")) {
        finish_with_error();
    }
    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    MYSQL_ROW row;
    printf("%-5s %-15s %-25s %-25s\n", "ID", "DNI", "Nombre", "Asociacion");
    printf("--------------------------------------------------------------------------\n");
    while ((row = mysql_fetch_row(result))) {
        printf("%-5s %-15s %-25s %-25s\n",
               row[0] ? row[0] : "NULL", row[1] ? row[1] : "NULL", row[2] ? row[2] : "NULL",
               row[3] ? row[3] : "NULL");
    }
    mysql_free_result(result);
}

void update_participantes() {
    Participantes p;
    printf("--- Actualizar Participante ---\n");
    read_participantes();
    printf("ID del participante a actualizar: ");
    if (scanf("%d", &p.id_participantes) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de scanf
    printf("Nuevo DNI: ");
    get_string_input(p.dni, sizeof(p.dni));
    printf("Nuevo Nombre: ");
    get_string_input(p.nombre, sizeof(p.nombre));

    read_asociaciones(); // Mostrar asociaciones para que el usuario elija
    printf("Nuevo ID de la Asociacion a la que pertenece (debe existir): ");
    if (scanf("%d", &p.id_asociacion) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[512];
    snprintf(query, sizeof(query), "UPDATE participantes SET dni='%s', nombre='%s', id_asociacion=%d WHERE id_participantes=%d",
             p.dni, p.nombre, p.id_asociacion, p.id_participantes);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Participante actualizado correctamente.\n");
    }
}

void delete_participantes() {
    int id;
    printf("--- Eliminar Participante ---\n");
    read_participantes();
    printf("ID del participante a eliminar: ");
    if (scanf("%d", &id) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[128];
    snprintf(query, sizeof(query), "DELETE FROM participantes WHERE id_participantes=%d", id);

    if (mysql_query(con, query)) {
        fprintf(stderr, "Error al eliminar participante: %s\n", mysql_error(con));
        printf("Asegurese de que no este asociado a un trabajador o asalariado.\n");
    } else {
        printf("Participante eliminado correctamente.\n");
    }
}

// --- Funciones CRUD para Trabajadores ---
void insert_trabajadores() {
    Trabajadores t;
    printf("--- Insertar Trabajador ---\n");
    clear_input_buffer(); // Limpiar el buffer si se llama después de un scanf
    printf("Fecha de ingreso (YYYY-MM-DD): ");
    get_string_input(t.fechaingreso, sizeof(t.fechaingreso));

    read_participantes(); // Mostrar participantes para que el usuario elija
    printf("ID del Participante asociado (debe existir): ");
    if (scanf("%d", &t.id_participantes) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[256];
    snprintf(query, sizeof(query), "INSERT INTO trabajadores (fechaingreso, id_participantes) VALUES('%s', %d)",
             t.fechaingreso, t.id_participantes);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Trabajador insertado correctamente.\n");
    }
}

void read_trabajadores() {
    printf("--- Listado de Trabajadores ---\n");
    // Unir con la tabla participantes para mostrar el nombre del participante
    if (mysql_query(con, "SELECT t.id_trabajadores, t.fechaingreso, p.nombre AS participante_nombre, p.dni FROM trabajadores t JOIN participantes p ON t.id_participantes = p.id_participantes")) {
        finish_with_error();
    }
    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    MYSQL_ROW row;
    printf("%-5s %-15s %-25s %-15s\n", "ID", "Fecha Ingreso", "Participante", "DNI Participante");
    printf("--------------------------------------------------------------------------\n");
    while ((row = mysql_fetch_row(result))) {
        printf("%-5s %-15s %-25s %-15s\n",
               row[0] ? row[0] : "NULL", row[1] ? row[1] : "NULL", row[2] ? row[2] : "NULL",
               row[3] ? row[3] : "NULL");
    }
    mysql_free_result(result);
}

void update_trabajadores() {
    Trabajadores t;
    printf("--- Actualizar Trabajador ---\n");
    read_trabajadores();
    printf("ID del trabajador a actualizar: ");
    if (scanf("%d", &t.id_trabajadores) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de scanf
    printf("Nueva Fecha de ingreso (YYYY-MM-DD): ");
    get_string_input(t.fechaingreso, sizeof(t.fechaingreso));

    read_participantes(); // Mostrar participantes para que el usuario elija
    printf("Nuevo ID del Participante asociado (debe existir): ");
    if (scanf("%d", &t.id_participantes) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[256];
    snprintf(query, sizeof(query), "UPDATE trabajadores SET fechaingreso='%s', id_participantes=%d WHERE id_trabajadores=%d",
             t.fechaingreso, t.id_participantes, t.id_trabajadores);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Trabajador actualizado correctamente.\n");
    }
}

void delete_trabajadores() {
    int id;
    printf("--- Eliminar Trabajador ---\n");
    read_trabajadores();
    printf("ID del trabajador a eliminar: ");
    if (scanf("%d", &id) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[128];
    snprintf(query, sizeof(query), "DELETE FROM trabajadores WHERE id_trabajadores=%d", id);

    if (mysql_query(con, query)) {
        fprintf(stderr, "Error al eliminar trabajador: %s\n", mysql_error(con));
        printf("Asegurese de que no este asociado a socios o voluntarios.\n");
    } else {
        printf("Trabajador eliminado correctamente.\n");
    }
}

// --- Funciones CRUD para Asalariados ---
void insert_asalariados() {
    Asalariados a;
    printf("--- Insertar Asalariado ---\n");
    clear_input_buffer(); // Limpiar el buffer si se llama después de un scanf
    printf("Cargo: ");
    get_string_input(a.cargo, sizeof(a.cargo));
    printf("Sueldo (ej. 1500.50): ");
    if (scanf("%lf", &a.sueldo) != 1) { // Usar %lf para double
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    printf("IRPF (entre 0 y 100, ej. 15.0): ");
    if (scanf("%lf", &a.irpf) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    printf("Seguro (ej. 120.75): ");
    if (scanf("%lf", &a.seguro) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de los scanfs

    read_participantes(); // Mostrar participantes para que el usuario elija
    printf("ID del Participante asociado (debe existir): ");
    if (scanf("%d", &a.id_participantes) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[512];
    snprintf(query, sizeof(query), "INSERT INTO asalariados (cargo, sueldo, irpf, seguro, id_participantes) VALUES('%s', %.2f, %.2f, %.2f, %d)",
             a.cargo, a.sueldo, a.irpf, a.seguro, a.id_participantes);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Asalariado insertado correctamente.\n");
    }
}

void read_asalariados() {
    printf("--- Listado de Asalariados ---\n");
    // Unir con la tabla participantes para mostrar el nombre y DNI del participante
    if (mysql_query(con, "SELECT a.id_asalariados, a.cargo, a.sueldo, a.irpf, a.seguro, p.nombre AS participante_nombre, p.dni FROM asalariados a JOIN participantes p ON a.id_participantes = p.id_participantes")) {
        finish_with_error();
    }
    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    MYSQL_ROW row;
    printf("%-5s %-15s %-10s %-7s %-7s %-25s %-15s\n", "ID", "Cargo", "Sueldo", "IRPF", "Seguro", "Participante", "DNI Part.");
    printf("--------------------------------------------------------------------------------------------------\n");
    while ((row = mysql_fetch_row(result))) {
        printf("%-5s %-15s %-10s %-7s %-7s %-25s %-15s\n",
               row[0] ? row[0] : "NULL", row[1] ? row[1] : "NULL", row[2] ? row[2] : "NULL",
               row[3] ? row[3] : "NULL", row[4] ? row[4] : "NULL", row[5] ? row[5] : "NULL",
               row[6] ? row[6] : "NULL");
    }
    mysql_free_result(result);
}

void update_asalariados() {
    Asalariados a;
    printf("--- Actualizar Asalariado ---\n");
    read_asalariados();
    printf("ID del asalariado a actualizar: ");
    if (scanf("%d", &a.id_asalariados) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de scanf
    printf("Nuevo Cargo: ");
    get_string_input(a.cargo, sizeof(a.cargo));
    printf("Nuevo Sueldo (ej. 1500.50): ");
    if (scanf("%lf", &a.sueldo) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    printf("Nuevo IRPF (entre 0 y 100, ej. 15.0): ");
    if (scanf("%lf", &a.irpf) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    printf("Nuevo Seguro (ej. 120.75): ");
    if (scanf("%lf", &a.seguro) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de los scanfs

    read_participantes(); // Mostrar participantes para que el usuario elija
    printf("Nuevo ID del Participante asociado (debe existir): ");
    if (scanf("%d", &a.id_participantes) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[512];
    snprintf(query, sizeof(query), "UPDATE asalariados SET cargo='%s', sueldo=%.2f, irpf=%.2f, seguro=%.2f, id_participantes=%d WHERE id_asalariados=%d",
             a.cargo, a.sueldo, a.irpf, a.seguro, a.id_participantes, a.id_asalariados);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Asalariado actualizado correctamente.\n");
    }
}

void delete_asalariados() {
    int id;
    printf("--- Eliminar Asalariado ---\n");
    read_asalariados();
    printf("ID del asalariado a eliminar: ");
    if (scanf("%d", &id) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[128];
    snprintf(query, sizeof(query), "DELETE FROM asalariados WHERE id_asalariados=%d", id);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Asalariado eliminado correctamente.\n");
    }
}

// --- Funciones CRUD para Socios ---
void insert_socios() {
    Socios s;
    printf("--- Insertar Socio ---\n");
    clear_input_buffer(); // Limpiar el buffer si se llama después de un scanf
    printf("Direccion: ");
    get_string_input(s.direccion, sizeof(s.direccion));
    printf("Provincia: ");
    get_string_input(s.provincia, sizeof(s.provincia));
    printf("Fecha de alta (YYYY-MM-DD): ");
    get_string_input(s.fechaalta, sizeof(s.fechaalta));
    printf("Cuota Mensual (ej. 25.00): ");
    if (scanf("%lf", &s.cuotamensual) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    printf("Aportacion Anual (ej. 300.00): ");
    if (scanf("%lf", &s.aportacionanual) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de los scanfs

    read_trabajadores(); // Mostrar trabajadores para que el usuario elija
    printf("ID del Trabajador asociado (debe existir): ");
    if (scanf("%d", &s.id_trabajadores) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[512];
    snprintf(query, sizeof(query), "INSERT INTO socios (direccion, provincia, fechaalta, cuotamensual, aportacionanual, id_trabajadores) VALUES('%s', '%s', '%s', %.2f, %.2f, %d)",
             s.direccion, s.provincia, s.fechaalta, s.cuotamensual, s.aportacionanual, s.id_trabajadores);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Socio insertado correctamente.\n");
    }
}

void read_socios() {
    printf("--- Listado de Socios ---\n");
    // Unir con la tabla trabajadores y participantes para mostrar el nombre y DNI del trabajador
    if (mysql_query(con, "SELECT s.id_socios, s.direccion, s.provincia, s.fechaalta, s.cuotamensual, s.aportacionanual, p.nombre AS trabajador_nombre, p.dni FROM socios s JOIN trabajadores t ON s.id_trabajadores = t.id_trabajadores JOIN participantes p ON t.id_participantes = p.id_participantes")) {
        finish_with_error();
    }
    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    MYSQL_ROW row;
    printf("%-5s %-20s %-15s %-15s %-10s %-15s %-25s %-15s\n", "ID", "Direccion", "Provincia", "Fecha Alta", "Cuota", "Aportacion", "Trabajador", "DNI Trab.");
    printf("------------------------------------------------------------------------------------------------------------------\n");
    while ((row = mysql_fetch_row(result))) {
        printf("%-5s %-20s %-15s %-15s %-10s %-15s %-25s %-15s\n",
               row[0] ? row[0] : "NULL", row[1] ? row[1] : "NULL", row[2] ? row[2] : "NULL",
               row[3] ? row[3] : "NULL", row[4] ? row[4] : "NULL", row[5] ? row[5] : "NULL",
               row[6] ? row[6] : "NULL", row[7] ? row[7] : "NULL");
    }
    mysql_free_result(result);
}

void update_socios() {
    Socios s;
    printf("--- Actualizar Socio ---\n");
    read_socios();
    printf("ID del socio a actualizar: ");
    if (scanf("%d", &s.id_socios) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de scanf
    printf("Nueva Direccion: ");
    get_string_input(s.direccion, sizeof(s.direccion));
    printf("Nueva Provincia: ");
    get_string_input(s.provincia, sizeof(s.provincia));
    printf("Nueva Fecha de alta (YYYY-MM-DD): ");
    get_string_input(s.fechaalta, sizeof(s.fechaalta));
    printf("Nueva Cuota Mensual (ej. 25.00): ");
    if (scanf("%lf", &s.cuotamensual) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    printf("Nueva Aportacion Anual (ej. 300.00): ");
    if (scanf("%lf", &s.aportacionanual) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de los scanfs

    read_trabajadores(); // Mostrar trabajadores para que el usuario elija
    printf("Nuevo ID del Trabajador asociado (debe existir): ");
    if (scanf("%d", &s.id_trabajadores) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[512];
    snprintf(query, sizeof(query), "UPDATE socios SET direccion='%s', provincia='%s', fechaalta='%s', cuotamensual=%.2f, aportacionanual=%.2f, id_trabajadores=%d WHERE id_socios=%d",
             s.direccion, s.provincia, s.fechaalta, s.cuotamensual, s.aportacionanual, s.id_trabajadores, s.id_socios);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Socio actualizado correctamente.\n");
    }
}

void delete_socios() {
    int id;
    printf("--- Eliminar Socio ---\n");
    read_socios();
    printf("ID del socio a eliminar: ");
    if (scanf("%d", &id) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[128];
    snprintf(query, sizeof(query), "DELETE FROM socios WHERE id_socios=%d", id);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Socio eliminado correctamente.\n");
    }
}

// --- Funciones CRUD para Voluntarios ---
void insert_voluntarios() {
    Voluntarios v;
    printf("--- Insertar Voluntario ---\n");
    clear_input_buffer(); // Limpiar el buffer si se llama después de un scanf
    printf("Edad: ");
    get_string_input(v.edad, sizeof(v.edad)); // Se permite VARCHAR(100) para "edad"
    printf("Profesion: ");
    get_string_input(v.profesion, sizeof(v.profesion));
    printf("Horas semanales: ");
    if (scanf("%d", &v.horas) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de scanf

    read_trabajadores(); // Mostrar trabajadores para que el usuario elija
    printf("ID del Trabajador asociado (debe existir): ");
    if (scanf("%d", &v.id_trabajadores) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[512];
    snprintf(query, sizeof(query), "INSERT INTO voluntarios (edad, profesion, horas, id_trabajadores) VALUES('%s', '%s', %d, %d)",
             v.edad, v.profesion, v.horas, v.id_trabajadores);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Voluntario insertado correctamente.\n");
    }
}

void read_voluntarios() {
    printf("--- Listado de Voluntarios ---\n");
    // Unir con la tabla trabajadores y participantes para mostrar el nombre y DNI del trabajador
    if (mysql_query(con, "SELECT v.id_voluntarios, v.edad, v.profesion, v.horas, p.nombre AS trabajador_nombre, p.dni FROM voluntarios v JOIN trabajadores t ON v.id_trabajadores = t.id_trabajadores JOIN participantes p ON t.id_participantes = p.id_participantes")) {
        finish_with_error();
    }
    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    MYSQL_ROW row;
    printf("%-5s %-10s %-20s %-7s %-25s %-15s\n", "ID", "Edad", "Profesion", "Horas", "Trabajador", "DNI Trab.");
    printf("----------------------------------------------------------------------------------------\n");
    while ((row = mysql_fetch_row(result))) {
        printf("%-5s %-10s %-20s %-7s %-25s %-15s\n",
               row[0] ? row[0] : "NULL", row[1] ? row[1] : "NULL", row[2] ? row[2] : "NULL",
               row[3] ? row[3] : "NULL", row[4] ? row[4] : "NULL", row[5] ? row[5] : "NULL");
    }
    mysql_free_result(result);
}

void update_voluntarios() {
    Voluntarios v;
    printf("--- Actualizar Voluntario ---\n");
    read_voluntarios();
    printf("ID del voluntario a actualizar: ");
    if (scanf("%d", &v.id_voluntarios) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de scanf
    printf("Nueva Edad: ");
    get_string_input(v.edad, sizeof(v.edad));
    printf("Nueva Profesion: ");
    get_string_input(v.profesion, sizeof(v.profesion));
    printf("Nuevas Horas semanales: ");
    if (scanf("%d", &v.horas) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    clear_input_buffer(); // Limpiar el buffer después de scanf

    read_trabajadores(); // Mostrar trabajadores para que el usuario elija
    printf("Nuevo ID del Trabajador asociado (debe existir): ");
    if (scanf("%d", &v.id_trabajadores) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[512];
    snprintf(query, sizeof(query), "UPDATE voluntarios SET edad='%s', profesion='%s', horas=%d, id_trabajadores=%d WHERE id_voluntarios=%d",
             v.edad, v.profesion, v.horas, v.id_trabajadores, v.id_voluntarios);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Voluntario actualizado correctamente.\n");
    }
}

void delete_voluntarios() {
    int id;
    printf("--- Eliminar Voluntario ---\n");
    read_voluntarios();
    printf("ID del voluntario a eliminar: ");
    if (scanf("%d", &id) != 1) {
        clear_input_buffer();
        printf("Entrada invalida. Por favor, ingresa un numero.\n");
        return;
    }
    // No se necesita clear_input_buffer() después de este scanf

    char query[128];
    snprintf(query, sizeof(query), "DELETE FROM voluntarios WHERE id_voluntarios=%d", id);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Voluntario eliminado correctamente.\n");
    }
}

// --- Función Principal (main) ---

int main() {
    conectar(); // Establecer conexión a la base de datos al inicio

    int main_opc;
    int crud_opc;

    do {
        display_main_menu();
        if (scanf("%d", &main_opc) != 1) {
            clear_input_buffer();
            printf("Entrada invalida. Por favor, ingresa un numero.\n");
            continue;
        }
        clear_input_buffer(); 

       
        switch (main_opc) {
            case 1: // Gestionar Asociaciones
                // No se necesita una función menu_asociacion() explícita aquí,
                // ya que handle_crud_choice se usa directamente con la opción 1 (Asociacion)
                // y dentro de un bucle que presenta el menu CRUD de la tabla.
                do {
                    display_crud_menu("Asociaciones");
                    if (scanf("%d", &crud_opc) != 1) {
                        clear_input_buffer();
                        printf("Entrada invalida. Por favor, ingresa un numero.\n");
                        crud_opc = 0; // Para que se quede en el bucle CRUD
                        continue;
                    }
                    clear_input_buffer(); // Limpiar el buffer después de leer el número de opción del menú CRUD

                    if (crud_opc >= 1 && crud_opc <= 4) {
                        handle_crud_choice(main_opc, crud_opc); // main_opc = 1 (Asociaciones)
                    } else if (crud_opc != 5) {
                        printf("Opcion invalida. Por favor, intenta de nuevo.\n");
                    }
                } while (crud_opc != 5); // Bucle para el menú CRUD
                break;
            case 2: // Gestionar Proyectos
                do {
                    display_crud_menu("Proyectos");
                    if (scanf("%d", &crud_opc) != 1) {
                        clear_input_buffer();
                        printf("Entrada invalida. Por favor, ingresa un numero.\n");
                        crud_opc = 0;
                        continue;
                    }
                    clear_input_buffer();
                    if (crud_opc >= 1 && crud_opc <= 4) {
                        handle_crud_choice(main_opc, crud_opc); // main_opc = 2 (Proyectos)
                    } else if (crud_opc != 5) {
                        printf("Opcion invalida. Por favor, intenta de nuevo.\n");
                    }
                } while (crud_opc != 5);
                break;
            case 3: // Gestionar Participantes
                do {
                    display_crud_menu("Participantes");
                    if (scanf("%d", &crud_opc) != 1) {
                        clear_input_buffer();
                        printf("Entrada invalida. Por favor, ingresa un numero.\n");
                        crud_opc = 0;
                        continue;
                    }
                    clear_input_buffer();
                    if (crud_opc >= 1 && crud_opc <= 4) {
                        handle_crud_choice(main_opc, crud_opc); // main_opc = 3 (Participantes)
                    } else if (crud_opc != 5) {
                        printf("Opcion invalida. Por favor, intenta de nuevo.\n");
                    }
                } while (crud_opc != 5);
                break;
            case 4: // Gestionar Trabajadores
                do {
                    display_crud_menu("Trabajadores");
                    if (scanf("%d", &crud_opc) != 1) {
                        clear_input_buffer();
                        printf("Entrada invalida. Por favor, ingresa un numero.\n");
                        crud_opc = 0;
                        continue;
                    }
                    clear_input_buffer();
                    if (crud_opc >= 1 && crud_opc <= 4) {
                        handle_crud_choice(main_opc, crud_opc); // main_opc = 4 (Trabajadores)
                    } else if (crud_opc != 5) {
                        printf("Opcion invalida. Por favor, intenta de nuevo.\n");
                    }
                } while (crud_opc != 5);
                break;
            case 5: // Gestionar Asalariados
                do {
                    display_crud_menu("Asalariados");
                    if (scanf("%d", &crud_opc) != 1) {
                        clear_input_buffer();
                        printf("Entrada invalida. Por favor, ingresa un numero.\n");
                        crud_opc = 0;
                        continue;
                    }
                    clear_input_buffer();
                    if (crud_opc >= 1 && crud_opc <= 4) {
                        handle_crud_choice(main_opc, crud_opc); // main_opc = 5 (Asalariados)
                    } else if (crud_opc != 5) {
                        printf("Opcion invalida. Por favor, intenta de nuevo.\n");
                    }
                } while (crud_opc != 5);
                break;
            case 6: // Gestionar Socios
                do {
                    display_crud_menu("Socios");
                    if (scanf("%d", &crud_opc) != 1) {
                        clear_input_buffer();
                        printf("Entrada invalida. Por favor, ingresa un numero.\n");
                        crud_opc = 0;
                        continue;
                    }
                    clear_input_buffer();
                    if (crud_opc >= 1 && crud_opc <= 4) {
                        handle_crud_choice(main_opc, crud_opc); // main_opc = 6 (Socios)
                    } else if (crud_opc != 5) {
                        printf("Opcion invalida. Por favor, intenta de nuevo.\n");
                    }
                } while (crud_opc != 5);
                break;
            case 7: // Gestionar Voluntarios
                do {
                    display_crud_menu("Voluntarios");
                    if (scanf("%d", &crud_opc) != 1) {
                        clear_input_buffer();
                        printf("Entrada invalida. Por favor, ingresa un numero.\n");
                        crud_opc = 0;
                        continue;
                    }
                    clear_input_buffer();
                    if (crud_opc >= 1 && crud_opc <= 4) {
                        handle_crud_choice(main_opc, crud_opc); // main_opc = 7 (Voluntarios)
                    } else if (crud_opc != 5) {
                        printf("Opcion invalida. Por favor, intenta de nuevo.\n");
                    }
                } while (crud_opc != 5);
                break;
            case 8:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion invalida. Por favor, selecciona un numero entre 1 y 8.\n");
                break;
        }
    } while (main_opc != 8); // Bucle para el menú principal

    mysql_close(con); // Cerrar la conexión al salir del programa
    return 0;
}