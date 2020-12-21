#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("cls");
	setlocale(LC_CTYPE, "Portuguese");
	int y, x;
	char ope;
	
	printf("Operadores válidos: +, -, * e /\n\n");
	
	printf("Entre com alguma operação: ");
	scanf("%d %c %d",&x,&ope,&y);

	switch(ope){
		case '+':
			printf("\n\nO resultado da operação %d%c%d é: %d\n\n", x,ope,y, x + y);
			break;
		case '-':
			printf("\n\nO resultado da operação %d%c%d é: %d\n\n", x,ope,y, x - y);
			break;
		case '*':
			printf("\n\nO resultado da operação %d%c%d é: %d\n\n", x,ope,y, x * y);
			break;
		case '/':
			if(y==0){
				printf("\n\nERROR! Impossivel dividir por 0!\n\n");
			}
			else{
			
			printf("\n\nO resultado da operação %d%c%d é: %d\n\n", x,ope,y, x / y);
		}
		break;
		default:
			printf("\n\nOperador %c invalido!\n\n", ope);
	}
	
	
	
	
	
	
	
	
	
	
	
	system("PAUSE");
	return main();
}
