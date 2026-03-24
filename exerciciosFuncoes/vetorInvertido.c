//Escreva uma função que receba um vetor e o seu tamanho. A função deve inverter a ordem dos elementos do vetor.
/*
#include <stdio.h>

void inverteVetor(int vet[], int tam);

void inverteVetor(int vet[], int tam){
    int aux[tam], tama = tam-1;
    for (int i = 0; i < tam ; i++)
    {
        aux[i] = vet[tama];
        tama--;
    }
    
}

int main(){
    int vet[7] = {2,8,5,9,0,1,4};
    int tam=7;
    
    printf("O vetor inicial é: \n");
    for (int i = 0; i < tam; i++)
    {
        printf(" [%d] ",vet[i]);
    }
    inverteVetor(vet, tam);  
    printf("\nO vetor invertido é: \n");
  
}*/

#include <stdio.h>

void inverte(int vetor_A[ ], int posicao)
{
    int auxiliar, tamanho_vetor = posicao - 1;

    for (posicao = 0; posicao <= tamanho_vetor; posicao++)
    {
      auxiliar = vetor_A[posicao];
      vetor_A[posicao] = vetor_A[tamanho_vetor];
      vetor_A[tamanho_vetor] = auxiliar;
      tamanho_vetor--;
    }
}

int main()
{
    int vetor_A[3], posicao;

    for (posicao = 0; posicao < 3; posicao++)
    {
        printf("Entre com os valores:\n");
        scanf(" %d", &vetor_A[posicao]);
    }

    printf("\n");

    inverte(vetor_A, posicao);

    int tamanho = posicao;
    for (posicao = 0; posicao < tamanho; posicao++)
    {
        printf("%d ", vetor_A[posicao]);
    }
    printf("\n");

    return 0;
}