#include<stdio.h>
#include<stdlib.h>
/*
Faça um algoritmo que leia a idade de uma pessoa expressa em anos, 
meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
Considerar ano com 365 dias e mês com 30 dias.

*/

int anos;
int meses;
int dias;

int main(){
	
	int idade = 0;
	
	printf("Digite a quantidade de anos  : ");
	scanf("%d", &anos);
	
	printf("Digite a quantidade de meses  : ");
	scanf("%d", &meses);
	
	printf("Digite a quantidade de dias  : ");
	scanf("%d", &dias);

	idade  = (anos * 365) + (meses * 30) + dias;
	
	printf("Idade : %d \n", idade);
	
	system("pause");
	return 0;
}


