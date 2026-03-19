#include <stdio.h>

int main(){
    int hora=0,minutos=0,segundos=0;
    int valor;

    printf("Insira um valor inteiro em segundos: ");
    scanf("%d",&valor);

    hora = valor/3600;
    minutos = (valor - hora*3600)/60;
    segundos = valor - (hora*3600) - (minutos*60);

    printf("O tempo convertido: %d horas %d minutos e %d segundos",hora,minutos,segundos);

}