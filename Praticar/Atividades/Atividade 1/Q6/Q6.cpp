#include <stdio.h>
#include <stdlib.h>
int main(){
	float n1, n2, p1 = 6, p2 = 4, media;
	printf("Pograma que calcula valor da média ponderada");
	printf("\nValores ja definidos");
	
	printf("\n\nEntre com o valor da nota 1:");
	scanf("%f", &n1);
	
	printf("\nEntre com o valor da nota 2:");
	scanf("%f", &n2);
	
	media = ((n1*p1)+(n2*p2))/(p1+p2);
	
	printf("\nA media ponderada das notas equivale a: %f\n\n", media);
	
	
	
	
	
	
	
	
	system("PAUSE");
	return 0;
}
