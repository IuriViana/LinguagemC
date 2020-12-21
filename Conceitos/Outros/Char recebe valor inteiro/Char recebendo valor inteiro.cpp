#include<stdio.h>
#include<stdlib.h> //Biblioteca para comandos de sistema.
#include<locale.h> /*biblioteca que vai permitir acentuação 
e números flutuantes no formato de nossa língua*/

int main(){
	system("cls");  //apaga tudo que tinha anteriormente
	setlocale(LC_ALL, "Portuguese");/*seta o locale, LC_ALL vai alterar 
	tudo para o formato de nossa língua*/
	
	//CÓDIGO QUE FIZ SEM QUERER, PERMITE IMPRIMIR SÍMBOLOS ALT+NUMBER
	
	
	int y; //y variável inteira
	printf("Gerador de caracteres especiais!\n\nEntre com um número inteiro: ");
	scanf(" %d",&y);/*vai receber um valor do usuário, caso queiramos setar com um valor 
	já especifico, teremos um símbolo específico*/
	
	char x[5] = ""; //string x vazia;
	x[5]=y; //string x vai ter uma atribuição de valor presente em y;
	
	printf("O caractere especial é: %c\n\n", x[5]); //dependendo desse valor, um caractere especial é impresso;
	
	system("PAUSE");
	return main(); //retorna para a função principal
}
