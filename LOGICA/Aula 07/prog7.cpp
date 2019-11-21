#include<stdio.h>
#include<stdlib.h>
/*

Struct
Agrupar variaveis de tipos diferentes.Criação 
de estruturas que representam um conjunto de dados
de tipos diferentes.

Escreva um programa que leia o
nome , idade e o sexo de uma pessoa.

A) Imprimir os dados lidos.

*/

struct Pessoa{
	
	char nome[20];
	int idade;
	char sexo;
	
};

// p é uma variavel do tipo Pessoa
struct Pessoa p;

void entrada(){
	 printf("Digite o nome : ");
	 scanf("%s", &p.nome);
	
	 printf("Digite a idade : ");
	 scanf("%d", &p.idade);
	
	 printf("Digite o sexo (m) ou (f): ");
	 scanf("%s", &p.sexo);	
}

void saida(){
	printf("Pessoa %s de idade %d e sexo %c  \n",
	p.nome, p.idade, p.sexo);	
}

int main(){
	entrada();
	saida();
	system("pause");
	return 0;
}






