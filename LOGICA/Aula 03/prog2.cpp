#include<stdio.h>
#include<stdlib.h>
/*
Estruturas condicionais

DESVIO CONDICIONAL COMPOSTO
1C - 2R (V,F)

Ex:
	if(condição){
	
		bloco do if (v)
		
	}else{
			bloco do else (f)
	}

Escreva um programa que leia o preço
de um produto.

A) Calcular um desconto de 10% se o valor do 
produto for maior que 1000, senão aplicar um desconto 
de %5.


B) Imprimir o novo valor do produto.
	
*/


float preco;

int main(){
	
	float desconto = 0;
	float preconovo = 0;
	
	printf("Digite o preco : ");
	scanf("%f", &preco);
	
	// DESVIO CONDICIONAL COMPOSTO	
	if(preco > 1000){
		desconto = (preco * 10 )/100;
	
	}else{
		desconto = (preco * 5 )/100;
		
	}
	
	preconovo = preco - desconto;
	printf("Preco do produto : %0.2f \n", preconovo);
	
	
	system("pause");
	return 0;
}








