#include<stdio.h>
#include<string.h>
struct ID{
    char folio [50];
    char cantidad [20]; 
};
struct Labial{
    char nombre [50];
    char marca[50];
    char propietaria[20];
    char tono [50];
    char color [50];
    char edicion[50];
    char tipodelabial [50];
    char precioporpieza [20];
    char paisaenviar [50];
    char tiendaaenviar [50];
    struct ID id;
    
    
};
int main(){
    int n;
    printf ("Ingrese cantidad de labiales");
    scanf ("%d", &n);
    getchar ();

struct Labial labiales [n];
for(int i =0; i<n; i++){
    printf("Ingrese los datos del labial %d\n", i+1);

    printf("Folio:");
    scanf("%s", labiales [i].id.folio);

    printf("Cantidad pedida:");
    scanf("%s", &labiales [i].id.cantidad);

    printf("Nombre:");
    scanf("%s",  labiales[i].nombre);

    printf("Marca:");
    scanf("%s", labiales [i].marca);

    printf ("Propietario:");
    scanf("%s", labiales [i].propietaria);

    printf("Tono:");
    scanf("%s", labiales [i].tono);

    printf ("Color:");
    scanf("%s", labiales [i].color);


    printf ("Edición:");
    scanf("%s", labiales [i].edicion);

    printf ("Tipo de labial:");
    scanf("%s", labiales [i].tipodelabial);

    printf ("Precio por pieza:");
    scanf("%s", &labiales [i].precioporpieza);
    
    printf ("Pais a enviar:");
    scanf("%s", labiales [i].paisaenviar);

    printf ("Tienda a enviar:");
    scanf("%s", labiales [i].tiendaaenviar);

    getchar();

}
printf("\n%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s", "Folio", "Cantidad", "Nombre", "Marca", "Propietaria", "Tono", "Color", "Edicion", "Tipo de labial", "Precio por pieza", "País a enviar", "Tienda a enviar");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    for(int i=0; i<n;i++){
        printf("\n%-15s|%-15s|%-15s|%-15s|%-15s|%-15s|%-15s|%-15s|%-15s|%-15s|%-15s|%-15s",
        labiales [i].id.folio,
        labiales [i].id.cantidad,
        labiales[i].nombre,
        labiales [i].marca,
        labiales [i].propietaria,
        labiales [i].tono,
        labiales [i].color,
        labiales [i].edicion,
        labiales [i].tipodelabial,
        labiales [i].precioporpieza,
        labiales [i].paisaenviar,
        labiales [i].tiendaaenviar);
        




}}