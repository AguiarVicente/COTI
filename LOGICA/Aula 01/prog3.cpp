#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia
um numero.

A) Imprimir o valor lido.

*/


// Variavel do tipo inteiro de nome numero
int numero;


int main(){
	printf("Digite um numero : ");
	// entrada de dados
	// & -> aponta para a variavel
	scanf("%d",&numero);
	
	// Saida de dados
	printf("O valor lido : %d \n", numero);
	
		
	system("pause");
	return  0;
}




