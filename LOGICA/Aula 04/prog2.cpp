#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia o salario e o
numero de filhos de um funcionário.

A)O programa devera calcular um bonus de 10% se o valor
do salário for menor que 1000 e numero de filhos maior que 2.

B) Imprimir o novo valor do salario encontrado.

*/

float salario;
int nfilhos;

int main(){
	
	float bonus = 0;
	float salarionovo = 0;
	
	printf("Digite o salario  : ");
	scanf("%f", &salario);
	
	printf("Digite o numero de filhos  : ");
	scanf("%d", &nfilhos);
	
	if(salario < 1000){

		/*
		IF ANINHADO OU INTERNO -> 2C
		*/
		
		if(nfilhos > 2){
			bonus = (salario * 10)/ 100;			
		}
		
	}
	
	salarionovo = salario + bonus;
	printf("Salario novo : %0.2f \n", salarionovo);
	
	
	system("pause");
	return 0;
}
