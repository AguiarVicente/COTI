#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia um vetor
de 10 posições.

A) Verificar e imprimir a quantidade de numeros
pares e impares.

*/


int numeros[10];


void entrada(){
	// 0,1,2,3,4
	for(int i = 0; i < 10; i++){
		printf("Digite um numero : ");
		scanf("%d", &numeros[i]);	
	}	
}

int verificarQTDPar(){
	int qtd = 0;
	for(int i = 0; i < 10; i++){
		if(numeros[i] % 2 == 0){
			qtd = qtd + 1;
		}
		
	}
	return qtd;
}

int verificarQTDImpar(){
	int qtd = 0;
	for(int i = 0; i < 10; i++){
		if(numeros[i] % 2 != 0){
			qtd = qtd + 1;
		}
	}
	
	return qtd;
}

void saida(){
	printf("Quantidade par : %d \n", verificarQTDPar());
	printf("Quantidade impar : %d \n", verificarQTDImpar());
	
}


int main(){
	entrada();
	saida();
	
	system("pause");
	return 0;
}

