#include <stdio.h>
#include <stdlib.h>
int main(){
	float pi =3.14, r, P, A;
	printf("Programa que calcula o perimetro da circunferencia e a area do circulo");
	printf("\nConsidere pi = 3.14");
	
	printf("\n\nEntre com o valor do raio:");
	scanf("%f", &r);
	
	P = 2*pi*r;
	A = pi*(r*r);
	
	printf("\n\nO perimetro da circunferencia equivale a %f\ne a area do circulo a %f\n\n", P, A);
	
	
	
	
	system("PAUSE");
	return 0;
}
