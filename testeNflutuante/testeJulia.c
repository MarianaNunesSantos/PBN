#include <stdio.h>
int main() {
    float meters = 0;
    int iterations = 100000000;
    for (int i = 0; i < iterations; i++) {
        meters += 0.01;
    }
    printf("Expected: %f km\n", 0.01 * iterations / 1000 );
    printf("Got: %f km \n", meters / 1000);
}

//teste para mostra o tamanho de um numero flutuante e sua variançao de 0.01 ou algo 
//assim de um para outro numero é muito pequena