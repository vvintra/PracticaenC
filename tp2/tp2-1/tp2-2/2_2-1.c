/*Codificar un programa que solicite al usuario un número complejo en la forma binómica y lo
almacene en una estructura como el siguiente formato:
typdef struct {
float real;
float imaginario;
}complejo;
Luego mostrar por pantalla el mismo.
Para resolver este problema debe utilizar funciones que:
a)Permita solicitar al usuario un número complejo
b)Muestre un número complejo dado por pantalla con el siguiente formato: "El número
ingresado es a + b i" (esta función no es necesario que retorne valor)*/
#include <stdio.h>

typedef struct {
    float real;
    float imaginario;
} complejo;

// Función para solicitar un número complejo al usuario
complejo pedirComplejo() {
    complejo c;
    printf("Ingrese la parte real del número complejo: ");
    scanf("%f", &c.real);
    printf("Ingrese la parte imaginaria del número complejo: ");
    scanf("%f", &c.imaginario);
    return c;
}

// Función para mostrar un número complejo en pantalla
void mostrarComplejo(complejo c) {
    printf("El número ingresado es %.2f + %.2f i\n", c.real, c.imaginario);
}

int main() {
    complejo numComplejo;
    numComplejo = pedirComplejo();
    mostrarComplejo(numComplejo);
    return 0;
}
