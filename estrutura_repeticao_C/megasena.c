#include<stdio.h>

int main(){

	int n[6];	
	int cont = 0;
	
	do{
		int aposta = cont+1;
		printf("Digite sua aposta para o %dº número: ",aposta);	
		scanf("%d", &n[cont]);
		if(n[cont]>=1 && n[cont]<=60) cont++;
		else printf("Digite um número válido!\n");	

	
	}while(cont!=6);
	cont=0;
	printf("Os números escolhidos foram: ");
	while(cont!=6){
		printf("%d ", n[cont]);
		cont++;
	}
	printf("\n");


}
