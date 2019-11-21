#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia dois
numeros.

A) O programa devera efetuar as 4 operações
básicas da matematica.

B) Imprimir os valores calculados.

Operadores aritméticos
+, -, *, /.

*/

int n1;
int n2;

int main(){
	int a = 0;
	int s = 0;
	int m = 0;
	int d = 0;
	
	printf("Digite um numero : ");
	scanf("%d", &n1);
	
	printf("Digite um numero : ");
	scanf("%d", &n2);
	
	a  =  n1 + n2;
	s  =  n1 - n2;
	m  =  n1 * n2;
	d  =  n1 / n2;

	printf("Adicao : %d \n", a);
	printf("Subtracao : %d \n", s);
	printf("Multiplicacao : %d \n", m);
	printf("Divisao : %d \n", d);
	
	system("pause");
	return 0;
}

