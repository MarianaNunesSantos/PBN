#include <stdio.h>

typedef union
{
    int v;
    unsigned char b[4];
}ValorInt;

int main (){
    ValorInt v1;
    v1.v = 225; 
    printf("valor int: %d\n",v1.v);
    printf("Valor no vetor: \n");
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d",v1.b[i]);
    }
    
    
}
