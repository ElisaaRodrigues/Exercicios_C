#include<stdio.h>

int retornaSobra(int n){
	int out;

	out = n%2;
	return out; 
	

}

int main(){
	int n, sobra;
	printf("Entre com o número: ");
	scanf("%d", &n);
	
	sobra = retornaSobra(n);
	if (sobra == 1) printf("Número é ímpar.\n");
	else printf("Número é par.\n");


}
