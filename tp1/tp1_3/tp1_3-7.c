/*Se ingresan N nú meros enteros. Determinar el mayor y el menor de los valores
ingresados Ejemplo: N = 7, Se ingresan: -12, 5, -8, 30, 0, -20, 15 Mayor valor:30 Menor*/
#include<stdio.h>
 
typedef struct{
    int mayor;
    int menor;
}numero;

    int main(){
    int contador, num;
    numero santi;
    santi.mayor = 0;
    santi.menor = 0;
    
    do{
    
    printf("Ingrese la cantidad de nuevos");
    scanf("%i", &contador);
    
    } while (contador <= 0);

    while (contador--){
    printf("Ingrese un numero");
    scanf("%i",&num);
    
    if (num > santi.mayor){
    santi.mayor = num;
    }
    if (num < santi.menor)
        {
        santi.menor = num;
        }
    }

    printf("El numero mayor es %i y el menor es %i", santi.mayor , santi.menor);

return 0;
}