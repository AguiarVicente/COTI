#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia uma matriz 2x2.
A) Calcular a soma e a media dos numeros lidos.
B) Imprimir os valores calculados.

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

int calcularSomaMatriz(){
	int soma = 0;
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			soma = soma + mat[i][j];			
		}
	}
	
	return soma;
}

int calcularMediaMatriz(){
	int media = 0;
	media = calcularSomaMatriz() / 4;
	return media;
}

void saida(){
	printf("Soma  : %d \n", calcularSomaMatriz());
	printf("Media : %d \n", calcularMediaMatriz());	
}


int main(){
	entrada();
	saida();
	system("pause");
	return 0;
}

