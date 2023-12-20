#include <stdio.h>

int pow(int arg, int exp);
int cuentaCaracteres(char *cadena);

int main()
{
    char cadena[] = "Hola mundo";
    printf("Longitud de la cadena: %d\n", cuentaCaracteres(cadena));

    int res = pow(5, 2);
    printf("El valor es: %d\n", res);

    return 0;
}

int pow(int arg, int exp)
{
    int res = 1;

    for (int i = 0; i < exp; i++)
    {
        res *= arg;
    }
    return res;
}

int cuentaCaracteres(char *cadena)
{
    int i = 0;

    while (cadena[i] != '\0')
    {
        i++;
    }
    return i;
}