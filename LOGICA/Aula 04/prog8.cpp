#include<stdio.h>
#include<stdlib.h>
/*
 Faça um algoritmo para ler:  a quantidade adquirida e o preço
unitário. Calcular e escrever o total.

A) Calcular um desconto de 15% se o total for maior que 5000,
senão aplicar um desconto de 7%.

B) Imprimir o novo total encontrado.


*/

float preco;
int quantidade;


int main(){
	float total = 0;
	float totaldesc = 0;
	float desconto = 0;
	
	printf("Digite o preco : ");
	scanf("%f", &preco);
	
	printf("Digite a quantidade : ");
	scanf("%d", &quantidade);
	
	total = preco * quantidade;
	
	if(total > 5000){
		desconto = (total * 15)/100;
		
	}else{
		desconto = (total * 7)/100;
	}
	
	totaldesc  = total - desconto;
	printf("Total : %0.2f \n", total);
	printf("Total com desconto : %0.2f \n", totaldesc);
	
	system("pause");
	return 0;
}
