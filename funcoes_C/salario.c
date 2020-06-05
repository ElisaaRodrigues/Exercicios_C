#include<stdio.h>

float calculaSalario(float salario, float aumento){

	return (salario + salario*aumento);

}

int main(){
	float salario, newSalario;
	int planoTrab;
	
	printf("Entre com seu plano de trabalho atual: \n-->1 para CAT A\n-->2 para CAT B\n-->3 para CAT C\nDigite: ");
	scanf("%d",&planoTrab);
	printf("OK! Agora entre com seu salario: ");
	scanf("%f", &salario);

	switch(planoTrab){
		case 1: newSalario = calculaSalario(salario, 0.1); break;
		case 2: newSalario = calculaSalario(salario, 0.15); break;
		case 3: newSalario = calculaSalario(salario, 0.2); break;

	}
	
	printf("Seu novo salário será R$%.2f.\n", newSalario);


}
