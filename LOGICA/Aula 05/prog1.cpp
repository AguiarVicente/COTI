#include<stdio.h>
#include<stdlib.h>
/*
Estrutura de comparação ( == )
Utilizadas para verificar um conjunto de 
possibilidades finitas.

MENU DE OPÇÔES 

*/

int opcao;

int main(){
	printf("Menu :  \n");
	printf("1 - Adicionar Produto :  \n");
	printf("2 - Listar os produtos :  \n");
	printf("3 - Remover  Produto :  \n");
	printf("4 - Alterar Produto :  \n");
	scanf("%d", &opcao);
	
	switch(opcao){
		
		case 1:
			printf("Produto adicionado com sucesso! \n");
			break;
	
		case 2:
			printf("Lista de produtos! \n");
			break;
	
		case 3:
			printf("Produto removido com sucesso! \n");
			break;
	
		case 4:
			printf("Produto alterado com sucesso! \n");
			break;
		
		default:
			printf("Opcao invalida! \n");
			break;
		
			
		
	}
	
	
	system("pause");
	return 0;
}
