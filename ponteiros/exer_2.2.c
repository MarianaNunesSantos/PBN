//2. Escreva uma função que receba dois vetores de inteiros de mesmo tamanho, 
//e o tamanho de um deles. A função deverá copiar os elementos do primeiro vetor para o segundo.

#include <stdio.h>

int clonaVetor (int vet[], int aux[], int tamV);

int clonaVetor (int vet[], int aux[], int tamV){
    int* p = vet;
    int* pa = aux;
    for (int i = 0; i < tamV; i++)
    {
        *pa = *p;
        p++;
        pa++;
    }
    return p;
}

int main(){
    int tam=8, ponteiro;
    int vet[] = {3,5,2,8,9,5,1,7};  
    int aux[8];
    ponteiro = clonaVetor(vet,aux,tam);
    for (int i = 0; i < tam; i++)
    {
        printf(" [%d] ",ponteiro);
    }
    
}