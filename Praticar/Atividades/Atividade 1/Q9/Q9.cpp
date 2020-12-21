#include <stdio.h>
#include <stdlib.h>
int main(){
	float com, cont, p, t;
	
	printf("Programa que calcula a comissao de um garcon definida por um usuario");
	
	printf("\n\nEntre com o valor da conta:");
	scanf("%f", &cont);
	
	printf("\nEntre com a porcentagem da comissao:");
	scanf("%f", &p);
	
	com = (cont*p)/100;
	
	t = cont + com;
	
	printf("\nO valor da comissao do garcom equivale a %f\nValor total a ser pago de: %f\n\n", com, t);
	
	
	
	
	
	system("PAUSE");
	return 0;
}
