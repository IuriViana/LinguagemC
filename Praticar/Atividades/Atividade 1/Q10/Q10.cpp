#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	system ("cls");
	printf("Programa convertor:");
	int op;
	printf("\nSelecione uma opcao:");
	printf("\n\n1 - Converter horas para dias\n2 - Converter dias para horas");
	
	op = getch();
	switch(op){
		
		case '1':
			system("cls");
			float H, D;
		    printf("Entre com a quantidade de horas:");
		    scanf("%f", &H);
		    
		    D = H/24;
		    
		    printf("\n%f horas equivalem a %f dias\n\n", H, D);
		    
		break;
		case '2':
			
			
			system("Cls");
			printf("Entre com a quantidade de dias:");
		    scanf("%f", &D);
		    
		    H = D*24;
		    
		    printf("\n%f dias equivalem a %f horas\n\n", D, H);
		
		break;
		default:
	
		
			
			printf("\n\nOpcao invalida!\n\n");
			system("PAUSE");
			return main();
			
		    
		    
		
		
		
	}
	
	
	
	
	
	
	
	
	system("PAUSE");
	return 0;
}
