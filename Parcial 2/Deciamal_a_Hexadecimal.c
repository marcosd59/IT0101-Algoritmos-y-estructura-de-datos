/*Fecha de creacion: 16/11/2020
Fecha de ultima actualizacion: 20/11/2020
Nombre del programa: Decimal a hexadecimal
Nombre del programador: Marcos Damian Pool Canul
Descripcion: Programa que convierte cualquier número entero decimal positivo a hexadecimal
Entradas: Numero entero decimal positivo
Salidas: Representación a Hexadecimal
*/

//Programa principal

#include <stdio.h>

int main()
{
    //Declaracion de variables

    int digitoex[15];
    int resultado, decimal, residuo, i = 0;

    decimal = 23872983; //Valor en decimal

    do
    {
        residuo = decimal % 16;
        resultado = decimal / 16;
        digitoex[i] = residuo;
        decimal = resultado;
        i++;

    } while (resultado > 15);

    digitoex[i] = resultado;

    printf("El equivalente en hexadecimal es: ");

    for (int j = i; j >= 0; j--)
    {
        if (digitoex[j] == 10)
        {
            printf("A");
        }
        else if (digitoex[j] == 11)
        {
            printf("B");
        }
        else if (digitoex[j] == 12)
        {
            printf("C");
        }
        else if (digitoex[j] == 13)
        {
            printf("D");
        }
        else if (digitoex[j] == 14)
        {
            printf("E");
        }
        else if (digitoex[j] == 15)
        {
            printf("F");
        }
        else
        {
            printf("%d",digitoex[j]);
        }   
    }
    return 0;
}