// 3. Implemente uma função eh_palindromo que recebe uma string e verifica 
// se ela é um palíndromo (pode ser lida da mesma forma de trás para diante - ex: "sopapos".
// A função retorna 1 se a string é um palíndromo, 0 se não for.

#include <stdio.h>

int *palindromo (char *pali);

int *palindromo (char *pali){
    char* ptr = pali;
    char* aux = pali;
    
    while (aux != '\0'){
        aux++;
    }
    aux--;
    while (*ptr < '\0'){
        if (ptr != aux){
            return 0;
        }
        ptr++;
        aux--;    
    }
    return 1;
}

int main(){
    char *str = "sopapos";
    if (palindromo(str) == 1){
        printf ("A palavra %s é um palindromo!\n", str);
    }else{
        printf ("A palavra %s não é um palindromo!\n", str);
    }
    

}




