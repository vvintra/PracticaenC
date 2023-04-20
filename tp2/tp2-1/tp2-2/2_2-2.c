/*Utilizando las funciones diseñadas en el ejercicio anterior, codificar un programa en el que se
solicita el ingreso de dos números complejos y muestre la suma de ambos. Para esto deberá
ingresar parte real y parte imaginaria de la forma binómica en una variable tipo estructura para
cada número complejo, luego utilizar otra función para calcular la suma de los mismos, además
debe retornar el resultado utilizando una variable tipo estructura. Presentar por pantalla los
números ingresados y el resultado.
*/
#include <stdio.h>

typedef struct {
    float real;
    float imaginario;
} Complejo;

void pedirComplejo(Complejo *c) {
    printf("Ingrese la parte real del complejo: ");
    scanf("%f", &(c->real));
    printf("Ingrese la parte imaginaria del complejo: ");
    scanf("%f", &(c->imaginario));
}

void mostrarComplejo(Complejo c) {
    printf("El número ingresado es %.2f + %.2f i\n", c.real, c.imaginario);
}

Complejo sumarComplejos(Complejo c1, Complejo c2) {
    Complejo resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginario = c1.imaginario + c2.imaginario;
    return resultado;
}

int main() {
    Complejo c1, c2, resultado;

    printf("Ingrese el primer número complejo:\n");
    pedirComplejo(&c1);
    mostrarComplejo(c1);

    printf("Ingrese el segundo número complejo:\n");
    pedirComplejo(&c2);
    mostrarComplejo(c2);

    resultado = sumarComplejos(c1, c2);

    printf("La suma de los complejos es:\n");
    mostrarComplejo(resultado);

    return 0;
}
