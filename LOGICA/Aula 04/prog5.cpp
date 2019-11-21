#include<stdio.h>
#include<stdlib.h>


int numero;

int main(){
	printf("Digite um numero : ");
	scanf("%d", &numero);
	
	if(numero < 0 || numero > 10){
		printf("Invalido! \n");
		
	}else{
		printf("Valido! \n");
		
	}
	
	system("pause");
	return 0;
}
