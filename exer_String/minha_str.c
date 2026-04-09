#include <stdio.h>

char* minha_strstr(char* string, char* substring);

char* minha_strstr(char* string, char* substring){
    int tam_str = strlen(string);
    int tam_sub = strlen(substring);
    for (int pos1 = 0; pos1 < tam_str - tam_sub; pos1++){
        char achei = 1;
        for (int pos2 = 0; pos2 < tam_sub; pos2++){
           if (string[pos1+pos2] != substring[pos2]){
                achei = 0;  //indica que n encontrou
                break;
           }
           
        }
        if (achei == 1){
            return string+pos1;
        }
            
    }
    return NULL; 
}

int main(){
    char *str1 = "minha string";
    char *str2 = "str";
    char *pos = minha_strstr(str1, str2);
    if (pos == NULL)
    {
        printf ("Não encontrada!");
    }else
    {
        printf("Substring encontrada! %s\n",pos);
    }
    
    
}