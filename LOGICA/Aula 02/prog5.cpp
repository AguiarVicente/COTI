#include<stdio.h>
#include<stdlib.h>
/*
Escreva um algoritmo para ler o salário mensal atual de um funcionário 
e o percentual de reajuste. Calcular e escrever o 
valor do novo salário. 

*/

float salario;
float percentual;

int main(){
	
	float reajuste = 0;
	float salarionovo = 0;
	
	printf("Digite o salario  : ");
	scanf("%f", &salario);
	
	printf("Digite o percentual de reajuste  : ");
	scanf("%f", &percentual);
	
	reajuste = (percentual * salario) / 100;
	
	salarionovo = salario + reajuste;
	
	printf("Salario novo : %0.2f \n", salarionovo);
		
	system("pause");
	return 0;
}





