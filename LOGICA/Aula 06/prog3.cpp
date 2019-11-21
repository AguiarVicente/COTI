#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia o preço
de um produto.

A) Calcular um desconto de 10% se o 
valor do produto for maior que 1000,
senão aplicar um desconto de 5%.

B) Imprimir o novo valor do produto.

*/

float preco;
float desconto;
float preconovo;
	

void entrada(){
	printf("Digite o preco : ");
	scanf("%f", &preco);
}


void calcularDesconto(){
	if(preco > 1000){
		desconto = (preco * 10)/100;
		
	}else{
		desconto = (preco * 5)/100;
	}
	
}

void calcularPrecoNovo(){
	preconovo = preco - desconto;	
}

void saida(){
	printf("Preco novo : %0.2f \n", preconovo);
}

int main(){
	entrada();
	calcularDesconto();
	calcularPrecoNovo();
	saida();
	
	system("pause");
	return 0;
}







