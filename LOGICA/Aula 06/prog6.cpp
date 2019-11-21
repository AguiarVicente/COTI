#include<stdio.h>
#include<stdlib.h>
/*
Parâmetros 
é a entrada de dados em funções. Passagem de valor
para funções.

Ex:
Criar uma função que imprima um numero.
Criar uma função que calcule a soma de dois numeros.

*/

void imprimirNumero(int numero){
	printf("O valor do numero : %d \n", numero);	
}

float calcularSoma(float n1 , float n2){
	float soma = n1 + n2;
	return soma;
}


int main(){
	imprimirNumero(10);
	int n = 100;
	imprimirNumero(n);
	
	printf("O valor da soma : %0.2f \n", calcularSoma(10.0, 20.0));
	
	
	system("pause");
	return 0;
}


