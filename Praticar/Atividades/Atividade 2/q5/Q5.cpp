#include <stdio.h>
#include <stdlib.h>
int main(){
	float pt, pi, pd, car, peri, perd;
	
	printf("Entre com o preco de fabrica do carro em reais:");
	scanf("%f", &car);
	
	printf("\nEntre com o percentual de lucro do distribuidor:");
	scanf("%f", &perd);
	
	printf("\nEntre com o percentual de imposto:");
	scanf("%f", &peri);
	
	
	pd = car*perd/100;
	pi = car*peri/100;
	pt = car + pi + pd;
	
	printf("\n\nO lucro do distribuidor equivale a: %f reais\nO imposto equivale a:%f reais\nE o valor total a se pagar equivale a %f reais\n\n", pd, pi, pt);
	
	
	
	
	
	
	
	system("PAUSE");
	return 0;
}
