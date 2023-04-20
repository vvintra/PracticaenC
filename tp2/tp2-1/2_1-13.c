/*Solicitar al usuario el ingreso de un carácter y luego mostrarlo por pantalla. Realizar la
lectura y presentación por pantalla empleando las funciones: scanf, fgetc, getchar, printf,
Programación I – Trabajo Práctico Nº 2 Parte 1 – Año 2023
fputc y putchar.*/
#include <stdio.h>

int main() {
    char c;

    printf("Ingrese un caracter: ");
    scanf("%c", &c);
    printf("Caracter ingresado (scanf): %c\n", c);

    printf("Ingrese un caracter: ");
    c = fgetc(stdin);
    printf("Caracter ingresado (fgetc): %c\n", c);

    printf("Ingrese un caracter: ");
    c = getchar();
    printf("Caracter ingresado (getchar): %c\n", c);

    printf("Ingrese un caracter: ");
    printf("Caracter ingresado (printf): %c\n", getchar());

    printf("Ingrese un caracter: ");
    fputc(getchar(), stdout);
    printf("\n");

    printf("Ingrese un caracter: ");
    putchar(getchar());
    printf("\n");

    return 0;
}
