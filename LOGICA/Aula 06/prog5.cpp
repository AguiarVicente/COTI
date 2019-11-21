#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia o salario
de um funcionario.

A) Calcular um desconto de 12% referente aos
encargos.

B) Imprimir o novo salário.

*/

float salario;

void entrada(){
	printf("Digite o salario : ");
	scanf("%f", &salario);	
}

float calcularDesconto(){
	float desconto = 0;
	desconto = (salario * 12)/100;
	return desconto;	
}

float calcularSalarioNovo(){
	float salarionovo = 0;
	salarionovo = salario - calcularDesconto();
	return salarionovo;
}

void saida(){
	printf("O salario novo : %0.2f \n", calcularSalarioNovo());
}

int main(){
	entrada();
	saida();
	
	system("pause");
	return 0;	
}


