#include<stdio.h>

int main(){
//Fibonacci numbers: F(n) = F(n-1) + F(n-2) with F(0) = 0 and F(1) = 1.

	int n;
	printf("Digite a quantidade de números que devem ser mostrados: ");
	scanf("%d", &n);
	printf("0 ");
	int Fn, Fn1, Fn2;
	Fn1 = 0;
	Fn2, Fn = 1;	

	for(int i = 0; i <= n; i++){
				
		printf("%d ", Fn);
		Fn1 = Fn2;	
		Fn2 = Fn1+Fn2;
		Fn = Fn2;
				

	}
	printf("\n");

}
