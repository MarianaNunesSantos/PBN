#include <stdio.h>

void multiplica (int* x); //o x é um ponteiro para um inteiro, o * é um operador de referencia, como uma seta, um apelido para t, a variavel

void multiplica (int* x) {
          *x = *x * *x;
}

int main() {
        int t=10;
        multiplica(&t);
        printf("%d\n",t);
        // saída: 100 10
}   

//nesse caso n faz sentido todo esse trabalho, mas vai ser util em outros contextos