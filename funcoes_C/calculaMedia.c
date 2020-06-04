#include<stdio.h>

float calculaMedia(float n1, float n2){
	float out;
	out = (n1+n2)/2;
	return out;


}

int main(){

	float n1, n2, media;
	printf("Entre com os dois números: ");
	scanf("%f %f", &n1, &n2);
	media = calculaMedia(n1, n2);
	printf("A média é: %.2f\n", media);


}
