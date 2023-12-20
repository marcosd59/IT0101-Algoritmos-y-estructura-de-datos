/*
Fecha de creacion: 07/06/2021
Fecha de ultima actualizacion: 07/06/2021
Nombre del programa: Suma de vectores
Nombre del programador: Marcos Damian Pool Canul
Descripcion: Programa suma un vector escalar
Entradas: n, lambda, miu, u, v
Salidas: El vector resultante de la suma lambda * u + miu * v
*/

#include <stdio.h>
int main()
{

    float v[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    float u[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    float vec_sum[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    float lambda = 0, miu = 0;
    int n = 0;

    printf("\nDa el tamaño de los vectores: ");
    scanf("%d", &n);

    printf("\nDa los valores de lambda y miu respectivamente: ");
    scanf("%f %f", &lambda, &miu);

    for (int i = 0; i < n; i++)
    {
        printf("Da el valor de u[%d]: ", i + 1);
        scanf("%f", &u[i]);
    }

    printf("\nAhora introduce los valores de v\n");

    for (int i = 0; i < n; i++)
    {
        printf("Da el valor de v[%d]: ", i + 1);
        scanf("%f", &v[i]);
    }

    // Suma de los vectores

    for (int i = 0; i < n; i++)
    {
        vec_sum[i] = u[i] * lambda + v[i] * miu;
    }

    // Imprimiendo el resultado

    printf("\nEl vector resultante de la suma es: \n");

    for (int i = 0; i < n; i++)
    {
        printf("u + v [%d] = %.2f \n", i + 1, vec_sum[i]);
    }

    return 0;
}