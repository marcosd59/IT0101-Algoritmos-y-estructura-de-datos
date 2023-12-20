// Determinar si un numero es primo o no.

#include <stdio.h>

int main()
{

    int numero = 29, cont = 0;

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            cont++;
        }
    }

    if (cont > 2)
    {
        printf("El numero es compuesto");
    }
    else
    {
        printf("El numero es primo");
    }

    return 0;
}