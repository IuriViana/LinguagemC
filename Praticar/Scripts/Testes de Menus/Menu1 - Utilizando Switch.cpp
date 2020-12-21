#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int op;
	system("Cls");
	printf("Menu");
	
	printf("\n\n1 - Escolha1\n\n2 - Escolha2\n\n3 - Escolha3\n\n4 - Escolha4\n\n5 - Escolha5\n\n6 - Escolha6\n\n7 - Escolha7\n\n8 - Sair");
	op = getch();
	switch (op){
		case '1':
			
		   system("cls");
		   printf("tu fostes redirecionado para \"Escolha1\"\n\n");
		   system("PAUSE");
		   return main();
		
		case '2':
			
		   system("cls");
		   printf("tu fostes redirecionado para \"Escolha2\"\n\n");
		   system("PAUSE");
		   return main();
		
		case '3':
			
		   system("cls");
		   printf("tu fostes redirecionado para \"Escolha3\"\n\n");
		   system("PAUSE");
		   return main();
		   
		case '4':
			
		   system("cls");
		   printf("tu fostes redirecionado para \"Escolha4\"\n\n");
		   system("PAUSE");
		   return main();
		   
		case '5':
		   system("cls");
		   printf("tu fostes redirecionado para \"Escolha5\"\n\n");
		   system("PAUSE");
		   return main();
		
		case '6':
		   system("cls");
		   printf("tu fostes redirecionado para \"Escolha6\"\n\n");
		   system("PAUSE");
		   return main();
		
		
		case '7':
	       system("cls");
		   printf("tu fostes redirecionado para \"Escolha7\"\n\n");
		   system("PAUSE");
		   return main();
		   
		case '8':
			system("Cls");
			int op2;
			printf("Tu queres realmente sair?");
			
			printf("\n\n1 - Sim\n\n2 - nao\n\n");
			op2 = getch();
			switch (op2){
			
			case '1':
				system("PAUSE");
				return 0;
			
			case '2':
				
				return main();
			
			
			
			}
		   
		   
		   
		default:
			
			printf("\n\ninvalido!\n");
			return main();
			
	}
	
	
	
	
}
