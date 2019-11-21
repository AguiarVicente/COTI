#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia um
numero.

A) Imprimir o antecessor e o sucessor
do numero lido.

Teste -> Ent -> 10
Saida -> 11, 9
*/

int numero;

int main(){
	int ant = 0;
	int suc = 0;
	
	printf("Digite um numero : ");
	scanf("%d", &numero);
	
	ant = numero - 1;
	suc = numero + 1;
	
	printf("Antecessor : %d \n", ant);	
	printf("Sucessor  : %d \n", suc);	
	
	system("pause");
	return 0;
}

