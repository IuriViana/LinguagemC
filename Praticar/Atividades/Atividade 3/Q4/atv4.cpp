#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("cls");
	setlocale(LC_CTYPE, "Portuguese");
	float valor;
	printf("intervalos: [0,20] [20,40] [40,70] [70,100]\n\n");
	printf("Entre com um valor e iremos setá-lo em um desses intervalos: ");
	scanf("%f",&valor);
	
	if(valor>=0&& valor <= 20){
		printf("\n\nValor encontrado entre o intervalo [0,20]\n\n");
	}
	else if(valor>20 && valor <=40){
		printf("\n\nValor encontrado entre o intervalo [20,40]\n\n");
	}	
	else if(valor>40 && valor<=70){
		printf("\n\nValor encontrado entre o intervalo [40,70]\n\n");
	}
	else if(valor>70 && valor<=100){
		printf("\n\nValor encontrado entre o intervalo [70,100]\n\n");
	}
	else{
		printf("\nFORA!\n\n");
	}
		
	
	system("PAUSE");
	return main();
}
