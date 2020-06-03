#include<stdio.h>

int main(){

	char opcao;
	int n1, n2, out;
	do{
		printf("Digite a para soma, b para subtração ou q para sair: ");
		scanf(" %c", &opcao);
		
		switch(opcao){
	
			case 'a': 
				printf("Digite os dois números que deseja somar: ");
				scanf("%d %d", &n1, &n2);	
				out = n1+n2;
				printf("A soma é %d.\n",out );
				break;
			case 'b':
				printf("Digite os dois números que deseja subtrair: ");
				scanf("%d %d", &n1, &n2);	
				out = n1-n2;
				printf("A subtração é %d.\n",out );
				break;
			case 'q':
				printf("Saindo da calculadora!\n");
				break;
		}



	}while(opcao!='q');

}
