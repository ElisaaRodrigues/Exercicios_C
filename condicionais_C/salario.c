#include<stdio.h>

int main(){
	int plano;
	float salario, new_salario;
	
	printf("Insira seu plano de trabalho:\n1 para CAT A\n2 para CAT B\n3 para CAT C: ");
	scanf("%i", &plano);

	switch(plano){
		case 1: 
			printf("Insira seu salario atual com apenas digitos: ");
			scanf("%f", &salario);
			new_salario = salario + ((salario*10)/100);
			printf("Seu novo salário será: R$%.2f\n", new_salario);
			break;
		case 2: 
			printf("Insira seu salario atual com apenas digitos: ");
			scanf("%f", &salario);
			new_salario = salario + ((salario*15)/100);
			printf("Seu novo salário será: R$%.2f\n", new_salario);
			break;
		case 3:
			printf("Insira seu salario atual com apenas digitos: ");
			scanf("%f", &salario);
			new_salario = salario + ((salario*20)/100);
			printf("Seu novo salário será: R$%.2f\n", new_salario);
			break;
		default:
			printf("Opção inválida!\n");
	}
	
}

