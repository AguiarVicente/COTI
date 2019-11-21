#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia o preço
e a quantidade de um produto.

A) Calcular e imprimir o total a pagar.

*/

// Globais -- Entrada
float preco;
int quantidade;

int main(){
	// Local -- Processamento
	float total = 0;
	
	printf("Digite o preco : ");
	scanf("%f",&preco);
	
	printf("Digite a quantidade : ");
	scanf("%d",&quantidade);
	
	total = preco * quantidade;
	
	printf("Total a pagar : %0.2f \n", total);
	
	system("pause");
	return 0;
}
