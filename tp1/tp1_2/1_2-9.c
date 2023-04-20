/*Presentar por pantalla los números del 1 al 40 que sean pares utilizando una estructura
"for".*/

#include <stdio.h>
int main(){
    int numeros;
    for(numeros=1;numeros<=40;numeros++){
        if(numeros%2==0){
            printf("%d\n",numeros);
        }
    }
    return 0;
}