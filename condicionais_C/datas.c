#include<stdio.h>

int main(){
	
	int data1[3];
	int data2[3];

	printf("Insira a primeira data com dia, mês e ano (4 dígitos) separadas por espaço: ");
	scanf("%d %d %d", &data1[0], &data1[1], &data1[2]);
	printf("Insira a segunda data com dia, mês e ano (4 dígitos) separadas por espaço: ");
	scanf("%d %d %d", &data2[0], &data2[1], &data2[2]);

	if(data1[2] > data2[2]) printf("A maior data é %d/%d/%d\n", data2[0], data2[1], data2[2]);
	else if(data1[2] < data2[2]) printf("A maior data é %d/%d/%d\n", data1[0], data1[1], data1[2]);
	else if (data1[1] > data2[1])printf("A maior data é %d/%d/%d\n", data2[0], data2[1], data2[2]);
	else if(data1[1] < data2[1]) printf("A maior data é %d/%d/%d\n", data1[0], data1[1], data1[2]);
	else if (data1[0] > data2[0])printf("A maior data é %d/%d/%d\n", data2[0], data2[1], data2[2]);
	else if(data1[0] < data2[0]) printf("A maior data é %d/%d/%d\n", data1[0], data1[1], data1[2]);
	else printf("As datas são iguais.\n");

}
