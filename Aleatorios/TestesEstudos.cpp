#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {

	int a,i,y,x,vet[10];
	srand((unsigned) time(NULL));
	
	for (i=0;i<10;i++){
		vet[i] = rand()%100;
		printf("Vetor[%d] = %d \n",i,vet[i]);
	}
	
	for (i=0;i<10;i++){	
		for (y=0;y<10;y++){
			if (vet[i]>vet[y]){
				x = vet[i];    
				vet[i] = vet[y];
				vet[y] = x;
			}
		}
	}
	printf("\nOrdenado:\n"); //Ordem decrescente
	for (a=0;a<10;a++){
		printf("Vetor[%d] = %d \n",a,vet[a]);
	}
	
	printf("");
	i=-1;
	printf("\nOrdenado:\n"); //Ordem crescente
	for (a=9;a>-1;a--){
		i++;
		printf("Vetor[%d] = %d \n",i,vet[a]);
	}
	
	
}