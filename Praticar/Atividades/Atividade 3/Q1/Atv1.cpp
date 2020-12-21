#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	printf("Entre com um número inteiro qualquer: ");
	
	int x;
	scanf("%d", &x);
	
	if(x%2==0){
		printf("\nO número %d é par, o dobro do mesmo é %d\n\n", x, 2*x);
	}
	else{
		printf("\nO número %d é impar, o quadrado do mesmo é: %d\n\n", x, x*x);
	}
	
	
	
	system("PAUSE");
	return 0;
}
