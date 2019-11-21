#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia dois
numeros.

A) O programa devera calcular a soma
e a media dos numeros lidos.

B) Imprimir os valores calculados.
[Entrada][Processamento][Saida]


*/

// Global
int a;
int b;

int soma;
int media;

void entrada(){
	
	printf("Digite um numero : ");
	scanf("%d", &a);
	
	printf("Digite um numero : ");
	scanf("%d", &b);
	
}

void calcularSoma(){
	soma = a + b;	

}

void calcularMedia(){
	media = soma / 2; 
	
}

void saida(){
	printf("O valor da soma : %d \n", soma);
	printf("O valor da media : %d \n", media);
		
}

int main(){
	
	entrada();
	calcularSoma();
	calcularMedia();
	saida();
	
	system("pause");	
	return 0;
}




