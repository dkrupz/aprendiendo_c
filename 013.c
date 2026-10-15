/* Fichero: 013.c */
#include<stdio.h>

int main() {
    float nota1, nota2, nota3, notaMedia;

    printf("Introduce la primera nota: ");
    scanf("%f", &nota1);

    printf("Introduce la segunda nota: ");
    scanf("%f", &nota2);

    printf("Introduce la tercera nota: ");
    scanf("%f", &nota3);

    notaMedia=(nota1+nota2+nota3)/3;

    if (notaMedia >= 7) {

        printf("¡Este alumno está promocionado!");
    }

    else {

        printf("¡Este alumno es un burro!");

    }

return 0;

}

