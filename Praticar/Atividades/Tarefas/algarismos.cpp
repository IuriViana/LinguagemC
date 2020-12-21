#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	int n, c, cresto, d, dresto, u,soma;
	
	system("CLS");
	setlocale(LC_CTYPE,"portuguese");
	
	printf("Calcular a soma dos algarismos de um número com 3 algarismos:");
	
	printf("\n\nEntre com o número:");
	scanf("%d",&n);
	
	if(n>999||n<100){
		printf("\n\nNúmero inválido!!\n\n");
		system("PAUSE");
		return main();
	}
	else{
		
		c = n/100;
		cresto = n%100;
		
		d = cresto/10;
		dresto = cresto%10;
		
		
		soma = c + d + dresto;
		
		
		printf("\nA soma dos algarismo equivale à %d\n\n",soma);
		
	}
	
	system("PAUSE");
	return 0;
}
