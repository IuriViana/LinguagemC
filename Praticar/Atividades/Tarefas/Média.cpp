#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
	setlocale(LC_CTYPE, "portuguese");
	float n1,n2,n3,n4,n5,n6, M;
	
	printf("Média Harmônica entre 6 números:  ");
	
	printf("\n\nEntre com as 6 notas:");
	scanf("%f%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5,&n6);


	M = 6/(1/n1+1/n2+1/n3+1/n4+1/n5+1/n6);
	
	printf("\nA média harmônica entre as 6 notas é: %.2f\n\n", M);

	

	system("PAUSE");
	return 0;
}
