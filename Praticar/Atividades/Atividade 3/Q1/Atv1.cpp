#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	printf("Entre com um n�mero inteiro qualquer: ");
	
	int x;
	scanf("%d", &x);
	
	if(x%2==0){
		printf("\nO n�mero %d � par, o dobro do mesmo � %d\n\n", x, 2*x);
	}
	else{
		printf("\nO n�mero %d � impar, o quadrado do mesmo �: %d\n\n", x, x*x);
	}
	
	
	
	system("PAUSE");
	return 0;
}
