#include<stdio.h>
#include<stdlib.h>
/*

Escreva um programa que leia um vetor
de 5 posições.

A) Imprimir os valores lidos.
*/

// 0,1,2,3,4
int numeros[5];

void entrada(){
	// 0,1,2,3,4
	for(int i = 0; i < 5; i++){
		printf("Digite um numero : ");
		scanf("%d", &numeros[i]);
		
	}
	
}

void saida(){
	// 0,1,2,3,4
	for(int i = 0; i < 5; i++){
		printf("Numeros[%d] :  %d \n",i,numeros[i]);
		
	}	
	
}

int main(){
	entrada();
	saida();
	
	system("pause");
	return 0;
}


