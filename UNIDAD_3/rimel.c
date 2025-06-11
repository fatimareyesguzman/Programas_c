//rimel tabla
#include <stdio.h>
#include <stdlib.h>
#include <C:\Program Files\MySQL\MySQL Server 8.0\include\mysql.h>

MYSQL *con;

void finish_with_error() {
    fprintf(stderr, "%s\n", mysql_error(con));
    mysql_close(con);
    exit(1);
}

void conectar() {
    con = mysql_init(NULL);
    if (con == NULL) {
        fprintf(stderr, "mysql_init() falló\n");
        exit(1);
    }

    if (mysql_real_connect(con, "localhost", "root", "12345678", "rimel", 3306, NULL, 0) == NULL) {
        finish_with_error();
    }
    printf("Conexion exitosa");
}




void crear_rimel(const char *marca, const char *resistencia, const char *color, const char *contenido, const char *cepillo, const char *formula, const char *efecto) {
    char query[256];
    snprintf(query, sizeof(query),
        "INSERT INTO datos(marca, resistencia, color, contenido, cepillo, formula, efecto) VALUES('%s','%s','%s','%s','%s','%s','%s')",
        marca, resistencia, color, contenido, cepillo, formula, efecto);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Rimel creado.\n");
    }
}




void leer_rimel() {
    if (mysql_query(con, "SELECT id_rimel, marca, resistencia, color, contenido, cepillo, formula, efecto FROM datos")) {
        finish_with_error();
    }

    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    int num_fields = mysql_num_fields(result);
    MYSQL_FIELD *fields = mysql_fetch_fields(result); 

    for (int i = 0; i < num_fields; i++) {
        printf("%s\t", fields[i].name);
    }
    printf("\n");

    MYSQL_ROW row;
    while ((row = mysql_fetch_row(result))) {
        for (int i = 0; i < num_fields; i++) {
            printf("%s\t", row[i] ? row[i] : "NULL");
        }
        printf("\n");
    }

    mysql_free_result(result);
}



void leer_rimel2() {
    if (mysql_query(con, "SELECT id_rimel, marca, resistencia, color FROM datos")) {
        finish_with_error();
    }

    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    int num_fields = mysql_num_fields(result);
    MYSQL_FIELD *fields = mysql_fetch_fields(result); 

    for (int i = 0; i < num_fields; i++) {
        printf("%s\t", fields[i].name);
    }
    printf("\n");

    MYSQL_ROW row;
    while ((row = mysql_fetch_row(result))) {
        for (int i = 0; i < num_fields; i++) {
            printf("%s\t", row[i] ? row[i] : "NULL");
        }
        printf("\n");
    }

    mysql_free_result(result);
}




void actualizar_rimel(int id_rimel, const char *nueva_marca, const char *nueva_resistencia) {
    char query[256];
    snprintf(query, sizeof(query),
        "UPDATE datos SET marca='%s', resistencia='%s' WHERE id_rimel=%d",
        nueva_marca, nueva_resistencia, id_rimel);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Rimel actualizada.\n");
    }
}




void eliminar_rimel(int id_rimel) {
    char query[128];
    snprintf(query, sizeof(query), "DELETE FROM datos WHERE id_rimel=%d", id_rimel);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("RIMEL eliminada.\n");
    }
}




int main() {
    conectar();
    int opc, id_rimel;
    char marca[100], resistencia[100], color[100], contenido[100], cepillo[100], formula[100], efecto[100];

    printf("Selecciona una opcion\n");
    printf("1. Crear\n");
    printf("2. Listar\n");
    printf("3. Borrar\n");
    printf("4. Actualizar\n");
    printf("5. Cerrar database\n");
    scanf("%d", &opc);

    switch (opc){
        case 1:
            printf("Dame la marca:\n"); 
            scanf("%s", marca); 
            printf("Dame la resistencia:\n"); 
            scanf("%s", resistencia); 
            printf("Dame el color:\n"); 
            scanf("%s", color);
            printf("Dame el contenido:\n");
            scanf("%s", contenido);
            printf("Dame el cepillo:\n"); 
            scanf("%s", cepillo);
            printf("Dame la formula:\n"); 
            scanf("%s", formula);
            printf("Dame el efecto:\n"); 
            scanf("%s", efecto);
            crear_rimel(marca, resistencia, color, contenido, cepillo, formula, efecto);
            break;

        case 2:
            leer_rimel();
            break;

        case 3:
            leer_rimel2 ();
            printf("Inserte el id que desea borrar:\n");
            scanf("%d", &id_rimel);
            eliminar_rimel(id_rimel);
            break;

        case 4:
        leer_rimel2();
            printf("Dame el id del rimel que quiere modificar:\n"); 
            scanf("%d", &id_rimel);
            printf("Dame la nueva marca:\n");
            scanf("%s", marca);
            printf("Dame la nueva resistencia:\n"); 
            scanf("%s", resistencia);
            actualizar_rimel(id_rimel, marca, resistencia);
            break;

        case 5:
            mysql_close(con);
            printf("Conexión cerrada.\n");
            break;

        default:
            printf("Opción inválida.\n");
    }

    return 0;
}
