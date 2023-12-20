#include <stdio.h>

#define MAX 50

int main(void)
{
    char cadena[MAX];
    int contador = 0;
    int i = 0;
    int j = 0;

    printf("Ingrese una palabra: ");
    scanf("%s", cadena);

    while (cadena[contador] != '\0')
    {
        contador++;
    }

    printf("La longitud de '%s' es %d\n", cadena, contador);

    while (cadena[i] != '\0')
    {
        i++;
    }

    printf("La cadena al reves es: ");

    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", cadena[j]);
    }

    return 0;
}