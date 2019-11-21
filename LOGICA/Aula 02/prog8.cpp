#include<stdio.h>
#include<stdlib.h>
/*
Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, 
calcular e escrever o valor correspondente em graus 
Celsius (baseado na fórmula abaixo):

 		C 		F - 32
 ---------- = -----------
 		5 			9

*/

float fah;

int main(){
	float c = 0;
	
	printf("Digite a temperatura em fahrenheit : ");
	scanf("%f", &fah);
	
	c  =  (fah - 32)/ 9 * 5;
	
	printf("Temperatura em c : %0.2f \n", c);	
	
	system("pause");
	return 0;
}
