#include <stdio.h> //Biblioteca de entrada e sa�da.
#include <string.h> //Biblioteca de string, conjunto de caracteres -- comando strcmp.
#include <stdlib.h> //Biblioteca de sistema.

int main() // fun��o principal
{
char N[4], Name[] = "Iuri", Name2[] = "iuri"; //declara��o de vari�veis char.

printf("Digite o meu nome:"); //Imprime mensagem na tela.
scanf("%s", N); //defini��o de valor da vari�vel N em string.
 
if (strcmp(Name,N)==0) // strcmp compara duas strings, se forem iguais resulta em zero
{
printf("\nCorreto!\n\n");

printf("O meu nome e %s\n\n\n", N);
	
}
else{
	if(strcmp(Name2,N)==0){ //esquema para reconhecer mesmo se primeira letra for mai�scula ou min�scula.
	printf("\nCorreto!\n\n"); 

printf("O meu nome e %s\n\n\n", Name2);
		
		
	}

else{
	
printf("\n\nErrado!\n\n");
}
}
system("PAUSE");
return 0;
	
	
}
