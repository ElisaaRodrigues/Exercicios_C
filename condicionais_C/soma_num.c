#include<stdio.h>

int main(){
	int n1, n2, n3, n4;
	printf("Insira os 4 números desejados: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	int soma1, soma2;
	soma1 = n1+n2;
	soma2 = n3+n4;

	if(soma1 <= soma2){
		if(soma1<soma2) printf("A soma dos dois primeiros é menor.\n");
		else printf("As somas dos números são iguais.\n");	
	}
	else printf("A soma dos dois primeiros numeros é maior.\n");



}
