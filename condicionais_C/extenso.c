#include<stdio.h>

int main(){
	int num;
	printf("Entre com um número de 0 a 10: ");
	scanf("%i", &num);

	switch(num){
		case 0: printf("O número digitado por extenso é zero\n"); break;
		case 1: printf("O número digitado por extenso é um \n"); break;
		case 2: printf("O número digitado por extenso é dois\n"); break;
		case 3: printf("O número digitado por extenso é três \n"); break;
		case 4: printf("O número digitado por extenso é quatro\n"); break;
		case 5: printf("O número digitado por extenso é cinco \n"); break;
		case 6: printf("O número digitado por extenso é seis\n"); break;
		case 7: printf("O número digitado por extenso é sete \n"); break;
		case 8: printf("O número digitado por extenso é oito\n"); break;
		case 9: printf("O número digitado por extenso é nove\n"); break;
		case 10: printf("O número digitado por extenso é dez\n"); break;
		default: printf("Opção inválida\n");

	}

}
