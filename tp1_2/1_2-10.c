 /*Presentar por pantalla los números del 1 al 40 que sean pares utilizando una estructura "do
while".
*/

#include <stdio.h>

int main(){
    int NumeroEntero = 1;
    do {
        if (NumeroEntero % 2 == 0){
            printf("%d\n", NumeroEntero);
        }
        NumeroEntero++;
    } while (NumeroEntero <= 40);
    return 0;
}