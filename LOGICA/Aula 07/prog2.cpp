#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia a media de 5 turmas
de matematica do 3 ano.

A) O programa devera calcular a media geral do 
3 ano.

B) Verificar qual a turma que obteve a maior media.

C) Imprimir os valores calculados.

*/

float medias[5];

void entrada(){
	for(int i = 0; i < 5; i++){
		printf("Digite a media da turma : ");
		scanf("%f", &medias[i]);
	}
}

float calcularMediaGeral(){
	float mediag = 0;
	float soma = 0;

	for(int i = 0; i < 5; i++){
		soma = soma + medias[i];
	}
	
	mediag = soma / 5;	
	return mediag;
}

float calcularMelhorTurma(){
	float m = medias[0];
	
	for(int i = 0; i < 5; i++){
		
		if(medias[i] > m){
			m  = medias[i];
		}
		
	}
	
	return m;
}

void saida(){
	printf("Media Geral  : %0.2f \n", calcularMediaGeral());
	printf("Melhor Turma  : %0.2f \n", calcularMelhorTurma());
	
}

int main(){
	entrada();
	saida();
	
	system("pause");
	return 0;
}







