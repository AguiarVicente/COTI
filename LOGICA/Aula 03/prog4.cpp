#include<stdio.h>
#include<stdlib.h>
/*
As ma��s custam R$ 1,30 cada se forem compradas menos de uma d�zia, 
e R$ 1,00 se forem compradas pelo menos 12. Escreva um programa que 
leia o n�mero de ma��s compradas, calcule e escreva o custo 
total da compra. 

*/

int qtdMacas;


int main(){
	float preco = 0;
	
	printf("Digite a quantidade de macas : ");
	scanf("%d", &qtdMacas);
	
	if(qtdMacas >= 12){
		preco = qtdMacas * 1.0;

	}else{
		preco = qtdMacas * 1.3;
		
	}
	
	printf("O valor total a ser pago : %0.2f \n", preco);
	
	
	system("pause");
	return 0;
}


