#include<stdio.h>
#include<stdlib.h>
/*

Escreva um programa que imprima a 
quantidade dos multiplos de 5 de 0 a 100.

*/

int main(){
	int i = 0;
	
	// CONTADOR, +1
	int cont = 0;
	
	while(i < 100){
	
		if(i % 5 == 0){
			// Contagem
			cont = cont + 1;
		}
		
		i  = i + 1;
	}
	
	printf("Quantidade de multiplos de 5 : %d \n", cont);
	
	system("pause");
	return 0;

}





