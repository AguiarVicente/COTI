#include<stdio.h>
#include<stdlib.h>
/*

Fun��es
Consiste em subidivir o programa em rotinas 
menores. Cada sub-rotina � responsavel por executar
uma unica a��o.

Organiza��o e reutiliza��o de c�digo.

Ex:
	void nome_f(){
			bloco da fun��o
		}

Escreva um programa que imprima
uma mensagem de boas vindas.
*/

// Criando...
void imprimirMensagem(){
	printf("Sejam bem vindos! \n");	
}

// Fun��o principal de execu��o
int main(){
	
	// Executando...	
	imprimirMensagem();
	
	
	system("pause");
	return 0;
}



