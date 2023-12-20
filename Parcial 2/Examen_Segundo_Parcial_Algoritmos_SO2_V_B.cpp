/*Fecha de creacion: 23/11/2020
Fecha de ultima actualizacion: 06/03/2022
Nombre del programa: ARREGLOS
Nombre del programador: Marcos Damian Pool Canul
Descripcion: Calcula y almacena en un arreglo cada valor de 2i, donde i es un entero positivo de 0 a n, n <= 10.
Entradas: El valor de n "entero positivo".
Salidas: El resultado de 2^i donde i toma los valores de 0 a n.
*/

#include <stdio.h>
#include <math.h>

const int MAX = 10;

int main()
{
    int Arreglo[MAX];
    int potencia = 1;
    int n = 5;

    if (n > 10)
    {
        n = 10;
    }
    
    for (int i = 0; i <= n; i++)
    {
        potencia = pow(2, i);
        Arreglo[i] = potencia;
    }

    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", Arreglo[i]);
    }
    return 0;
}