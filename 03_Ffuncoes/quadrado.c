#include <stdio.h>

void quadrado();//prototipo.  sempre declarar o prototipo da funçao senao nao funciona
                //sempre declarar o prrototipo antes do main, as funçoes em si podem ser depois do main

void quadrado(){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",i);
    }   
}

int main(){
    quadrado();
}