/*
Fecha de creacion: 05/06/2021
Fecha de ultima actualizacion: 05/06/2021
Nombre del programa: Vector resultante
Nombre del programador: Marcos Damian Pool Canul
Descripcion: Programa que multiplica vector por escalar
Entradas:
- Arreglo (V)
- Escalar (Lambda)
Salidas: El vector resultante V*lambda
*/

#include <stdio.h>

int main()
{

    float v[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    float lambda = 0;
    int n = 0;

    printf("Da el tamanio de tu vector (MAX 10): ");
    scanf("%d", &n);
    printf("\n");

    for (int j = 0; j < n; j++)
    {
        printf("Elemento [%d]: ", j);
        scanf("%f", &v[j]);
    }

    printf("\nDa el valor del multiplicador (lambda): ");
    scanf("%f", &lambda);

    for (int i = 0; i < n; i++)
    {
        v[i] = v[i] * lambda;
    }

    printf("\nEl vector resultante es: \n\n");

    for (int i = 0; i < n; i++)
    {
        printf("V[%d] = %.2f \n", i + 1, v[i]);
    }

    return 0;
}