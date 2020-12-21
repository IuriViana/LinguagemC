#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
system("cls");

printf("Realize o seu cadastro:\n\n");
char Login[20], Senha[20], Login2[20], Senha2[20];

printf("Defina seu Login e Senha:");
printf("\nObs: Proibido uso de caracteres especiais e espacos");


printf("\n\nLogin:");
scanf("%s", Login);

printf("\n\nSenha:");
scanf("%s", Senha);

printf("\n\nCadastro efetuado, realize agora o login em sua nova conta!\n\n");

system("PAUSE");

		system("cls");
		
		printf("Entre em sua conta:");
		
		printf("\n\nInforme os dados:");
		
		
		printf("\n\nLogin:");
		scanf("%s", Login2);
		
		printf("\n\nSenha:");
		scanf("%s", Senha2);
		
		
		if (strcmp(Login,Login2)==0 && strcmp(Senha,Senha2) ==0) 
		{
			printf("\n\nSeja bem vindo! %s\n\n", Login);
			
		}
		else{
			printf("\n\nAcesso negado!\n\n");
		}
		
	system("PAUSE");
return 0;
	
	
}





	
	
	
	
	

