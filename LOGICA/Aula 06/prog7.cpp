#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia duas
notas de um aluno.

A) Calcular a media do aluno.

B) Imprimir a situação do aluno em relação
a media encontrada:
			Media >= 7 , 'Aprovado',
			Media < 4, 'Reprovado'
			Media entre 4 e 7 'Recuperacao'



*/

float n1;
float n2;

void entrada(){
	
	printf("Digite a nota do aluno : ");
	scanf("%f", &n1);
	
	printf("Digite a nota do aluno : ");
	scanf("%f", &n2);
	
	
}

float calcularMedia(){
	float media = 0;
	media = (n1 + n2) / 2;
	return media;
	
}

void imprimirSituacao(){
	float m = calcularMedia();
	printf("Media do aluno : %0.2f \n", m);
	
	if(m >= 7){
		printf("Aprovado! \n");
		
	}else if(m < 4){
	 	printf("Reprovado! \n");
	 	
	}else{
		printf("Recuperacao! \n");
	}
	
}

int main(){
	entrada();
	imprimirSituacao();
	system("pause");
	return 0;	
}






