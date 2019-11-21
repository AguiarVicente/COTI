#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia uma matriz 3x3.

A) Calcular a soma dos elementos da primeira linha.
B) Calcular o valor da diagonal principal.

C) Imprimir os valores calculados.

*/

// 9 elementos
int mat[3][3];

void entrada(){
	for(int i =0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Mat[%d][%d] : ", i,j);
			scanf("%d", &mat[i][j]);			
		}
	}	
}

int calcularPrimeiraLinha(){
	int linha = 0;
	for(int i =0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(i == 0){
				linha = linha + mat[i][j];			
			}
		}
	}	
	return linha;
}

int calcularDiagonalPrincipal(){
	int dp = 0;
	for(int i =0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(i == j){
				dp = dp + mat[i][j];
			}
		}
	}	
	return dp;
}


void saida(){
	printf("Primeira Linha : %d \n", calcularPrimeiraLinha());
	printf("Diagonal Principal : %d \n", calcularDiagonalPrincipal());
}


int main(){
	entrada();
	saida();
	system("pause");
	return 0;
}
