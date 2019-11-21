#include<stdio.h>
#include<stdlib.h>
/*
Estruturas condicionais
Representam um fluxo alternativo na execução
do programa.

DESVIO CONDICIONAL SIMPLES
1C - 1R

Ex:
	if(condição){
		bloco do if
	}


Escreva um programa que leia o preço
de um produto.
A) Calcular um desconto de 10% se o valor do 
produto for maior que 1000.

B) Imprimir o novo valor do produto.

*/


float preco;

int main(){
	
	float desconto = 0;
	float preconovo = 0;
	
	printf("Digite o preco : ");
	scanf("%f", &preco);
	
	// DESVIO CONDICIONAL SIMPLES	
	if(preco > 1000){
		desconto = (preco * 10 )/100;
	}
	
	preconovo = preco - desconto;
	printf("Preco do produto : %0.2f \n", preconovo);
	
	
	system("pause");
	return 0;
}







