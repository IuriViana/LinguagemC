#include <stdio.h>
#include <stdlib.h>
int main(){
	int min, d, r1, h, m;
	
	printf("Programa conversor:");
	printf("\n\nEntre com a quantidade de minutos inteiros:");
	scanf("%d", &min);
	
	d = min/1440;
	r1 = min%1440;
	h = r1/60;
	m = r1%60;
	
	
	printf("\n%d minutos equivalem a:\n", min);
	printf("%d dias %d horas %d minutos\n\n",d, h, m);
	
	
	
	
	
	
	system("PAUSE");
	return 0;
}
