/*Presentar por pantalla los números del 1 al 40 utilizando una estructura "while".*/

#include <stdio.h>

int main() {
    int numeros;
    
    printf("Ingrese un numero: ");
    scanf("%d",&numeros);

    while(numeros > 1 && numeros < 40){
        printf("%d\n",numeros);
        numeros++;
    }

    return 0;
}