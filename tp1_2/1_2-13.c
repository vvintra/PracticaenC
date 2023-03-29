/*. Ingresar un número positivo, luego presentar por pantalla el número ingresado y su
invertido. Ejemplo: si se ingresa el número 5219 -> el invertido es 9125*/

#include 
int main(){
    int numero = 1, inverso = 0, contador = 1;
    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    while (numero = numero){
    contador = numero % 10;
    numero = numero / 10;
    inverso = inverso * 10 + contador;
    }

    printf("El numero inverso %i ", inverso);

    return 0;
}