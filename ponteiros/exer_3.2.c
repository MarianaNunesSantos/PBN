//3. Escreva uma função que receba um vetor de inteiros e o tamanho do vetor. A função deverá inverter a ordem dos elementos do vetor.
#include <stdio.h>

int inverteVetor(int vet[], int tam);

int inverteVetor(int vet[], int tam){
    int* p1 = vet;
    int* p = vet + (tam-1);
    while (p1 < p){
        int aux = p1;
        p1 = p;
        p = aux;
        p1++;
        p--;    
    }
    return p;
}

int main(){
    //fazer o main depois
}