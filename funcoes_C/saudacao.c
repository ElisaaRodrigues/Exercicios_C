#include<stdio.h>

void saudacao(int i){
	switch(i){
		case 1: printf("Bem vindo ao programa!\n"); break;
		case 2: printf("Programa finalizado!\n"); break;
	}

}

int main(){
	int opcao;
	printf("Entre com o parâmetro 1  ou 2: ");
	scanf("%d", &opcao);
	saudacao(opcao);

}
