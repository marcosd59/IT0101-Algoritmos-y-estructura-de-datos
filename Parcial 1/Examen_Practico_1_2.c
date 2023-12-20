/*Recibir la temperatura en grados Fahrenheit, si este valor es múltiplo de 3 entonces que lo convierta a grados centígrados */

#include <stdio.h>

int main()
{
    int farh = 78;
    int celsius = 0;

    if (farh % 3 == 0)
    {
        celsius = (farh - 32) * 5 / 9;
        printf("%d°F es equvalente a %d°C", farh, celsius);
    }

    else
    {
        printf("No es multiplo de 3");
    }

    return 0;
}