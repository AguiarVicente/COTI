#include<stdio.h>
#include<stdlib.h>
/*

Escreva um programa que imprima os
numeros pares de 0 a 100.

*/

int main(){
	int i = 0;
	
	while(i < 100){
		
		if(i % 2 == 0){
			printf("%d \n",i);
		}
			
		i = i + 1;
	}
	
	system("pause");
	return 0;
}
