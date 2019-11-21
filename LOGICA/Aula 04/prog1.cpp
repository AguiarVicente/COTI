#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia o preço
e a quantidade de um produto.

A) O programa devera calcular o 
total a pagar.

B) Calcular um desconto de 10% se o preço
for maior que 300.

C) Calcular um desconto de 8% se o quantidade
de produto for maior que 5.

D) Imprimir o novo valor total a ser pago.


*/

float preco;
int quantidade;


int main(){
	float total = 0;
	float desc1 = 0;
	float desc2 = 0;
	
	float totaldesc = 0;
	
	printf("Digite o preco : ");
	scanf("%f", &preco);
	
	printf("Digite a quantidade : ");
	scanf("%d", &quantidade);
	
	total = preco * quantidade;
	
	if(preco > 300){
		desc1 = (total * 10)/100;
	}
	
	/*
	IF SEQUENCIAL  -> 2C 
	*/
	
	if(quantidade > 5){
		desc2 = (total * 8)/100;
		
	}
	
	totaldesc = total - (desc1 + desc2);
	
	printf("Desconto 1  : %0.2f \n", desc1);
	printf("Desconto 2  : %0.2f \n", desc2);
	
	printf("Total a pagar : %0.2f \n", total);
	printf("Total a pagar com desconto : %0.2f \n", totaldesc);
	
	
	system("pause");
	return 0;
}
