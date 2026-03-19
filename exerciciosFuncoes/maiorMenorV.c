//Escreva uma função que receba um vetor, o seu tamanho e retorne por referência o maior e o menor valor encontrados no vetor.

#include <stdio.h>

void MaiorMenor (int vet[], int tam, int menor, int maior);

void MaiorMenor (int vet[], int tam, int menor, int maior){
    for (int i = 0; i < tam; i++){
        if (vet[i] > maior){
            maior = vet[i];
        }if (vet[i] < menor){
            menor = vet[i];
        }
    }
    printf("O maior valor do vetor é: %d e o menor valor é: %d\n",maior,menor);
}

int main(){
    int menor = 999, maior=0;
    int vet[5] = {3,5,1,7,9};
    
    MaiorMenor(vet,5,menor,maior);

}


