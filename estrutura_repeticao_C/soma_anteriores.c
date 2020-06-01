#include<stdio.h>

int main(){

	int num, soma, x;
	printf("Entre com número desejado: ");
	scanf("%i", &num);
	soma = 0;
	x = 0;
	/*	
	while(x <= num){
		soma = soma+x;
		x++;	

	}
	printf("A soma de todos os número anteriores é: %d\n", soma);
	*/

	for(x=0; x<= num; x++){
		soma = soma+x;
	}
	printf("A soma de todos os número anteriores é: %d\n", soma);
}
