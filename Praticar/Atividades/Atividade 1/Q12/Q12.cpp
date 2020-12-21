#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float A, B, C, Delta, r1, r2;
	system("CLS");
	printf("Programa que calcula equacao de segunda grau");
	
	printf("\n\nEntre com o valor de A:");
	scanf("%f", &A);
	
	printf("\nEntre com o valor de B:");
	scanf("%f", &B);
	
	printf("\nEntre com o valor de C:");
	scanf("%f", &C);
	
	Delta = (B*B)-4*A*C;
	
	if (Delta<0){
		
	printf("\n\nERRO! Delta menor que zero\n\n");
	system("PAUSE");
	return main();								
	}
	else{
		r1 = (-B + sqrt(Delta))/(2*A);
		r2 = (-B - sqrt(Delta))/(2*A);
		printf("\n\nAs raizes equivalem a %f e %f\n\n", r1, r2);		
	}
	
	
	system("PAUSE");
	return 0;
}
