#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia um
numero.

A) O programa devera verificar se o 
numero � valido.

Obs..: numero v�lido est� entre 0 e 10.


*/

int numero;

int main(){
	printf("Digite um numero : ");
	scanf("%d", &numero);
	
	if(numero >= 0 && numero <= 10){
		printf("Valido! \n");
		
	}else{
		printf("Invalido! \n");
		
	}
	
	system("pause");
	return 0;
}








