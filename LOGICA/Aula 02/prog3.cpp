#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia o raio
de uma circuferencia.

A) Calcular a area e o comprimento da 
mesma.

B) Imprimir os valores calculados.

variaveis constantes 
São variaveis criadas com assinatura somente leitura.

*/

float raio;
float const PI = 3.14;

int main(){
	
	
	float area = 0;
	float comprimento = 0;
	
	// Entrada de dados
	printf("Digite o raio : ");
	scanf("%f", &raio);
	
	area = PI * raio * raio;
	comprimento = 2 * PI * raio;
	
	printf("Area  : %0.2f \n", area);
	printf("Comprimento  : %0.2f \n", comprimento);
	
	system("pause");
	return 0;
}

