#include<stdio.h>
#include<stdlib.h>
/*

Escreva um programa que imprima
os numeros inteiros de 10 a 0.

*/

int main(){
	int i = 10;
	
	while(i > 0){
		printf("%d \n", i);
		
		// decremento da variavel i de 1 em 1 
		i = i -1;
	}
	
	printf("O valor do i : %d \n", i);
	
	system("pause");
	return 0;
}
