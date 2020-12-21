#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	system("Cls");
	printf("Programa convertor de medidas");

int op;
printf("\n\nSelecione uma opcao:");
printf("\n\n1 - Converter metros para quilometros\n2 - Converter quilometros para metros\n\n");
op = getch();
switch(op){
	
	case '1':
		float m, km;
		system("cls");
		printf("Entre com a quantidade de metros:");
		scanf("%f", &m);
		km = m/1000;
		printf("\n\n%f metros equivale a %f quilometros\n\n", m, km);
	break;
	case '2':
		system("cls");
		printf("Entre com a quantidade de quilometros:");
		scanf("%f", &km);
		m = km*1000;
		printf("\n\n%f quilometros equivale a %f metros\n\n", km, m);
	break;
	default:
		printf("\nOpcao invalida!\n\n");
		system("PAUSE");
		return main();
}
	
	
	
	
	
	system("PAUSE");
	return 0;
}
