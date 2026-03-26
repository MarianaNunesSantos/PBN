#include <stdio.h>

void exibirMemoria(char *ptr, int tam);

void exibirMemoria(char *ptr, int tam){
    for (size_t i = 0; i < tam; i++)
    {
        if (i % 16 == 0)
        {
            printf ("\n%p", ptr);
            printf("");
            ptr++;
        }
        
        //printf ("%p: %u\n", ptr, *ptr);   print q o sor passou primeiro, depois ele trocou pra esses do if
    }
    
}

int main() {
            char* text = "Prog. Sofware Basico";
            int v[] = { 0, 1, 2, 3, 4 };
            int matriz[4][4] = {
                0, 1, 2, 3,
                4, 5, 6, 7,
                8, 9, 10, 11,
                12, 13, 14, 15};



}