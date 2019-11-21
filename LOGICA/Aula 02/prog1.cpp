#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia a base
e a altura de um retangulo.

A) Calcular a area e o perimetro.

B) Imprimir os valores calculados.

*/

float base;
float altura;

int main(){
	
	float area =  0;
	float perimetro = 0;
	
	// Entrada de dados
	printf("Digite a base : ");
	scanf("%f", &base);
	
	printf("Digite a altura : ");
	scanf("%f", &altura);
	
	// Processamento
	
	area = base * altura;
	perimetro = 2 * ( base + altura);
	
	// Saida de dados
	printf("Area  : %0.2f \n", area);
	printf("Perimetro : %0.2f \n", perimetro);		
	
	system("pause");
	return 0;
}




