#include<stdio.h>


void calculaFibonacci(int n){
	int Fn, Fn1, Fn2;
	Fn=1;
	Fn1=1;
	Fn2=1;
	
	printf("%d", Fn);
	for(int i = 0; i<n; i++){
		Fn = Fn1+Fn2;
		Fn2 = Fn1;
		Fn1 = Fn;
		printf(" %d", Fn);


	}
	printf("\n");

}

int main(){
	int n;
	printf("Informe a quantidade de números a serem mostrados em tela: ");
	scanf("%d", &n);
	calculaFibonacci(n);

}
