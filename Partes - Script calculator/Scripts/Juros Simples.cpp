#include <stdio.h>
#include <stdlib.h>
int main(){
float Capital, Juros, tempo, taxa, montante;

printf("Entre com o valor do capital:");
scanf("%f", &Capital);

printf("\nInforme o tempo:");
scanf("%f", &tempo);
	
printf("\nEntre com a taxa convertida em relacao ao tempo:");
scanf("%f", &taxa);

Juros = (Capital * taxa * tempo)/100;

montante = Juros + Capital;
	
printf("\n\nO juros equivale ao valor de %f, com um montante de %f a ser pago\n\n ", Juros, montante);

system("PAUSE");
return 0;	
}
