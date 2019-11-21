#include<stdio.h>
#include<stdlib.h>
/*

Funções
Consiste em subidivir o programa em rotinas 
menores. Cada sub-rotina é responsavel por executar
uma unica ação.

Organização e reutilização de código.

Ex:
	void nome_f(){
			bloco da função
		}

Escreva um programa que imprima
uma mensagem de boas vindas.
*/

// Criando...
void imprimirMensagem(){
	printf("Sejam bem vindos! \n");	
}

// Função principal de execução
int main(){
	
	// Executando...	
	imprimirMensagem();
	
	
	system("pause");
	return 0;
}



