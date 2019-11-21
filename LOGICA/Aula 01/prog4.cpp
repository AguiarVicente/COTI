#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia dois
numeros.

A) O programa devera calcular a soma
e a media.

B) Imprimir os valores calculados.
*/

// Declaradas, de nome n1 e n2 e tipo decimal.
float n1;
float n2;

int main(){
	
	// Variaveis do tipo decimal e nome soma e media
	// Inicializadas na criação
	float soma = 0;
	float media = 0;
	
	// Entrada de dados
	printf("Digite um numero : ");
	scanf("%f", &n1);
	
	printf("Digite um numero : ");
	scanf("%f", &n2);
	
	// Processamento
	soma = n1 + n2;
	media = soma / 2;
	
	// Saida de dados
	printf("Soma : %f \n", soma);
	printf("Media : %f \n", media);
		
	system("pause");
	return 0;
}


