#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float Capital, Juros, Montante, tempo, taxa;

printf("Entre com o capital:");
scanf("%f", &Capital);

printf("\n\nEntre com o tempo:");
scanf("%f", &tempo);

printf("\n\nEntre com a taxa convertida em relacao ao tempo:");
scanf("%f", &taxa);


Montante = Capital * (pow(1 + taxa/100, tempo));

printf("\n\n%f", Montante);
	
system("PAUSE");
return 0;

}
