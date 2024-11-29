/* Atividade de Vetores - Conferir a quantidade 
   de vezes que um número do Vetor se repete */

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {

	int i,a,vet[10],vetValor[5];
	srand((unsigned) time(NULL));
	
	for (i=0;i<10;i++){
		vet[i] = rand()%5;
		printf("Vetor[%d] = %d \n",i,vet[i]);
	}
	
	/*
	for (i=0;i<5;i++){
		vetValor[i] = 0;	
	}
	*/
	
	printf("\n");
	
	for (a=0;a<5;a++){
		vetValor[a] = 0;
		for(i=0;i<10;i++){
			if (a==vet[i]){
				vetValor[a]+=1;
			}
		}
	}
	
	for (a=0;a<5;a++){
		printf("Numero %d apareceu %d \n",a,vetValor[a]);
	}
}