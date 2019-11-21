#include<stdio.h>
#include<stdlib.h>
/*
Criar um programa que leia dois
numeros.

A) O programa devera conter um menu com
as 4 operações básicas da matematica.

B) Imprimr o valor da operação selecionada.

*/

int a;
int b;

int opcao;


int main(){
	
	int ope = 0;
	
	printf("Digite um numero : ");
	scanf("%d", &a);
		
	printf("Digite um numero : ");
	scanf("%d", &b);
	
	printf("Menu :  \n");
	printf("1 - Adicao :  \n");
	printf("2 - Subtracao :  \n");
	printf("3 - Multiplicacao :  \n");
	printf("4 - Divisao :  \n");
	scanf("%d", &opcao);

	switch(opcao){
		case 1:
			ope = a + b;
			printf("Adicao : %d \n", ope);	
			break;
	
		case 2:
			ope = a - b;
			printf("Subtracao : %d \n", ope);	
			break;
	
		case 3:
			ope = a * b;
			printf("Multiplicacao : %d \n", ope);	
			break;
	
		case 4:
		
			if( b == 0){
				printf("Nao ha divisao por zero! \n");
				break;
			}
			
			ope = a / b;
			printf("Divisao : %d \n", ope);	
			break;
		
		default:
			printf("Operacao Invalida! \n");
			break;
		
		
	}	

	
	system("pause");
	return 0;
}





