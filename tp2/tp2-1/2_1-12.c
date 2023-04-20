/* Una materia solicitó a la cátedra crear un bolillero para sorteo de temas en exámenes,
para cumplir con este pedido se debe desarrollar un programa que genere un número
aleatorio entre dos valores enteros positivos a y b, los cuales hacen referencia al rango
de números de temas que entran en el sorteo. Se pide ingresar el rango de temas en la
variables a - b y mostrar el tema que salió en el sorteo. Por ejemplo:
Tema a = 2 , b=10 , implican en el sorteo entran los temas desde el 2 al 10 inclusive. Al
generar un número aleatorio el mismo debe estar contenido entre esos valores.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, tema;

    printf("Ingrese el valor de a: ");
    scanf("%d", &a);

    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    // Inicializamos la semilla del generador de números aleatorios
    srand(time(NULL));

    // Generamos un número aleatorio entre a y b, ambos incluidos
    tema = rand() % (b - a + 1) + a;

    printf("El tema sorteado es: %d\n", tema);

    return 0;
}
