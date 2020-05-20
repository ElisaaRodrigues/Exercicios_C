#include<stdio.h>

int main(){
	int x, y;
	printf("Entre com os dois números desejados: ");
	scanf("%d %d", &x, &y);

	if(x == y) printf("Números inseridos são iguais.\n");
	else{
		int media = (x+y)/2;
		printf("Números inseridos são diferentes e a média deles é %d.\n", media);
	}

}
