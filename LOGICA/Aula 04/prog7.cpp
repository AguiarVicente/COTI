#include<stdio.h>
#include<stdlib.h>
/*
Uma empresa quer verificar se um empregado está qualificado para a 
aposentadoria ou não. Para estar em condições, um dos seguintes 
requisitos deve ser satisfeito:

 - Ter no mínimo 65 anos de idade.
 - Ter trabalhado no mínimo 30 anos.
 - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
 
Com base nas informações acima, faça um algoritmo que leia: o ano de 
seu nascimento e o ano de seu ingresso na empresa. O programa deverá 
escrever a idade e o tempo de trabalho do empregado e a mensagem 
'Requerer aposentadoria' ou 'Não requerer'.

*/

int anoNasc;
int anoIngresso;

int main(){
	int idade = 0;
	int temptrab = 0;
	
	printf("DIgite o ano de nascimento : ");
	scanf("%d", &anoNasc);
	
	printf("DIgite o ano de Ingresso : ");
	scanf("%d", &anoIngresso);
	
	idade  = 2019 - anoNasc;
	temptrab = 2019 - anoIngresso;
	
	printf("Idade : %d \n", idade);
	printf("Tempo de trabalho : %d \n", temptrab);
	
	if(idade >= 65){
		printf("Pode Aposentar! \n");
		
	}else if(temptrab > 30){
		printf("Pode Aposentar! \n");
		
	}else if(idade >= 60 && temptrab >= 25){
		printf("Pode Aposentar! \n");
		
	}else{
		printf("Nao pode Aposentar! \n");
			
	}
	
	
	system("pause");	
	return 0;
}




