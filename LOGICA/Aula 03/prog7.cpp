#include<stdio.h>
#include<stdlib.h>
/*
A jornada de trabalho semanal de um funcion�rio � de 40 horas. O funcion�rio 
que trabalhar mais de 40 horas receber� hora extra, cujo c�lculo � o valor 
da hora regular com um acr�scimo de 50%. Escreva um algoritmo que 
leia o n�mero de horas trabalhadas em um m�s, o sal�rio por hora e 
escreva o sal�rio total do funcion�rio, que dever� ser acrescido das 
horas extras, caso tenham sido trabalhadas
(considere que o m�s possua 4 semanas exatas). 


*/

float valorhora;
int nhora;

int main(){
	
	float salario = 0;
	
	printf("Digite o valor da hora : ");
	scanf("%f", &valorhora);
	
	printf("Digite o numero de horas trabalhadas : ");
	scanf("%d", &nhora);
	
	if(nhora <= 160){
		salario = (valorhora * nhora);	
		
	}else{
		salario = (160 * valorhora) +  ((nhora - 160) * (valorhora * 1.5));
		
	}
	printf("Salario  : %0.2f \n", salario);
	
	
	system("pause");
	return 0;
}
