#include<stdio.h>
#include<stdlib.h>
/*
Estrutura de repetição
Representam rotinas executadas 
automaticamente pelo programa.

Enquanto(condição) Verdadeiro, Falsa
	bloco do enquanto
Fim enquanto

Loop infinito
while(true){
		printf("Ola");
	}

Escreva um programa que imprima
os numeros inteiros de 0 a 10.

*/

int main(){
	
	// inicio, indice
	int i = 0;
	
	// condição
	// 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 -> 10 < 10 (f)
	while(i < 10){
		printf("%d \n",i);
	// incremeto da variavel i de 1 em 1
	 i = i + 1;	
	}
	
	printf("O valor do i : %d \n", i);
	
	system("pause");
	return 0;
}





