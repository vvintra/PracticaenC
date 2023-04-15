/*Presentar por pantalla las letras que estén entre la "a" y la ''m" utilizando una estructura
"for". No mostrar la a y m solo las intermedias.*/

#include <stdio.h>
int main(){
    char letras
        [26] = {'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};        
    for(int i = 0; i < 26; i++){
        printf("las letras que se encuentra entre la a y la m son %c",letras[i]);
    }
    return 0;

}