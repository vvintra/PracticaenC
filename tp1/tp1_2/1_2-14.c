/*Presentar por pantalla todos los números enteros positivos que tengan cuatro dígitos
utilizando una estructura "while".*/

#include<stdio.h>
int main(){
    int NumeroEntero;

    do
    {
    if (NumeroEntero % 2 == 0)
    {
        printf("%d\n", NumeroEntero);
    }
        NumeroEntero++;
    } while (NumeroEntero < 10000);
    return 0;
}