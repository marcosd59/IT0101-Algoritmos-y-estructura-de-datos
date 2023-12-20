#include <stdio.h>
#include <math.h>

int main()
{
    int R = 1;
    int T = 2;
    int Q = 3;

    int expresion = 0;

    expresion = (pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2));

    if (expresion < 820)
    {
        printf("El numero es menor a 820, el resultado es: %d\n", expresion);
    }
    else
    {
        printf("El numero NO es menor a 820, el resultado es: %d\n", expresion);
    }

    printf("\n");

        int n1 = 4,
            n2 = 4, n3 = 3;

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("El numero mas grande es %d", n1);
        }
    }

    else
    {
        if (n2 > n3)
        {
            printf("El numero mas grande es %d", n2);
        }
        else
        {
            printf("El numero mas grande es %d", n3);
        }
    }

    printf("\n");

        int farh = 79;
        int celc = 0;

    if (farh % 3 == 0)
    {
        celc = (farh - 32) * 5 / 9;
        printf("\n");
        printf("%d°F es igual a %d°C", farh, celc);
    }
    else
    {
        printf("\n");
        printf("%d°F No es multiplo de 3",farh);
    }

    printf("\n");
    return 0;
}