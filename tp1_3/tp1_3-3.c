/*Mostrar un mensaje al usuario de acuerdo a la opción ingresada, la misma debe ser un
carácter (a,b,c,d). Para esto debe emplear la estructura switch con las opciones de:
a. “Hola mundo!!!”
b. “Programación en la FACET”
c. “El lenguaje C”
d. “Editar, compilar y ejecutar”
En caso de no ingresar alguno de los caracteres mencionados mostrar el siguiente
mensaje : "Ud debe repetir el ejercicio"*/

#include <stdio.h>

int main() {
    char opcion;
    printf("Ingrese una opción (a, b, c, d): ");
    scanf("%c", &opcion);

    switch(opcion) {
        case 'a':
            printf("Hola mundo!!!\n");
            break;
        case 'b':
            printf("Programación en la FACET\n");
            break;
        case 'c':
            printf("El lenguaje C\n");
            break;
        case 'd':
            printf("Editar, compilar y ejecutar\n");
            break;
        default:
            printf("Ud debe repetir el ejercicio\n");
    }

    return 0;
}