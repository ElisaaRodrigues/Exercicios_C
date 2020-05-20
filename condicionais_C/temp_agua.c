#include<stdio.h>

int main(){
	double temperatura;
	printf("Entre com a temperatura da água em graus: ");
	scanf("%lf", &temperatura);
		
	if(temperatura<25) printf("Água fria.\n");
	else if((temperatura >= 25) && (temperatura <= 30)) printf("Água morna.\n");
	else printf("Água quente.\n");


}
