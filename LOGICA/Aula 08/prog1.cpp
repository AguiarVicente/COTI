#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia um 
vetor de 5 posi��es.

A) O programa devera imprimir os
valores lidos.

Ordena��o 
� o processo de organiza��o da informa��o
dentro de um vetor, matriz ou arquivo.

M�todo bolha 
Consiste em fazer uma serie de compara��es sucessivas
at� que o valor selecionado alcance a posi��o desejada.



*/

int const TAM =5;
int numeros[TAM];

void entrada(){
	for(int i = 0; i < TAM; i++){
		printf("Digite um numero : ");
		scanf("%d", &numeros[i]);
		
	}
	
}

void ordenacao(){
	int aux = 0;
	for(int j = 0; j < TAM -1; j++){
		for(int i = TAM -1; i > j; i--){
			if( numeros[i-1] > numeros[i]){
					aux = numeros[i];
					numeros[i] = numeros[i-1];
					numeros[i-1] = aux;
			}
		}
	}
	
}


void saida(){
	printf("\n ----------------------- \n");
	
	for(int i = 0; i < TAM; i++){
		printf(" %d | ",numeros[i]);
	}
	
	printf("\n ----------------------- \n");
	
}


int main(){
	entrada();
	ordenacao();
	saida();
		
	system("pause");
	return 0;
}

