#include <stdio.h>
#include <stdlib.h>
int main(){
	int H, D, D2;
	
	printf("Entre com a quantidade de horas:");
	scanf("%d", &H);
	
	D2 = H/24;
	D = H%24;
	
	printf("\n%d horas equivale a %d dias e %d horas\n\n", H, D2, D);
	
	
	
	
	
	
	
	system("PAUSE");
	return 0;
}
