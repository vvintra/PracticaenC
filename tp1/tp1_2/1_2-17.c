/*Se ingresan N valores numéricos. Se desea saber cuántos son positivos, cuántos son
negativos y cuantos iguales a cero.
*/
#include <stdio.h>

int main()
{
    int numero, contador_positivos = 0, contador_negativos = 0, contador_ceros = 0;

    do {
        printf("Ingrese un numero (para salir del programa ingrese el 0): ");
        scanf("%d", &numero);
        
        if (numero > 0) {
            contador_positivos++;
        } else if (numero < 0) {
            contador_negativos++;
        } else {
            contador_ceros++;
        }
        
    } while (numero != 0);

    printf("Cantidad de numeros positivos: %d\n", contador_positivos);
    printf("Cantidad de numeros negativos: %d\n", contador_negativos);
    printf("Cantidad de ceros: %d\n", contador_ceros);
    
    return 0;
}