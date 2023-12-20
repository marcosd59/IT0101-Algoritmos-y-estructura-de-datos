/*************************************************************
Fecha de creacion: 16/11/2020
Fecha de ultima actualizacion: 20/11/2020
Nombre del programa: Aproximacion de Taylor
Nombre del programador: Marcos Damian Pool Canul
Descripcion: Aproximacion de Taylor para e^x
Entradas: El valor de x y los terminos n
Salidas: Aproximación de “x” con precisión de “n” números
*************************************************************/

// Programa principal
#include <stdio.h>

int main()
{
    // Declaracion de variables

    int x;
    x = 1; // Valor de x.

    int n;
    n = 4; // Terminos n.

    float sumatoria = 1, factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = (factorial * x) / i;
        sumatoria = sumatoria + factorial;
    }

    printf("El valor de e%d con %d dígitos de precisión es = %f", x, n, sumatoria);

    return 0;
}