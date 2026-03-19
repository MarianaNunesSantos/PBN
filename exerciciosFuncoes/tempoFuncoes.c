#include <stdio.h>

void conversao(int valor);

void convesaor(int valor){
    int hora=0,minutos=0,segundos=0;

    hora = valor/3600;
    minutos = (valor - hora*3600)/60;
    segundos = valor - (hora*3600) - (minutos*60);

    printf("O tempo convertido: %d horas %d minutos e %d segundos",hora,minutos,segundos);

}

int main(){
    int valor;
    printf("Insira um valor de segundos inteiros: ");
    scanf("%d",&valor);
    conversao(valor);
}

