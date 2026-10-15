/* Fichero: 022.c */
#include<stdio.h>

int main(){

    int dd, mm, aa;

    printf("Introduce el día: ");
    scanf("%i", &dd);

    printf("Introduce el mes: ");
    scanf("%i", &mm);

    printf("Introduce el año: ");
    scanf("%i", &aa);

    if (dd == 25 && mm == 12){

        printf("El día que introdujiste es Navidad");
    }

    else{

        printf("El día que introdujiste NO es Navidad");
    }

return 0;

}

