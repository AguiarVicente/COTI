#include<stdio.h>
#include<stdlib.h>
/*

Operadores aritm�ticos
/ -> divis�o
% -> retorna o resto de uma divis�o.

10 / 2  = 5
10 % 2 = 0
 

*/

int main(){
	
	int numero = 10;
	int div = numero / 2;
	printf("Divisao de 10 por 2  : %d \n", div);
	
	int resto = numero % 2;
	printf("Resto da divisao de 10 por 2 : %d \n", resto);		
	
	system("pause");
	return 0;
}
