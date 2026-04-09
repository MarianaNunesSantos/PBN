//2. Implemente a função minha_strcat, que replica o funcionamento da 
//função strcat (concatena a segunda string no final da primeira). Tente resolver usando APENAS ponteiros.

#include <stdio.h>

char *my_strcat(char *destino, const char *origem);

char *my_strcat(char *destino, const char *origem){
    char* ptr1 = destino;
    char* ptr2 = origem;
    while (*ptr1 != '\0'){
        ptr1++;
    }
    while (*ptr2 != '\0'){
        *ptr1 = ptr2;
        ptr1++;
        ptr2++;
    }
    return destino; //por padrão retorna o ponteiro para destino
}

int main(){
    char str1[30] = "Minha string";
    char str2[] = "maior";

    printf("Antes: %s\n",str1);
    my_strcat(str1,str2);
    printf("Após: %s\n",str1);


}