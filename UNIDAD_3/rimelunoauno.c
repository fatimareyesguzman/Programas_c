#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <C:\Program Files\MySQL\MySQL Server 8.0\include\mysql.h>

typedef struct {
    int id;
    char marcas[100];
    int codigo;
} Rimel;

typedef struct {
    int id;
    int rimel_id;
    char cepillo[20];
} Cepillo;

MYSQL *con;

void finish_with_error() {
    fprintf(stderr, "%s\n", mysql_error(con));
    mysql_close(con);
    exit(1);
}

void conectar() {
    con = mysql_init(NULL);
    if (con == NULL) {
        fprintf(stderr, "mysql_init() fallo\n");
        exit(1);
    }

    if (mysql_real_connect(con, "localhost", "root", "12345678", "rimel1a1",
        3306, "/Applications/MAMP/tmp/mysql/mysql.sock", 0) == NULL) {
        finish_with_error();
    }
}

int crear_rimel(const Rimel *rimel) {
    char query[256];
    snprintf(query, sizeof(query),
        "INSERT INTO rimel(marcas, codigo) VALUES('%s', %d)",
        rimel->marcas, rimel->codigo);

    if (mysql_query(con, query)) {
        finish_with_error();
    }

    return mysql_insert_id(con);
}

void agregar_cepillo(int rimel_id, const char *cepillo) {
    char query[256];
    snprintf(query, sizeof(query),
        "INSERT INTO cepillo(rimel_id, cepillo) VALUES(%d, '%s')",
        rimel_id, cepillo);

    if (mysql_query(con, query)) {
        finish_with_error();
    }
}

void leer_rimel_y_cepillo() {
    const char *query =
        "SELECT r.id, r.marcas, r.codigo, c.cepillo "
        "FROM rimel r LEFT JOIN cepillo c ON r.id = c.rimel_id "
        "ORDER BY r.id";

    if (mysql_query(con, query)) {
        finish_with_error();
    }

    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    MYSQL_ROW row;

    while ((row = mysql_fetch_row(result))) {
        int id = atoi(row[0]);
        const char *marca = row[1];
        int codigo = atoi(row[2]);
        const char *cepillo = row[3];

        printf("\nRimel ID: %d | Marca: %s | Codigo: %d\n", id, marca, codigo);
        if (cepillo != NULL) {
            printf("Cepillo: %s\n", cepillo);
        } else {
            printf("Cepillo: No asignado\n");
        }
    }

    mysql_free_result(result);
}

void eliminar_rimel(int id) {
    char query[128];
    snprintf(query, sizeof(query), "DELETE FROM rimel WHERE id=%d", id);

    if (mysql_query(con, query)) {
        finish_with_error();
    } else {
        printf("Rimel y su cepillo eliminado.\n");
    }
}

int main() {
    conectar();

    Rimel rimel = {0, "Loreal", 202};
    int rimel_id = crear_rimel(&rimel);

    agregar_cepillo(rimel_id, "silicon curveado");

    leer_rimel_y_cepillo();

    eliminar_rimel(rimel_id);

    mysql_close(con);
    return 0;
}
