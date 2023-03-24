/*Realizar un programa que permita calcular la longitud de una circunferencia, 
donde la* misma se calcula como: l = 2pi .r 
*/
#include <stdio.h>
#define pi 3.14 
int main()
{ 
   float radio = 0; 
   
   printf ("ingrese el diametro ");
   scanf("%f", &radio);

   float longitud = 2 * radio * pi; 

   printf("La longitud del la circuferencia es %f", longitud) ;
   return 0;
}
