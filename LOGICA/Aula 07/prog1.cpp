#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia o preço de 5 produtos.
A) O programa devera calcular o valor total a pagar.
B) O programa devera calcular um desconto de 10% se 
o total for maior que 5000.
C) Imprimir o novo total calculado.

*/

float precos[5];

void entrada(){
	for(int i  = 0; i < 5; i++){
		printf("Digite o preco : ");
		scanf("%f", &precos[i]);	
		}
}

float calcularTotal(){
	float total = 0;

	for(int i = 0; i < 5; i++){
		// 100 + 200 + 300 + 400 + 500
		total = total + precos[i];		
	}
	
	return total;
}

float calcularDesconto(){
	float desconto = 0;
	float total = calcularTotal();
	
	if(total > 5000){
		desconto = (total * 10)/100;		
		}
	
	return desconto;
}

float calcularTotalNovo(){
	float totalnovo = 0;
	totalnovo = calcularTotal() - calcularDesconto();
	return totalnovo;	
}

void saida(){
	 printf("O total : %0.2f \n", calcularTotal());
	 printf("O total com desconto : %0.2f \n", calcularTotalNovo());
}


int main(){
	entrada();
	saida();
	
	system("pause");
	return 0;	
}



