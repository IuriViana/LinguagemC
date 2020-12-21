#include <stdio.h>
#include <stdlib.h>
int main(){
	float com, cont, t;
	printf("Programa que calcula a commisao de 10 porcento do garcom");
	
	printf("\n\nEntre com o valor da conta:");
	scanf("%f", &cont);
	
	com = (cont*10)/100;
	t = cont + com;
	
	printf("\n\nA comissao do garcom equivale a: %f\nValor total a ser pago: %f\n\n",com,t);
	
	
	
	
	
	system("PAUSE");
	return 0;
}
