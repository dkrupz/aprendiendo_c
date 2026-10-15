/* Fichero: 021.c */
#include<stdio.h>

int main(){

    int dd, mm, aa;

    printf("Introduce el día: ");
    scanf("%i", &dd);

    printf("Introduce el mes: ");
    scanf("%i", &mm);

    printf("Introduce el año: ");
    scanf("%i", &aa);

    if (mm == 1 || mm == 2 || mm == 3){

        printf("Esa fecha corresponde al primer trimestre");
    }

    else{

        printf("La fecha NO Pertenece al primer trimestre");
    }

    return 0;
}
