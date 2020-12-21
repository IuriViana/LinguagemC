#include <stdio.h>
#include <stdlib.h>

int main()
{
float QuantMer, ValorMer, i, t;

printf("Digite que quantidade de mercadoria:");
scanf("%f", &QuantMer);

printf("\n\nDigite o valor de cada mercadoria:");
scanf("%f", &ValorMer);

printf("\n\nDigite a taxa atual do imposto:");
scanf("%f", &i);

t = (QuantMer * ValorMer * i) + (QuantMer * ValorMer);

printf("\n\nO valor total a se pagar e: %f\n\n", t);

system("PAUSE");
return 0;
}
