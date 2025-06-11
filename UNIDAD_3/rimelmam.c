#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <C:\Program Files\MySQL\MySQL Server 8.0\include\mysql.h>

typedef struct {
    int id;
    char nombre[100];
    int codigo;
} Paleta;

typedef struct {
    int id;
    char nombre[100];
} Color;

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

    if (mysql_real_connect(con, "localhost", "root", "12345678", "bissu",
        3306, "/Applications/MAMP/tmp/mysql/mysql.sock", 0) == NULL) {
        finish_with_error();
    }
}

int crear_paleta(const Paleta *paleta) {
    char query[256];
    snprintf(query, sizeof(query),
        "INSERT INTO paleta(nombre, codigo) VALUES('%s', %d)",
        paleta->nombre, paleta->codigo);

    if (mysql_query(con, query)) {
        finish_with_error();
    }

    return mysql_insert_id(con);
}

int crear_color(const char *nombre) {
    char query[256];
    snprintf(query, sizeof(query),
        "INSERT INTO colores(nombre) VALUES('%s')", nombre);

    if (mysql_query(con, query)) {
        finish_with_error();
    }

    return mysql_insert_id(con);
}

void asociar_paleta_color(int paleta_id, int color_id) {
    char query[256];
    snprintf(query, sizeof(query),
        "INSERT INTO paleta_colores(paleta_id, colores_id) VALUES(%d, %d)",
        paleta_id, color_id);

    if (mysql_query(con, query)) {
        finish_with_error();
    }
}

void leer_paletas_y_colores() {
    const char *query =
        "SELECT p.id, p.nombre, p.codigo, c.nombre "
        "FROM paleta p "
        "JOIN paleta_colores pc ON p.id = pc.paleta_id "
        "JOIN colores c ON c.id = pc.colores_id "
        "ORDER BY p.id";

    if (mysql_query(con, query)) {
        finish_with_error();
    }

    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    MYSQL_ROW row;
    int last_id = -1;

    while ((row = mysql_fetch_row(result))) {
        int paleta_id = atoi(row[0]);
        const char *nombre = row[1];
        int codigo = atoi(row[2]);
        const char *color = row[3];

        if (paleta_id != last_id) {
            printf("\nPaleta ID: %d, Nombre: %s,Codigo: %d\n", paleta_id, nombre, codigo);
            printf("Colores:\n");
            last_id = paleta_id;
        }

        printf(" - %s\n", color);
    }

    mysql_free_result(result);
}

void leer_colores_y_paletas() {
    const char *query =
        "SELECT c.id, c.nombre, p.nombre, p.codigo "
        "FROM colores c "
        "JOIN paleta_colores pc ON c.id = pc.colores_id "
        "JOIN paleta p ON p.id = pc.paleta_id "
        "ORDER BY c.id";

    if (mysql_query(con, query)) {
        finish_with_error();
    }

    MYSQL_RES *result = mysql_store_result(con);
    if (result == NULL) {
        finish_with_error();
    }

    MYSQL_ROW row;
    int last_color_id = -1;

    while ((row = mysql_fetch_row(result))) {
        int color_id = atoi(row[0]);
        const char *color_nombre = row[1];
        const char *paleta_nombre = row[2];
        int paleta_codigo = atoi(row[3]);

        if (color_id != last_color_id) {
            printf("\nColor ID: %d, Nombre: %s\n", color_id, color_nombre);
            printf("Paletas:\n");
            last_color_id = color_id;
        }

        printf(" - %s (Codigo: %d)\n", paleta_nombre, paleta_codigo);
    }

    mysql_free_result(result);
}

int main() {
    conectar();

    Paleta paleta = {0, "Primavera", 123};
    int paleta_id = crear_paleta(&paleta);

    int color1 = crear_color("Rojo");
    int color2 = crear_color("Verde");

    asociar_paleta_color(paleta_id, color1);
    asociar_paleta_color(paleta_id, color2);

    printf("\nPaletas con sus colores\n");
    leer_paletas_y_colores();

    printf("\nColores con sus paletas\n");
    leer_colores_y_paletas();

    mysql_close(con);
    return 0;
}
