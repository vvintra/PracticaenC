/* Presentar por pantalla todos los números enteros positivos que tengan cuatro dígitos
utilizando una estructura "for".*/


#include <stdio.h>
int main(){
int NumeroEntero, uwu;

NumeroEntero = 9999;


    for (uwu = 1 ; uwu <= NumeroEntero; uwu++){
    if (uwu % 2 == 0)
    {
    printf("%d\n", uwu);
    }
    }
}
