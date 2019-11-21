#include<stdio.h>
#include<stdlib.h>
/*
O custo de um carro novo ao consumidor é a soma do custo de fábrica com 
a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, 
escrever um algoritmo para ler o custo de fábrica de um carro, 
calcular e escrever o custo final ao consumidor

*/

float custo_fabrica;

int main(){

	float juros = 0;
	float impostos = 0;
	
	float custo_final =0;
	
	printf("Digite o custo de fabricacao : ");
	scanf("%f",&custo_fabrica);
	
	juros = (custo_fabrica * 28)/100;
	impostos = (custo_fabrica * 45)/100;
	
	custo_final = custo_fabrica + juros + impostos;
	
	printf("Custo Final : %0.2f \n", custo_final);
		
	system("pause");
	return 0;

}





