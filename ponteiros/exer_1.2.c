//1. Escreva uma função que receba um vetor de inteiros, o tamanho do vetor e um valor a ser procurado. 
//A função deve procurar o valor no vetor,
//caso encontre deve retornar a posição (índice) no vetor. Caso não encontre, deve retornar -1.

#include <stdio.h>

int procuraValor(int vet[], int tam, int val);

int procuraValor(int vet[], int tam, int val){
    int result = -1;
    int* p = vet;
    for (int i = 0; i < tam; i++){
        if (*p == val){
            result = p;
            return result;
        }    
        p++;
    }
    return result; //valor não encontrado
}

int main(){
    int val, tam=5, ret;
    int v[] = { 0, 1, 2, 3, 4 };
        printf("Insira o valor que deseja saber se está contido no vetor: ");
        scanf("%d",&val);
        ret = procuraValor(v,tam,val);
        if (ret == -1){
            printf ("Nenhum valor foi encontrado :(");
        }else{
            printf("O valor foi encontrado na posição: %d",ret);
        }

}