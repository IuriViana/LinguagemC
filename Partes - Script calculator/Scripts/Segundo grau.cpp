#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
system("Cls");
float a, b, c, Delta, r1, r2;

printf("Digite o valor de A:");
scanf("%f", &a);

printf("\n\nDigite o valor de B:");
scanf("%f", &b);
	
printf("\n\nDigite o valor de C:");
scanf("%f", &c);

Delta = (b*b) - 4*a*c;
		
printf("\nValor de delta igual a: %f", Delta);

if (Delta<0){
	printf("\n\nError! Delta menor que zero\n\n");
	system("PAUSE");
	return main();
		
}	

else{
r1 =((-b) + sqrt(Delta))/2*a;
r2 =((-b) - sqrt(Delta))/2*a;

printf("\n\nAs raizes equivalem a %f e %f\n\n", r1, r2);
	

	
}
system("PAUSE");
return 0;
	
}
