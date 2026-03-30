//4. Escreva uma função que receba um vetor de inteiros e o tamanho do vetor. 
//A função deverá ordenar os elementos (implemente, por exemplo, bubble sort).

#include <stdio.h>

int bubbleSort (int vet[], int tam);

int bubbleSort (int vet[], int tam){
	int aux;
	int* p;
	for (int i = 0; i < tam; i++){
		for (int  j = 0; j < tam-1; j++){
			if (vet[j] > vet[j + 1]){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
			
		}
		
	}
	*p = vet;
	return p;
}

int main(){

	int tam=5,pont;
	int vet[] = {8,9,3,5,1};
	printf("Vetor antes de passar pelo bublleSrot: \n");
	for (int i = 0; i < tam; i++){
		printf(" [%d] ", vet[i]);
	}
	
	pont = bubbleSort(vet,tam);
	printf("Vetor DEPOIS de ter passado pelo bubbleSort: \n");
	for (int i = 0; i < tam; i++){
		printf(" [%d] ", pont);
	}
	

}