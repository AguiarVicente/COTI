#include<stdio.h>
#include<stdlib.h>
/*
Ler dois valores e escrever o maior deles. 
(Considerear se os numeros forem iguais)


*/

int a;
int b;

int main(){
	
	printf("Digite um numero : ");
	scanf("%d", &a);
	
	printf("Digite um numero : ");
	scanf("%d", &b);
	
	if(a > b){
		printf("O primeiro e o maior! \n");
		
	}else if(b > a){
		printf("O segundo e o maior! \n");
		
		
	}else{
		printf("Os numeros sao iguais! \n");
		
		
	}
	
	system("pause");	
	return 0;
}



