#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

typedef struct{
	int chave;
	char nome[40];
	int idade;
	int peso;
	double salario;
}Pessoa;

Pessoa lerDados();
void ImprimirPessoa(Pessoa p);

int main() // -------------------- PRINCIPAL
{
	int a;
	Pessoa pessoas[5];
	for(a=0;a<5;a++){
		pessoas[a] = lerDados();
	}for(a=0;a<5;a++){
		ImprimirPessoa(pessoas[a]);
	}
}

Pessoa lerDados() // -------------------- LEITURA DE DADOS
{
		
	Pessoa p;
	
	printf("Preenchendo Dados...\n");
	printf("Chave: \n");
	scanf("%d",&p.chave);
	
	printf("Nome: \n");
	scanf("%s",p.nome);
	
	printf("Idade: \n");
	scanf("%d",&p.idade);
	
	printf("Peso: \n");
	scanf("%d",&p.peso);
	
	printf("Salario: \n");
	scanf("%lf",&p.salario);
	
	return p;

}

void ImprimirPessoa(Pessoa p) // -------------------- IMPRESSAO DE DADOS
{
	printf("Chave: %d \n", p.chave);
	printf("Nome: %s \n", p.nome);
	printf("Idade: %d \n", p.idade);
	printf("Peso: %d \n", p.peso);
	printf("Salario: %.2f \n", p.salario);
}





