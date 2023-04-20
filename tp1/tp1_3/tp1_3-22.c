#include <stdio.h>

typedef struct {
    int valor;
    int posicion;
} num;

int main() {
    int n = 100; // máximo de valores a ingresar
    num numeros[n];
    int i = 0;
    int valor;
    
    printf("Ingrese numeros positivos (0 para terminar):\n");
    scanf("%d", &valor);
    while (valor != 0 && i < n) {
        numeros[i].valor = valor;
        numeros[i].posicion = i;
        i++;
        scanf("%d", &valor);
    }
    
    if (i == 0) {
        printf("No se ingresaron valores.\n");
    } else {
        // buscar el valor mínimo
        int min_valor = numeros[0].valor;
        int min_posicion = numeros[0].posicion;
        for (int j = 1; j < i; j++) {
            if (numeros[j].valor < min_valor) {
                min_valor = numeros[j].valor;
                min_posicion = numeros[j].posicion;
            }
        }
        printf("El menor valor ingresado es %d, en la posicion %d.\n", min_valor, min_posicion);
    }
    
    return 0;
}
