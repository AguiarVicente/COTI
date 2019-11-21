#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia dois
numeros.

A) O programa devera calcular a soma
e a media dos numeros lidos.

B) Imprimir os valores calculados.
[Entrada][Processamento][Saida]

void -> procedimento
Executam somente uma unica ação e não 
possuem a capacidade de retornar um valor de saida.

tipada -> processamento (int, float, char, bool)
Executam somente uma unica ação e possuem a capacidade
de retornar um valor de saida.

*/


// Global
int a;
int b;

void entrada(){
	
	printf("Digite um numero : ");
	scanf("%d", &a);
	
	printf("Digite um numero : ");
	scanf("%d", &b);
	
}

// PROCESSAMENTO
// Função + variavel
int calcularSoma(){
	int soma = 0;
	soma = a + b;	
	return soma;

}

// PROCESSAMENTO
int calcularMedia(){
	int media = 0;
	media = calcularSoma() / 2; 
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




