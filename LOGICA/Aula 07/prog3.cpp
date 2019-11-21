#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia 10 notas.
A) Calcular a quantidade de alunos que estão acima
da media.
Obs..: media >= 7
B) Imprimir a quantidade encontrada.
*/

float notas[10];

void entrada(){
	for(int i = 0; i < 10; i++){
		printf("Digite a nota : ");
		scanf("%f", &notas[i]);
	}	
}

int quantidadeAlunosMedia(){
	int qtd = 0;
	for(int i = 0; i < 10; i++){
		if(notas[i] >= 7){
			qtd = qtd + 1;			
		}	
	}
	
	return qtd;
}

void saida(){
	printf("Alunos acima da media : %d \n", quantidadeAlunosMedia());		
}


int main(){
	entrada();
	saida();
	
	system("pause");
	return 0;
}







