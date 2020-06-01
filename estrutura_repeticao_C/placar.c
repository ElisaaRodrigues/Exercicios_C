#include<stdio.h>

int main(){
	char opcao;
	int PlacarA = 0, PlacarB = 0;
	int i = 0;
	
	do{
		printf("Entre com \nA para marcar ponto para Equipe A\nB para marcar ponto para Equipe B\nF para encerrar e mostrar placar: ");
		scanf("%c", &opcao);
		printf("\n");
		switch(opcao){
			case 'A': PlacarA++; break;
			case 'B': PlacarB++; break;
			case 'F': i=1; break;
		}
		
	}while(i!=1);
	printf("Placar final: \nEquipe A: %d pontos\nEquipe B: %d pontos\n", PlacarA, PlacarB);

}
