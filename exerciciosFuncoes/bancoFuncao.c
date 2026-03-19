#include <stdio.h>

void troco(int valor, int notas100, int notas50, int notas10, int notas5, int notas1);

void troco(int valor, int notas100, int notas50, int notas10, int notas5, int notas1){
    notas100 = valor / 100;
    valor = valor % 100;
    notas50 = valor / 50;
    valor = valor % 50;
    notas10 = valor / 10;
    valor = valor % 10;
    notas5 = valor / 5;
    valor = valor % 5;
    notas1 = valor;

    printf("A quantidade de notas no valor informado é: \n");
    printf("Notas de cem: %d\n",notas100);
    printf("Notas de cinquenta: %d\n",notas50);
    printf("Notas de dez: %d\n",notas10);
    printf("Notas de cinco: %d\n",notas5);
    printf("Notas de um: %d\n",notas1);
}

int main(){
    int valor;
    int notas100=0, notas50=0,notas10=0, notas5=0, notas1=0;
    printf("Digite um valor inteiro: ");
    scanf("%d",&valor);
    troco(valor,notas100,notas50,notas10,notas5,notas1);
}


//treinar mais a linguagem C, para pegar a pratica bem e a lógica da linguagem.