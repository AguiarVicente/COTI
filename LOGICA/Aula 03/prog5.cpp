#include<stdio.h>
#include<stdlib.h>
/*
Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma 
mensagem que diga se ela poder� ou n�o votar este ano (n�o � necess�rio 
considerar o m�s em que a pessoa nasceu). 

*/

int anoAtual;
int anoNasc;

int main(){
	int idade = 0;
	
	printf("Digite o ano atual : ");
	scanf("%d", &anoAtual);
	
	printf("Digite o ano de nascimento : ");
	scanf("%d", &anoNasc);
	
	idade = anoAtual - anoNasc;
	
	printf("Idade:  %d \n", idade);
	
	if(idade >= 16){
		 printf("Pode votar! \n");
		
	}else{
		printf("Nao pode votar! \n");
		
	}
	
	
	system("pause");
	return 0;
}
