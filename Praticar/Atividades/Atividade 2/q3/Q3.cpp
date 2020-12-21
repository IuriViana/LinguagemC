#include <stdio.h>
#include <stdlib.h>
int main(){
	float C, F;
	printf("Converter graus Celsius em Fahrenheit");
	
	printf("\n\nEntre com o valor de graus Celsius:");
	scanf("%f", &C);
	
	F = ((C/5)*9)+32;
	
	printf("\n\n%f graus Celsius equivalem a %f graus Fahrenheit\n\n", C, F);
	
	
	
	
	
	
	
	
	system("PAUSE");
	return 0;
}
