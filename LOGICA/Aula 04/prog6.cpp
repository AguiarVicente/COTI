#include<stdio.h>
#include<stdlib.h>

/*
Ler 3 valores (A, B e C) representando as medidas dos lados 
de um tri�ngulo e escrever se formam ou n�o um tri�ngulo. OBS: para 
formar um tri�ngulo, o valor de cada lado deve ser menor que a soma
dos outros 2 lados. 

A) Classificar o triangulo em rela��o ao lado em: Equilatero,
Isosceles e Escaleno.


*/

float a;
float b;
float c;

int main(){
	
	printf("Digite o lado : ");
	scanf("%f", &a);
	
	printf("Digite o lado : ");
	scanf("%f", &b);
	
	printf("Digite o lado : ");
	scanf("%f", &c);
	
	if(a < (b + c) && b < (a + c) && c <(a + b)){
		printf("Formam um triangulo! \n");
		
		if(a == b && a == c){
			printf("Equilatero! \n");
			
		}else if(a != b && a != c && b != c){
			printf("Escaleno! \n");
			
		}else{
			printf("Isosceles! \n");
			
		}
		
	}else{
		printf("Nao formam um triangulo! \n");
		
		
	}
	
	
	system("pause");
	return 0;
}
