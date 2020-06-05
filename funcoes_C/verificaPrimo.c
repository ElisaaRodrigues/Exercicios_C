#include<stdio.h>

int verificaPrimo(int n){
	int resultado = 0;
	
	for (int i = 2; i < n; i ++ ){
		if(n % i == 0) resultado++;
	}
	if (resultado == 0) return 0;
	else return 1;
}

int main(){

	int primo;
	int n;

	printf("Entre com o número: ");
	scanf("%d", &n);
	
	primo = verificaPrimo(n);
	
	if(primo==0) printf("%d é um número primo.\n", n);
	else printf("%d não é um número primo.\n", n);
	
}
