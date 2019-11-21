#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia um vetor
de 5 posições.

A) Calcular a soma e a media dos numeros lidos.

B) Imprimir os valores calculados.
*/


int numeros[5];


void entrada(){
	// 0,1,2,3,4
	for(int i = 0; i < 5; i++){
		printf("Digite um numero : ");
		scanf("%d", &numeros[i]);	
	}	
}

int calcularSoma(){
	// ACUMULADOR, +valor
	int soma = 0;

	for(int i = 0; i < 5; i++){
		// Somatorio 	
		soma = soma + numeros[i];
	}
	return soma;
}

int calcularMedia(){
	int media = 0;
	media = calcularSoma() / 5;
	return media;
}

void saida(){
	 printf("O valor da soma : %d \n", calcularSoma());
	 printf("O valor da media : %d \n", calcularMedia());
	
}

int main(){
	entrada();
	saida();
	
	system("pause");
	return 0;
}

