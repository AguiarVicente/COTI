#include<stdio.h>
#include<stdlib.h>
/*
Escopo de variaveis

Globais
São variaveis criadas fora de blocos de programação,
não precisam ser inicializadas e são visiveis por todos 
os blocos abaixo delas.

Locais 
São variaveis criadas dentro de blocos de programação,
precisam ser inicializadas e são visiveis somente no 
bloco em foram criadas.

*/

// Global, Declarada
int a;

void b1(){
	
	// Local,
	// Inicializada na criação
	int b =  0;
	
	a  = 10;	
	
}

void b2(){
	
	a = 20;
	// não possui acesso.
	b = 20;
	
}



