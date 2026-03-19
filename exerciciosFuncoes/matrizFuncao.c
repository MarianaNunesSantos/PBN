#include <stdio.h>

//como o sor disse para fazer
// void multMatriz(int a[5][3], int b[3][4], int c[5][4]){}

int** multiMatriz(const int matriz1[5][3],const int matriz2[3][4]);

int** multiMatriz(const int matriz1[5][3],const int matriz2[3][4]){
    int matrizC[5][4];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            matrizC[i][j]=0;
            for (int k = 0; k < 3; k++){
                matrizC[i][j] += matriz1[i][k] * matriz2[k][j];    
            }
        } 
    }
    return matrizC;
}

int main(){
    int matriz1[5][3], matriz2[3][4];
    int tam1=15, tam2=12;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 2; j++){
            matriz1[i][j] = 2*(6+i);
        }
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 8; j++){
            matriz2[i][j] = 4+(6*j);
        }
    }
    
    //mostrar as matrizs

}