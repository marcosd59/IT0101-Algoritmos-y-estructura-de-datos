/* Recibir tres numeros y sacar el mayor de ellos */

#include <stdio.h>

int main()
{
    int n1 = 25, n2 = 100, n3 = 150;

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("El numero mas grande es: %d", n1);
        }
    }

    else
    {
        if (n2 > n3)
        {
            printf("El numero mas grande es: %d", n2);
        }
        else
        {
            printf("El numero mas grande es: %d", n3);
        }
    }
    return 0;
}