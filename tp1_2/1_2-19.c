/* Implementar un programa que solicite al usuario el ingreso de un signo del zodíaco de una
lista de opciones y le muestre por pantalla un mensaje que indique si es de agua, aire,
tierra, fuego o si ha seleccionado un valor inválido. Sugerencia: usar switch. Por ejemplo, si
se ingresa el valor 1, mostrar “El signo de Aries es de Fuego”, si se ingresa 15 mostrar “El
valor ingresado no corresponde a una opción válida”.Signo Categoría*/
#include <stdio.h>

int main() {
    int opcion;
    
    printf("Ingrese el número correspondiente al signo del zodíaco que desea consultar:\n");
    printf("1- Aries\n");
    printf("2- Tauro\n");
    printf("3- Géminis\n");
    printf("4- Cáncer\n");
    printf("5- Leo\n");
    printf("6- Virgo\n");
    printf("7- Libra\n");
    printf("8- Escorpio\n");
    printf("9- Sagitario\n");
    printf("10- Capricornio\n");
    printf("11- Acuario\n");
    printf("12- Piscis\n");
    scanf("%d", &opcion);
    
    switch(opcion) {
        case 1:
            printf("El signo de Aries es de Fuego\n");
            break;
        case 2:
            printf("El signo de Tauro es de Tierra\n");
            break;
        case 3:
            printf("El signo de Géminis es de Aire\n");
            break;
        case 4:
            printf("El signo de Cáncer es de Agua\n");
            break;
        case 5:
            printf("El signo de Leo es de Fuego\n");
            break;
        case 6:
            printf("El signo de Virgo es de Tierra\n");
            break;
        case 7:
            printf("El signo de Libra es de Aire\n");
            break;
        case 8:
            printf("El signo de Escorpio es de Agua\n");
            break;
        case 9:
            printf("El signo de Sagitario es de Fuego\n");
            break;
        case 10:
            printf("El signo de Capricornio es de Tierra\n");
            break;
        case 11:
            printf("El signo de Acuario es de Aire\n");
            break;
        case 12:
            printf("El signo de Piscis es de Agua\n");
            break;
        default:
            printf("El valor ingresado no corresponde a una opción válida\n");
    }
    
    return 0;
}
