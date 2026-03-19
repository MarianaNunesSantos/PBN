#include <stdio.h>

int repetidos (int vetor[], int tam);

int repetidos (int vetor[], int tam){
    int rep = 0;

    for (int i = 0; i < tam; i++){
        int count = 0;

        for (int j = 0; j < tam; j++){
            if (vetor[i] == vetor[j]){
                count++;
            }
        }
        int jaContado = 0;
        for (int k = 0; k < i; k++){
            if (vetor[i] == vetor[k]){
                jaContado = 1;
                break;
            }
        }
        if (count > 1 && jaContado == 0){
            rep++;
        }
    }
    return rep;
}

int main(){
    int tam=10,rep;
    int vetor[10] = {1,2,3,4,5,3,6,7,2,8};
    
    rep = repetidos(vetor,tam);
    printf("No vetor [1,2,3,4,5,3,6,7,2,8] há %d números repetidos",rep);
}