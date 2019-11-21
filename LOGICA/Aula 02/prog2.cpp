#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia a base
e a altura de um triangulo.

A) O programa devera calcular a area
da figura.

B) Imprimir a area encontrada.

*/

float base;
float altura;

int main(){
	
	float area = 0;
	
	// Entrada de dados
	printf("Digite a base : ");
	scanf("%f", &base);
	
	printf("Digite a altura : ");
	scanf("%f", &altura);
	
	// Processamento
	area = (base * altura) / 2;
	
	printf("Area do Triangulo : %f \n", area);
	
	system("pause");
	return 0;
}





