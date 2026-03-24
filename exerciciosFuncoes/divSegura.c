//Escreva uma função para realizar uma "divisão segura": ela deve receber dois valores de entrada, 
//e retornar por referência o resultado da divisão entre eles. Além disso,
// a função deve retornar 0 caso a divisão seja impossível (divisão por zero), e 1 se tiver sucesso

#include <stdio.h>

int divSegura(int a, int b);

int divSegura(int a, int b){
    int quociente;
    if (b == 0)
    {
        return 0;
    }
    
    quociente = a/b;
    return 1;
}

int main(){

    int A,B;
    printf("Informe um valor para A e para B: ");
    scanf("%d %d",&A,&B);
    int result;
    result = divSegura(A,B);
    if (result == 1){
        printf("A divisão ente %d e %d foi segura.",A,B);
    }else{
        printf("A divisão entre %d e %d não é segura.",A,B);
    }
}
