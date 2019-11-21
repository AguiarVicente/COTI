#include<stdio.h>
#include<stdlib.h>
/*
Variaveis
São estruturas usadas para guardar um 
valor em memoria. Defina-se o tipo e depois o nome.

Formatação de entrada e saida
%d - inteiros - int
%f - decimais - float


*/

// Variavel do tipo inteiro de nome a
// Declarada
int a;


int main(){
	
	// Inicializando
	a = 10;
	
	// Variavel do tipo decimal de nome m e valor 15.5
	// Inicializada na criação
	float m = 15.5;
	
	// Saida de dados
	// \n -> enter, pular linha.
	printf("O valor do inteiro : %d \n", a);
	printf("O valor do decimal : %f \n", m);
		
	system("pause");
	return 0;
}







