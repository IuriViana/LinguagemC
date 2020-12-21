#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_CTYPE, "Portuguese");
	float X, Y, X2, Y2, D;
	
	printf("Deistância entre dois pontos de um plano cartesiano");
	
	printf("\n\n\nEntre com o valor X do primeiro ponto: ");
	scanf("%f",&X);
	printf("\nAgora entre com o valor Y correspondente ao X do primeiro ponto: ");
	scanf("%f",&Y);
	
	printf("\nEntre com o valor X do segundo ponto: ");
	scanf("%f",&X2);
	
	printf("\nAgora entre com o valor Y correspondente ao X do segundo ponto: ");
	scanf("%f",&Y2);
	
	D = sqrt(pow(X-X2,2)+pow(Y-Y2,2));
	
	printf("\n\nA distância entre os pontos: (%.2f,%.2f) e (%.2f,%.2f) é de: %.2f\n\n",X,Y,X2,Y2,D);
	
	
	
	
	system("PAUSE");
	return 0;
}
