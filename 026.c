/* Fichero: 026.c */
#include<stdio.h>

int main()
{
    int x, y;

    printf("Introduce la coordenada X: ");
    scanf("%i", &x);

    printf("Introduce la coordenada Y: ");
    scanf("%i", &y);

    // Primero descartamos el origen para que el resto funcione bien
    if (x == 0 && y == 0)
    {
        printf("En el origen\n");
    }
    else
{
        if (x > 0 && y > 0)
        {
            printf("Primer cuadrante\n");
        }
        else
    {
            if (x < 0 && y > 0)
            {
                printf("Segundo cuadrante\n");
            }
            else
        {
                if (x < 0 && y < 0)
                {
                    printf("Tercer cuadrante\n");
                }
                else
            {
                    if (x > 0 && y < 0)
                    {
                        printf("Cuarto cuadrante\n");
                    }
                    else
                {
                        printf("Sobre un eje\n");
                    }
                }
            }
        }
    }

    return 0;
}
