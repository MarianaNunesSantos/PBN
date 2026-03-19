//Escreva uma função para realizar uma "divisão segura": ela deve receber dois valores de entrada, 
//e retornar por referência o resultado da divisão entre eles. Além disso,
// a função deve retornar 0 caso a divisão seja impossível (divisão por zero), e 1 se tiver sucesso

#include <stdio.h>

int divSegura(int a, int b, int *quociente);

int divSegura(int a, int b, int *quociente){
    if (b == 0)
    {
        return 0;
    }
    
    *quociente = a/b;
    return 1;
}