#include <stdio.h>

int main(){
    int vet[10] = {1,2,3,4,5,3,6,7,2,8};
    int contR =0;
    int totalR;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; i++)
        {
            if (vet[i] == vet[j])
            {
                totalR++;
                break;
            }
            
        }
        if ( totalR == 1)
        contR++;
    }
    printf("Quantidade de valores repetidos: %d\n", contR);
    
}