#include <stdio.h>
#include <stdlib.h>
int main(){
	float h, kg, imc;
	printf("Programa que calcula IMC do usuario");
	printf("\n\nEntre com sua altura em metros: ");
	scanf("%f", &h);
	printf("\nEntre com seu peso em quilogramas: ");
	scanf("%f", &kg);
	
	imc = kg/(h*h);
	
	printf("\n\nSeu IMC equivale a: %f\n\n", imc);
	
	system("PAUSE");
	
	return 0;
}
