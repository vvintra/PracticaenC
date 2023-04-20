#include <stdio.h>

typedef struct {
    int pares;
    int impares;
} categorias;

int main() {
    int n;
    printf("Ingrese la cantidad de numeros a ingresar:\n");
    scanf("%d", &n);
    while (n <= 0) {
        printf("Error: La cantidad de numeros debe ser positiva. Ingrese nuevamente:\n");
        scanf("%d", &n);
    }
    
    categorias contadores = {0, 0};
    int valor;
    
    printf("Ingrese %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);
        if (valor % 2 == 0) {
            contadores.pares++;
        } else {
            contadores.impares++;
        }
    }
    
    printf("Cantidad de numeros pares: %d\n", contadores.pares);
    printf("Cantidad de numeros impares: %d\n", contadores.impares);
    
    return 0;
}
