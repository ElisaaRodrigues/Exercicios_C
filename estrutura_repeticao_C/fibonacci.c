#include<stdio.h>

int main(){

	int n;
	printf("Digite a quantidade de números que devem ser mostrados: ");
	scanf("%d", &n);
	int Fn, Fn1, Fn2;
	Fn = 1;
	Fn2 = 1; 
	Fn1 = 1;	
	printf("%d", Fn);
	for(int i = 0; i <= n; i++){
				
		Fn = Fn1 +Fn2;
		Fn2 = Fn1;
		Fn1 = Fn;
		printf(" %d ", Fn);	

	}
	printf("\n");

}
