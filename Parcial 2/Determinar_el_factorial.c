//Caclular el factorial de un numero.

#include <stdio.h>

int main()
{

    int numero = 14, factorial = 1;

    for (int i = 1; i <= numero; i++)
    {
        factorial = factorial * i;

    }

    printf("El factorial de %i es: %i",numero, factorial);

    return 0;
}