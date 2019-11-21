#include<stdio.h>
#include<stdlib.h>
/*

Escreva um programa que imprima a soma
dos multiplos de 3 de 0 a 100.

*/

int main(){
	int i = 0;
	// ACUMULADOR, +valor
	int soma = 0;
	
	while(i < 100){
		
		if(i % 3 == 0){
			soma = soma + i;
		}
			
		i = i + 1;
	}
	
	printf("A soma dos multiplos de 3 : %d \n", soma);
	
	
	
	system("pause");
	return 0;

}
