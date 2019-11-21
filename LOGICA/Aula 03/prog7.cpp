#include<stdio.h>
#include<stdlib.h>
/*
A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário 
que trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor 
da hora regular com um acréscimo de 50%. Escreva um algoritmo que 
leia o número de horas trabalhadas em um mês, o salário por hora e 
escreva o salário total do funcionário, que deverá ser acrescido das 
horas extras, caso tenham sido trabalhadas
(considere que o mês possua 4 semanas exatas). 


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
