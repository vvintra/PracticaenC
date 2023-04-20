
/*Realizar un programa que halle cualquier raíz de un número entero positivo. El usuario
deberá indicar el número (por ejemplo, 2) y el índice de la raíz (por ejemplo, 3 para la
raíz cúbica). Pista: hallar la raíz cúbica de 2 es lo mismo que elevar 2 a 1/3*/
#include<stdio.h>
#include<math.h>
int main()
{
int numero, elevado, keloke;

printf("ingrese un numero : ");
scanf("%d", &numero);

printf("ingrese un numero (para elevar el numero anterior) : ");
scanf("%d", &elevado);

keloke = pow(numero, elevado);

printf("el numero %d elevado por %d es igual %d", numero, elevado, keloke);
return 0;
}