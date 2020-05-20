#include<stdio.h>

int main(){
	double num1, num2, out;
	int opcao;

	printf("Entre com os dois numeros reais: ");
	scanf("%lf %lf", &num1, &num2);
	printf("Opcao 1 soma, 2 subtrai, 3 multiplica, 4 divide: ");
	scanf("%i", &opcao);

	if(opcao == 1){
		out = num1+num2;
		printf("A soma é: %lf\n", out);
	}
	else if(opcao == 2){
		out = num1-num2;
		printf("A subtracao é: %lf\n", out);
	}
	else if(opcao == 3){
		out = num1*num2;
		printf("A multiplicação é: %lf\n", out);
	}
	else if(opcao == 4){
		if(num1/num2){
			out = num1/num2;
			printf("A divisão é: %lf\n", out);		
		}else printf("A divisão não é realizável.\n");
	
	}else printf("Opcao inválida!\n");
}
