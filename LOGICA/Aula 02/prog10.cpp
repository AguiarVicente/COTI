#include<stdio.h>
#include<stdlib.h>
/*
Escopo de variaveis

Globais
S�o variaveis criadas fora de blocos de programa��o,
n�o precisam ser inicializadas e s�o visiveis por todos 
os blocos abaixo delas.

Locais 
S�o variaveis criadas dentro de blocos de programa��o,
precisam ser inicializadas e s�o visiveis somente no 
bloco em foram criadas.

*/

// Global, Declarada
int a;

void b1(){
	
	// Local,
	// Inicializada na cria��o
	int b =  0;
	
	a  = 10;	
	
}

void b2(){
	
	a = 20;
	// n�o possui acesso.
	b = 20;
	
}



