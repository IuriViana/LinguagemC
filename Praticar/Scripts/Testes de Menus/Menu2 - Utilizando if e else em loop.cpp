#include <stdio.h>
#include <stdlib.h>

int main(){
	system("cls");
	int op;
	printf("Menu");
	printf("\n\n1 - Escolha1\n2 - Escolha2\n3 - Escolha3\n4 - Escolha4\n5 - Escolha5\n6 - Escolha6\n7 - Escolha7\n8 - Escolha8\n9 - Escolha9\n10 - sair");
	
	printf ("\n\nDigite o que queres escolher:");
	scanf("%d", &op);
	
	if(op==1){
	    system("cls");
		printf("tu fostes redirecionado para \"Escolha1\"\n\n");
		system("PAUSE");
		return main();
	}
	
	else {
	if (op==2){
	
	system("cls");
	printf("tu fostes redirecionado para \"Escolha2\"\n\n");
	system("PAUSE");
	return main();
	
	
	}
    else{
    if(op ==3){
    system("cls");
	printf("tu fostes redirecionado para \"Escolha3\"\n\n");
	system("PAUSE");
	return main();
    	
    	
	}	
    else{
    if (op ==4){
    system("cls");
	printf("tu fostes redirecionado para \"Escolha4\"\n\n");
	system("PAUSE");
	return main();
    		
	}
    else{
    if (op ==5){
    system("cls");
    printf("tu fostes redirecionado para \"Escolha5\"\n\n");
	system("PAUSE");
	return main();	
	}
    else{
    if(op==6){
    system("cls");
	printf("tu fostes redirecionado para \"Escolha6\"\n\n");
	system("PAUSE");
	return main();	
		}
	else{
	if(op==7){
	
	system("cls");
	printf("tu fostes redirecionado para \"Escolha7\"\n\n");
	system("PAUSE");
	return main();
}
    else{
    if(op==8){
    	system("cls");
		printf("tu fostes redirecionado para \"Escolha8\"\n\n");
		system("PAUSE");
		return main();
    	}
    else{
    if(op==9){
    	system("cls");
		printf("tu fostes redirecionado para \"Escolha9\"\n\n");
		system("PAUSE");
		return main();
    	}
    else{
    if(op==10){
    int op2;
    system ("cls");
    printf("Tu pedistes para sair, tem certeza?");
    printf("\n\n1 - Sim\n\n2 - Nao");
    
    printf("\n\nDigite o que queres escolher:");
    scanf("%d", &op2);
    
    if(op2==1){
    return 0;
	}
	else{
	if (op2==2){
	system("PAUSE");
	return main();
	}
	}   
	}	    	   	   	   	
	}
	}
	}	
    }
	}  	  	
	}		
	}		
	}		
    }
    if(op>10){
     printf("\n\nInvalido!\n\n");
     system("PAUSE");
     return main();
	}   
	}	  				
