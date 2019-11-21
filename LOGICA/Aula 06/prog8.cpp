#include<stdio.h>
#include<stdlib.h>
/*
Vetores
São estruturas utilizadas para agrupar variaveis
do mesmo tipo.

Escreva um programa que leia um vetor
de 5 posições.

A) Imprimir os valores lidos.

*/

// 0,1,2,3,4
int numeros[5];

void entrada(){
	
	printf("Digite um numero : ");
	scanf("%d", &numeros[0]);

	printf("Digite um numero : ");
	scanf("%d", &numeros[1]);

	printf("Digite um numero : ");
	scanf("%d", &numeros[2]);

	printf("Digite um numero : ");
	scanf("%d", &numeros[3]);

	printf("Digite um numero : ");
	scanf("%d", &numeros[4]);
	
}

void saida(){
	printf("\n ------------------- \n");
	printf("Primeira posicao : %d \n", numeros[0]);
	printf("Segunda  posicao : %d \n", numeros[1]);
	printf("Terceira posicao : %d \n", numeros[2]);
	printf("Quarta   posicao : %d \n", numeros[3]);
	printf("Quinta   posicao : %d \n", numeros[4]);
		
}

int main(){
	entrada();
	saida();
	system("pause");
	return 0;
}





