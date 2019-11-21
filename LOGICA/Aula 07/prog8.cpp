#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia os dados de um funcionario.
[Nome, cargo, salario]


A) Calcular um desconto de 10% referente ao inss.
B) Imprimir os dados e o novo salário do funcionario.

*/


struct Funcionario{
	char nome[20];
	float salario;
	char cargo[20];
	
};

struct Funcionario f;

void entrada(){
	printf("Digite o nome : ");
	scanf("%s", &f.nome);

	printf("Digite o cargo : ");
	scanf("%s", &f.cargo);

	printf("Digite o salario : ");
	scanf("%f", &f.salario);

}

float calcularDesconto(){
	float desconto = 0;
	desconto = (f.salario * 10)/100;	
	return desconto;	
}

float calcularNovoSalario(){
	float salarionovo = 0;
	salarionovo = f.salario - calcularDesconto();
	return salarionovo;
}

void saida(){
	printf("Funcionario %s de cargo %s  \n", f.nome,f.cargo);
	printf("Salario Inicial : %0.2f, Salario Final : %0.2f \n",
	f.salario, calcularNovoSalario());
}


int main(){
	entrada();
	saida();
	system("pause");
	return 0;
}













