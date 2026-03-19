#include <stdio.h>

int main(){
   
    int valor;
   
    printf("Digite um valor inteiro: ");
    scanf("%d",&valor);
    //printf("Valor digitado %d\n", valor);

    int notas100 = valor / 100;
    valor = valor % 100;
    int notas50 = valor / 50;
    valor = valor % 50;
    int notas10 = valor / 10;
    valor = valor % 10;
    int notas5 = valor / 5;
    valor = valor % 5;
    int notas1 = valor;

    printf("A quantidade de notas no valor informado é: \n");
    printf("Notas de cem: %d\n",notas100);
    printf("Notas de cinquenta: %d\n",notas50);
    printf("Notas de dez: %d\n",notas10);
    printf("Notas de cinco: %d\n",notas5);
    printf("Notas de um: %d\n",notas1);
    

}
