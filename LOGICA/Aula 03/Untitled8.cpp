#include<stdio.h>
#include<stdlib.h>
/*
Ler o sal�rio fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. 
Sabendo-se que ele recebe uma comiss�o de 3% sobre o total das vendas at� R$ 1.500,00 
mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu sal�rio total.

*/

float salariofixo;
float valorvendas;

int main(){
	
	float salariofinal = 0;
	float bonus = 0;
	
	printf("Digite o salario fixo : ");
	scanf("%f", &salariofixo);
	
	printf("Digite o valorvendas : ");
	scanf("%f", &valorvendas);
	
	if(valorvendas <= 1500){
		 bonus = (valorvendas * 3)/100;
		
	}else{
		bonus = (1500 * 3)/ 100 + (((valorvendas - 1500) * 5)/100);
		
	}
	
	salariofinal = salariofixo + bonus;
	printf("Salario final : %0.2f \n", salariofinal);
	
	
	system("pause");
	return 0;
}
