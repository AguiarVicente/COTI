#include<stdio.h>
#include<stdlib.h>
/*

DESVIO CONDICIONAL ESCALONADO
1C - NR+2 
Ex:
	else if(condicao){
			bloco do else if
		}



Escreva um programa que leia um
numero.

A) verificar se o numero é positivo
ou negativo.

Operadores relacionais (v,f)
<, Menor
>, Maior
<=, menor igual
>=, maior igual
!=, diferente
==, igual

*/

int numero;

int main(){
	printf("Digite um numero : ");
	scanf("%d", &numero);
	
	if(numero > 0){
		printf("Positivo! \n");
		
	}else if(numero == 0){
		printf("Neutro! \n");
		
	}else{
		printf("Negativo! \n");
		
	}
	
	
	system("pause");
	return 0;
}




