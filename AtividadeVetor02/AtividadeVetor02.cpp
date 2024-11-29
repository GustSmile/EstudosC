#include <iostream>
#include <stdlib.h>
#include <time.h>


void vetor(int vet[], int t);
int reps(int vet[], int t, int repsValor);
void menu();



int main() {
	int operacao,vet[30],t,repsValor,repsQuant;
	do{
		menu();
		scanf("%d",&operacao);
		if (operacao==1){
			do{
				printf("\nQual sera o tamanho do vetor?\n");
				scanf("%d",&t);	
				if (t<=30 && t>0){
					vetor(vet,t);
				}else if(t>30){
					printf("\nvalor muito grande! digite novamente...\n");
				}else if(t<=0){
					printf("\nNao e possivel\n");
				}
			}while(t>30 || t<=0);
		}
		else if (operacao==2){
			printf("\nQual o Numero que voce deseja conferir?\n");
			scanf("%d",&repsValor);
			repsQuant = reps(vet,t,repsValor);
			printf("\nO Numero %d se repetiu %d.\n",repsValor, repsQuant);
			system("pause");
		}
	}
	while(operacao!=0);
}

void menu(){
	system("cls");
	printf("Menu:\n");
	printf("1 - Preencha e imprima o vetor\n");
	printf("2 - Mostre quantas vezes um numero se repete\n");
	printf("0 - SAIR\n");
}

void vetor(int vet[], int t ){
	system("cls");
	srand((unsigned) time(NULL));
	int i;
	
	printf("\nPreenchendo Vetor:\n");
	
	
	for (i=0; i<t; i++){
		vet[i] = rand()%5;
		printf("Vetor[%d] = %d \n",i,vet[i]);
	}
	system("pause");
}

int reps(int vet[], int t, int repsValor){
	int repsQuant = 0;
	for (int i=0; i<t; i++){
		if(repsValor==vet[i]){
			repsQuant+=1;
		}
	}
	return repsQuant;

}

