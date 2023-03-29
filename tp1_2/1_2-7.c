/*Durante un intervalo de 3 meses, una persona debe realizar cada mes un análisis de sangre
para determinar su cantidad de glóbulos rojos. Se necesita saber si en el intervalo de los 3
meses, los valores obtenidos de glóbulos rojos aumentan por cada mes que pasa, o si
descienden por cada mes que pasa, o si no se da ninguno de los dos casos anteriores.
Realizar un programa que permita ingresar el valor de glóbulos rojos por cada mes y luego
muestre el mensaje correspondiente.*/
#include <stdio.h>

int main() {
    int primermes, segundomes, tercermes;
    printf("Ingrese el valor de glóbulos rojos para el primer mes: ");
    scanf("%d", &primermes);
    printf("Ingrese el valor de glóbulos rojos para el segundo mes: ");
    scanf("%d", &segundomes);
    printf("Ingrese el valor de glóbulos rojos para el tercer mes: ");
    scanf("%d", &tercermes);

    if (primermes < segundomes && segundomes < tercermes) {
        printf("Los valores de glóbulos rojos aumentan por cada mes que pasa.\n");
    } else if (primermes > segundomes && segundomes > tercermes) {
        printf("Los valores de glóbulos rojos disminuyen por cada mes que pasa.\n");
    } else {
        printf("Los valores de glóbulos rojos no presentan un patrón claro de aumento o disminución.\n");
    }

    return 0;
}