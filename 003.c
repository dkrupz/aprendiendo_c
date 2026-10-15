/* Fichero: 003.c */
#include<stdio.h>

int main()
{
    int horasTrabajadas;
    float costoHora;
    float sueldo;

    printf("Introduce las horas trabajadas por el empleado: ");
    scanf("%i",&horasTrabajadas);

    printf("Introduce el precio por hora: ");
    scanf("%f",&costoHora);

    sueldo=horasTrabajadas*costoHora;

    printf("El sueldo total del operario es ");
    printf("%f", sueldo);

    return 0;
}
