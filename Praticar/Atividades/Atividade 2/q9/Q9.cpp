#include <stdio.h>
#include <stdlib.h>
int main(){
	system("CLS");
	int Num, Suc;
	printf("Sucessor de um numero na sequencia entre 0 e 60:");
	
	printf("\n\nEntre com um numero:");
	scanf("%d", &Num);
	
	if(Num>60 || Num<0){ //Uso da condicional apenas para restringir as opcoes do usuario, ele pode apenas escolher numeros de 0 a 60, impedindo erros no codigo
		printf("\n\nERRO! Digite um numero entre 0 e 60\n\n");
		system("PAUSE");
		return main();
	}

	
	Suc = (Num+1)%61;
	
	printf("\nSucessor = %d\n\n", Suc);
	
	
	system("PAUSE");
	return 0;
}
