#include <stdio.h>

void limpiarpantalla() {
    printf("\033[2J");
}

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
void setColor(const char* color) {
    printf("%s", color);
}



void llenarMatriz(char *nombre, int matriz[3][3]) {
    int x, y;
    gotoxy(x + 5,  y);
    printf("%s", nombre);
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("  ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirmarco(int x, int y){
    for (int i = 0; i < 3; i++) {
        gotoxy(x, y + 1 + i);     
        printf("*");
        
        gotoxy(x + 15, y + 1 + i); 
        printf("*");
    }
}


void imprimirmatriz(int x, int y, char *nombre, int matriz[3][3]) {
    gotoxy(x + 5, y);
    printf("%s", nombre);
    
    
    for (int i = 0; i < 3; i++) {
        gotoxy(x, y + 1 + i);     
        printf("*");
        
        for (int j = 0; j < 3; j++) {
            gotoxy(x + 2 + j*4, y + 1 + i);
            printf("%3d", matriz[i][j]);
        }
        
        gotoxy(x + 15, y + 1 + i); 
        printf("*");
    }
}

void sumarMatriz(int matriz1[3][3], int matriz2[3][3], int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void restaMatriz(int matriz1[3][3], int matriz2[3][3], int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void escalarMatriz(int matriz1[3][3], int escalar, int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] * escalar;
        }
    }
}

int determinante(int MatrizA[3][3]) {
    int MatrizExp[3][5], determinante = 0;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            MatrizExp[i][j] = MatrizA[i][j];
        }
        for (j = 3; j < 5; j++)
        {
            MatrizExp[i][j] = MatrizA[i][j - 3];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        determinante += MatrizExp[0][i] * MatrizExp[1][i + 1] * MatrizExp[2][i + 2];
    }

    for (int i = 0; i < 3; i++)
    {
        determinante -= MatrizExp[0][i + 2] * MatrizExp[1][i + 1] * MatrizExp[2][i];
    }

    return determinante;
}


int main() {
    
    int opc;
    int matriza[3][3];
    int matrizb[3][3];
    int matrizsuma[3][3];
    int matrizresta[3][3];
    int matrizescalar[3][3];

    printf("_______________________________");
               
    printf("\033[2J"); 
    setColor("\033[4;30m");
    gotoxy(10,6);
    printf("Menú de operaciones: ");


    setColor("\033[7;31m");
    gotoxy(30,7);
    printf("1.-: ");

    setColor("\033[0m");
    gotoxy(31,7);
    printf("Suma: ");

    setColor("\033[7;33m");
    gotoxy(30,8);
    printf("2.-: ");

    setColor("\033[0m");
    gotoxy(31,8);
    printf("Resta: ");

    setColor("\033[7;36m");
    gotoxy(30,9);
    printf("3.-: ");

    setColor("\033[0m");
    gotoxy(31,9);
    printf("Multiplciación: ");


    setColor("\033[7;35m");
    gotoxy(30,10);
    printf("4.-: ");

    setColor("\033[0m");
    gotoxy(31,10);
    printf("División: ");

    setColor("\033[0m");
    gotoxy(80,11);
    printf("Seleccione una opcion: ");

    setColor("\033[7;33m");
    gotoxy(100,11);
    printf("(1-4)");

scanf("%d", &opc);


limpiarpantalla();
setColor("\033[7;31m");
llenarMatriz("Matriz A", matriza);
llenarMatriz("Matriz B", matrizb);
limpiarpantalla();



switch(opc){
        case 1: 
            printf("\033[2J"); // Limpia la pantalla
            setColor("\033[0m");
            printf ("%s\n", "Ha seleccionado suma");
            sumarMatriz(matriza, matrizb, matrizsuma);
            limpiarpantalla();
            setColor("\033[7;32m");
            imprimirmatriz(5, 2, "Matriz A", matriza);
            setColor("\033[7;35m");
            imprimirmatriz(30, 2, "Matriz B", matrizb);
            setColor("\033[4;33m");
            imprimirmatriz(55, 2, "A + B", matrizsuma);
            
            break; 
        case 2:
            printf("\033[2J"); // Limpia la pantalla
            setColor("\033[0m");
            printf ("%s\n", "Ha seleccionado resta");
           restaMatriz(matriza, matrizb, matrizresta);
           limpiarpantalla();
           setColor("\033[7;32m");
           imprimirmatriz(5, 2, "Matriz A", matriza);
           setColor("\033[7;35m");
           imprimirmatriz(30, 2, "Matriz B", matrizb);
           setColor("\033[4;33m");
           imprimirmatriz(80, 2, "A - B", matrizresta);


            break;
        case 3:
          setColor("\033[0m");
    int escalar;
    printf("Dame el numero para escalar la matriz A: ");
    scanf("%d", &escalar);
             printf("\033[2J"); // Limpia la pantalla
            setColor("\033[0m");
            printf ("%s\n", "Ha seleccionado multiplicación");
            escalarMatriz(matriza, escalar, matrizescalar);
            setColor("\033[7;32m");
            imprimirmatriz(5, 2, "Matriz A", matriza);
            setColor("\033[7;35m");
            imprimirmatriz(30, 2, "Matriz B", matrizb);
            setColor("\033[4;33m");
            imprimirmatriz(105, 2, "Escalar por A", matrizescalar);
            break;  



        case 4:
        limpiarpantalla();
        printf("\033[2J"); // Limpia la pantalla
        setColor("\033[0m");
        printf ("%s\n", "Ha seleccionado determinante");
        gotoxy(5, 10);
        int det = determinante(matriza);
        printf("Determinante de Matriz A: %d\n", det);
        printf("_______________________________");
        
 
        break; 
        default:
        printf("%s\n", "No ha seleccionado una opción válida");
        break; 

    }
    return 0; 

    
    
    
}

    