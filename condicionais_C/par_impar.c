#include<stdio.h>

int main(){
	int num, resto;
	printf("Entre com o número: ");
	scanf("%i", &num);
	resto = num%2;

	if(resto==1) printf("O número inserido é ímpar.\n");
	else printf("O número inserido é par.\n");
	


}
