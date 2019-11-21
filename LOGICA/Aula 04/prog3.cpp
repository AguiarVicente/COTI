#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia 3 numeros.

A) O programa devera verificar qual o maior entre os 3.

Operadores lógicos

AND,&&, ele retorna verdadeiro quando todas as condições são verdadeiras.

OR,||, ele retorna verdadeiro quando pelo menos uma condição é verdadeira.

Tabela verdade
cond1 | cond2 | AND
v       f     f
f       v     f
f       f     f
v       v     v


*/

int a;
int b;
int c;

int main(){
	printf("Digite um numero : ");
	scanf("%d", &a);
	
	printf("Digite um numero : ");
	scanf("%d", &b);
	
	printf("Digite um numero : ");
	scanf("%d", &c);
	
	if(a > b && a > c){
		printf("O primeiro e o maior! \n");	
		
	}else if(b > a && b > c){
		printf("O segundo e o maior! \n");	
		
	}else{
		printf("O terceiro e o maior! \n");	
		
	}
	
	system("pause");
	return 0;
}


