#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia dois
numeros.

A) O programa devera efetuar a troca
dos valores lidos.

*/

int a;
int b;

int main(){
	
	// simples troca	
	int aux = 0;
	
	printf("DIgite um numero : ");
	scanf("%d", &a);
	
	printf("DIgite um numero : ");
	scanf("%d", &b);

	aux = a;
	a =  b;
	b =  aux;
	
	printf("O valor de a : %d \n",a);
	printf("O valor de b : %d \n",b);
	
	
	system("pause");
	return 0;
}
