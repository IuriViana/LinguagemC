#include <stdio.h>
#include <stdlib.h>
int main(){
	float R, D, E, L, P;
	
	printf("Programa que converte reais em outras moedas");
	printf("\n\nEntre com o valor equivalente em reais:");
	scanf("%f", &R);
	
	
	D = R/5.02;
	E = R/5.37;
	L = R/5.92;
	P = R/0.079;
	
	
	printf("\n\n%f reais equivalem a:", R);
	printf("\n\n%f dolares", D);
	printf("\n%f euros", E);
	printf("\n%f libras", L);
	printf("\n%f pesos\n\n", P);
	
	
	
	
	
	
	
	
	system("PAUSE");
	return 0;
}
