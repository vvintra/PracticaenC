/*Ingresar un número entero positivo, luego presentar por pantalla un mensaje que indique si el
número ingresado es o no es primo. Para resolver implementar:
a- una función que realice el control de que el número sea positivo.
b- una función que determine si un número es primo.*/
#include <stdio.h>
#include <stdbool.h>

bool es_positivo(int num){
    if(num > 0){
        return true;
    }
    else{
        return false;
    }
}

bool es_primo(int num){
    int i;
    bool primo = true;
    for(i=2; i<num; i++){
        if(num%i == 0){
            primo = false;
            break;
        }
    }
    return primo;
}

int main(){
    int num;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);
    if(es_positivo(num)){
        if(es_primo(num)){
            printf("%d es un numero primo\n", num);
        }
        else{
            printf("%d no es un numero primo\n", num);
        }
    }
    else{
        printf("El numero ingresado no es positivo\n");
    }
    return 0;
}
