#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia duas notas
do aluno.

A) Calcular a media do aluno e imprimir a situação em 
relação a media encontrada: media >= 7 'aprovado' senão 'reprovado'.

*/

float n1;
float n2;

int main(){
	float media = 0;
	
	printf("Digite a nota do aluno : ");
	scanf("%f", &n1);
	
	printf("Digite a nota do aluno : ");
	scanf("%f", &n2);
	
	media = (n1 + n2)/2;
	
	printf("Media : %0.2f \n", media);
	
	if(media >= 7){
		printf("Aprovado! \n");
		
	}else{
		printf("Reprovado! \n");

	}
	
	system("pause");
	return 0;
}
