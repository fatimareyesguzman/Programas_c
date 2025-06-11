#include <stdio.h>
#include <string.h>
int main() {
    int opc;
    printf("Seleccione lo que quiere ver:\n");
    printf("1. Funcionamiento de strcat\n");
    printf("2. Funcionamiento de strcpy\n");
    printf("3. Funcionamiento de strcspn\n");
    printf("4. Funcionamiento de strlen\n");
    printf("5. Funcionamiento de strncat (es diferente a strcat)\n");
    printf("6. Funcionamiento de strcmp\n");
    printf("7. Funcionamiento de strpbrk\n");
    printf("8. Funcionamiento de strrchr\n");
    printf("9. Funcionamiento de strstr\n");
    printf("10. Funcionamiento de strtok\n");
    printf("Ingrese su opcion:");
    scanf("%d", &opc);
    switch (opc) {



        case 1: {
            printf("Strcat concatena una cadena de caracteres (la cadena de origen) al final de otra cadena (la cadena de destino).\n");
            char destino1[100] = "Hola, "; //cadena destinio
            char fuente1[100] = "Camila"; //fuente 
            strcat(destino1, fuente1); //unimos 
            printf("Resultado: %s\n", destino1); //se imprime el resultado
            break;
        }



        case 2: {
            printf("Strcpy copia una cadena de caracteres desde una ubicacion a otra.\n");
            char fuente2[] = "Hola mundo"; //fuente 
            char destino2[50]; //destino
            strcpy(destino2, fuente2); //utilizamos la funcion 
            printf("Destino: %s\n", destino2); //imprimimos 
            break;
        }



        case 3: {
            printf("Strcspn se utiliza para encontrar la longitud del segmento inicial de una cadena que contiene caracteres que NO estan presentes en una segunda cadena especificada\n");
            char texto3[100] = "Italia es bonito"; //frase 
            char caracteres3[] = "aeiou"; //se buscaran estos caracteres 
            size_t posicion = strcspn(texto3, caracteres3); //utlizamos la funcion 
            printf("La primera vocal aparece en la posición: %zu\n", posicion);
            printf("La letra en esa posicion es: '%c'\n", texto3[posicion]);
            break;
        }


        case 4: {
            printf("Strlen se utiliza para determinar la longitud de una cadena de caracteres\n");
            char frase4[100] = "Estoy estudiando la función strlen"; //definimos la frase
            size_t longitud = strlen(frase4); //ponemos la funcion 
            printf("La frase \"%s\" tiene %zu caracteres\n", frase4, longitud); //imprimimos 
            break;
        }


        case 5: {
            printf("Strncat a diferencia de strcat limita la cantidad concatenada a n caracteres, esto sirve para evitar sobrepasar el buffer\n");
            char destino5[100] = "El fin ultimo de la vida es ";
            char fuente5[100] = "la felicidad";
            strncat(destino5, fuente5,40); //utilizamos la funcion en donde se stableceran las condicioens
            printf("Resultado: %s\n", destino5);
            break;
        }



        case 6: {
            printf("Strcmp sirve para comparar dos cadenas y decir si son iguales o cuál va primero en orden alfabetico.\n");
            char p1[] = "azul";
            char p2[] = "rojo";
            int resultado6 = strcmp(p1, p2); //aqui se imprimira la diferencia de posiciones entre A y Z 
            printf("Valor de strcmp: %d\n", resultado6); //se imprime 
            if (resultado6 == 0) {
                printf("Las palabras son iguales.\n"); 
            } else if (resultado6 < 0) {
                printf("\"%s\" viene antes que \"%s\" alfabeticamente.\n", p1, p2);
            } else {
                printf("\"%s\" viene después que \"%s\" alfabeticamente.\n", p1, p2);
            }
            break;
        }



        case 7: {
            printf("Strpbrk sirve para encontrar el primer caracter en una cadena que coincida con cualquiera de los caracteres de un conjunto.\n");
            char texto7[] = "Vamonos de viaje"; //ponemos el texto en donde se buscara 
            char buscados7[] = "aeiou"; //ponemos la frase que queremos buscar
            char *resultado7 = strpbrk(texto7, buscados7); //le metemos una variable para que se igual strpbrk
            if (resultado7 != NULL) {  //condicion que no toma en cuenta nulos 
                printf("Primera vocal encontrada: '%c'\n", *resultado7); //se busca la vocal 
                printf("A partir de ahi la cadena es: \"%s\"\n", resultado7); 
            } else {
                printf("No se encontro ninguno de los caracteres.\n");
            }
            break;
        }


        case 8: {
        
            printf("Strrchr busca la ultima aparicion de un carácter especifico dentro de una cadena de texto.\n");
            char texto8[100] = "Buscando letrassss";
            char buscado8 = 's';
            char *resultado8 = strrchr(texto8, buscado8); //se buscara la s en todo lo que haya 
            if (resultado8 != NULL) {
                printf("Última aparición de '%c':\n", buscado8);
                printf("Texto desde ahi: \"%s\"\n", resultado8);
            } else {
                printf("El caracter '%c' no se encontro en el texto.\n", buscado8);
            }
            break;
        }

        
        case 9: {
            printf("Strstr sirve para encontrar la primera ocurrencia de una subcadena dentro de una cadena mayor\n");
            char frase9[100] = "Probando el funcionamiento de strstr";
            char busqueda9[100] = "funcionamiento";
            char *resultado9 = strstr(frase9, busqueda9); //buscando la frase funcionamiento en todo eso 
            if (resultado9 != NULL) {
                printf("Subcadena encontrada:\n");  //si cumple la condicion se impirmirá 
                printf("Desde aqui: \"%s\"\n", resultado9);
            } else {
                printf("No se encontro la subcadena.\n");
            }
            break;
        }

        case 10: {
            printf("Strtok sirve para dividir una cadena de texto en partes (tokens) separadas por un delimitador.\n");
            char frase10[] = "El esfuerzo es la clave del exito";
            char *palabra10 = strtok(frase10, " ");
            while (palabra10 != NULL) {
                printf("Palabra: %s\n", palabra10);
                palabra10 = strtok(NULL, " ");
            }
            break;
        }

        default: {
            printf("\nOpcion invalida. Por favor elija entre 1 y 10.\n");
        }
    }

    return 0;
}