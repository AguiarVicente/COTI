#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia um
numero.

A) O programa devera verificar se o 
mesmo é par ou impar.
 
*/

int numero;

int main(){
	int resto = 0;
	
	printf("Digite um numero : ");
	scanf("%d", &numero);
	
	resto = numero % 2;
	
	if(resto == 0){
		printf("Par! \n");
		
	}else{
		printf("Impar! \n");
		
	}
	
	system("pause");
	return 0;
}
