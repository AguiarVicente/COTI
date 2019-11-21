#include<stdio.h>
#include<stdlib.h>
/*
Matriz
São estruturas utilizadas para agrupar 
variaveis do mesmo tipo. A matriz organiza a informação
em duas dimensões: linhas e colunas.

Escreva um programa que leia uma matriz 2x2.
A) Imprimir os valores lidos.

*/

// 4 elementos
int mat[2][2];

void entrada(){
	for(int i =0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Mat[%d][%d] : ", i,j);
			scanf("%d", &mat[i][j]);			
		}
	}	
}

void saida(){
	printf("\n -------------------------------- \n");
	for(int i =0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Mat[%d][%d] : %d \n", i,j, mat[i][j]);
		}
	}
	
}

int main(){
	entrada();
	saida();
	system("pause");
	return 0;
}





