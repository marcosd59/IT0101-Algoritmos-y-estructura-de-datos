/* Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, 
sin utiizar la funcion pow */

#include <stdio.h>

int main(){

    int x = 7,y = 9, resultado = 1;

    for (int i = 1; i <= y ; i++)
    {
        resultado = resultado * x;
    }
    
    printf("\nLa potencia es: %d\n", resultado);


    return 0;
}