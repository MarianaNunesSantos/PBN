//3. Escreva uma função que receba um vetor de inteiros e o tamanho do vetor. A função deverá inverter a ordem dos elementos do vetor.
#include <stdio.h>

int inverteVetor(int vet[], int tam);

int inverteVetor(int vet[], int tam){
    int* p1 = vet;
    int* p = vet + (tam-1);
    while (p1 < p){
        int aux = *p1;
        *p1 = *p;
        *p = aux;
        p1++;
        p--;    
    }
    return p;
}

int main(){
    int tam=5, ponteiro;
    int vet[] = {1,2,3,4,5};
    printf("Vetor Normal: \n");
    for (int i = 0; i < tam; i++){
        printf(" [%d] ", vet[i]);
    }
    
    ponteiro = inverteVetor (vet,tam);
    printf("Vetor Invertido: \n");
    for (int i = 0; i < tam; i++){
        printf(" [%d] ", ponteiro);
    }


}