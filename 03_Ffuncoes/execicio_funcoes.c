#include <stdio.h>

void troco(int r, int* N100, int* N50, int* N10, int* N5, int* N1);

void troco(int r, int* N100, int* N50, int* N10, int* N5, int* N1){
    *N100 = r % 100;
    *N50 = (r % 100) / 50;
    *N10 = (r % 50) / 10;
    *N5 = (r % 10) / 5;
    *N1 = (r % 5);
}

int main(){
    int valor;
    int notas100, notas50,notas10, notas5, notas1;
    printf("Digite um valor inteiro: ");
    scanf("%d",valor);
    troco(valor,notas100,notas50,notas10,notas5,notas1);
    printf("Notas de 100: %d/n",notas100);
    printf("Notas de 50: %d/n",notas50);

}


//treinar mais a linguagem C, para pegar a pratica bem e a lógica da linguagem.