#include <stdio.h>
#include <stdlib.h>
int main(){
	float kmt, pre, g,t;
	
	printf("Informe com a quantidade de quilometros entre dois pontos:");
	scanf("%f", &kmt);
	
	printf("\nEntre com o preco da gasolina:");
	scanf("%f", &pre);
	
	g = kmt/12;
	
	t = g*pre;
	
	printf("\n\nO carro consumira %f litros de gasolina\nValor total a pagar de %f reais\n\n", g, t);
	
	

	system("PAUSE");
	return 0;
}
