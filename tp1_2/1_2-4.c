/*Realizar un programa que solicite una fecha (ingresando día, mes y año), luego deberá
realizar un control de la misma para considerarla válida, es decir que el valor numérico de
día, mes y año sean positivos; día no debe superar el valor 31 y mes el valor 12. El programa
deberá mostrar el mensaje correspondiente para cada caso.*/
#include<stdio.h>
int main(){
    int dia, mes, ano;
    printf("Ingrese el día: ");
    scanf("%i",&dia);
    printf("Ingrese el mes: ");
    scanf("%i",&mes);
    printf("Ingrese el ano: ");
    scanf("%i",&ano);
    if(ano>=0 && ano<=10000){
        if(mes>=1 && mes<=12){
            if(dia>=1 && dia<=31){
                printf("La fecha ingresada es %i/%i/%i",dia, mes, ano);
            }
            else{
                printf("El dia es incorrecto, reinicie el programa\n");
            }
        }
        else{
            printf("El mes es incorrecto, reinicie el programa\n");
        }
    }
    else{
        printf("El ano es incorrecto, reinicie el programa\n");

    }
    return 0;
}