#include <stdio.h>

int main() {
    int opcion;
    
    do {
        printf("MENU\n");
        printf("1- Lunes\n");
        printf("2- Martes\n");
        printf("3- Miércoles\n");
        printf("4- Jueves\n");
        printf("5- Viernes\n");
        printf("6- Sábado\n");
        printf("7- Domingo\n");
        printf("8- Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                printf("Hoy es Lunes\n");
                break;
            case 2:
                printf("Hoy es Martes\n");
                break;
            case 3:
                printf("Hoy es Miércoles\n");
                break;
            case 4:
                printf("Hoy es Jueves\n");
                break;
            case 5:
                printf("Hoy es Viernes\n");
                break;
            case 6:
                printf("Hoy es Sábado\n");
                break;
            case 7:
                printf("Hoy es Domingo\n");
                break;
            case 8:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida, intente de nuevo\n");
        }
        
    } while (opcion != 8);
    
    return 0;
}
