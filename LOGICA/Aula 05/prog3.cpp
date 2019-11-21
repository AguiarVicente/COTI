#include<stdio.h>
#include<stdlib.h>
/*
Uma fruteira está vendendo frutas com a seguinte tabela de preços:

	Até 5 Kg 		Acima de 5 Kg
	Morango R$ 2,50 por Kg R$ 2,20 por Kg
	Maçã R$ 1,80 por Kg R$ 1,50 por Kg
	
Se o cliente comprar mais de 8 Kg em frutas ou o valor total da 
compra ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre 
este total. Escreva um algoritmo para ler a quantidade (em Kg) de
morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor 
a ser pago pelo cliente. 


*/

float kiloMaca;
float kiloMorango;

int main(){
	float totalKilo = 0;
	float precoMaca = 0;
	float precoMorango = 0;
	float precoTotal = 0;
	float precoTotalDesc = 0;
	float desconto = 0;
	
	printf("Digite a quantidade de macas : ");
	scanf("%f", &kiloMaca);
	
	printf("Digite a quantidade de morango : ");
	scanf("%f", &kiloMorango);
	
	totalKilo = kiloMaca + kiloMorango;
	
	if(kiloMaca <= 5){
		precoMaca = 1.80 * kiloMaca;
		
	}else{
		precoMaca = 1.50 * kiloMaca;
		
	}
	
	if(kiloMorango <= 5 ){

		precoMorango = 2.50 * kiloMorango;
		
	}else{
		precoMorango = 2.20 * kiloMorango;
		
	}
	
	precoTotal = precoMaca + precoMorango;
	
	if(precoTotal >= 25.00 || totalKilo >= 8.0 ){
		desconto = (precoTotal * 10)/100;
		
	}
	
	precoTotalDesc = precoTotal - desconto;
		
	printf("Relatorio :  \n");
	printf("Morango : KG :  %0.2f, Preco : %0.2f \n",kiloMorango, precoMorango);
	printf("Maca : KG :  %0.2f, Preco : %0.2f \n",kiloMaca, precoMaca);
	printf("Total de kilos : %0.2f \n",totalKilo);
	printf("Preco Total :  %0.2f \n", precoTotal);
	printf("Preco Total com desconto : %0.2f \n", precoTotalDesc);
	
	
	system("pause");
	return 0;
}

