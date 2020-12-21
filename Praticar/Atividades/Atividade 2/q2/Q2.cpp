#include <stdio.h>
#include <stdlib.h>
int main(){
	float Gh, H, sal;
	
	printf("Entre com o dinheiro que ganhas por hora:");
	scanf("%f", &Gh);
	
	printf("\n\nEntre com a quantidade de horas trabalhadas pro mes:");
	scanf("%f", &H);
	
	sal = Gh*H;
	
	printf("\n\nSeu salario mensal equivale a %f reais\n\n", sal);
	
	
	
	
	system("PAUSE");
	return 0;
}
