#include<stdio.h>
#include<stdlib.h> //Biblioteca para comandos de sistema.
#include<locale.h> /*biblioteca que vai permitir acentua��o 
e n�meros flutuantes no formato de nossa l�ngua*/

int main(){
	system("cls");  //apaga tudo que tinha anteriormente
	setlocale(LC_ALL, "Portuguese");/*seta o locale, LC_ALL vai alterar 
	tudo para o formato de nossa l�ngua*/
	
	//C�DIGO QUE FIZ SEM QUERER, PERMITE IMPRIMIR S�MBOLOS ALT+NUMBER
	
	
	int y; //y vari�vel inteira
	printf("Gerador de caracteres especiais!\n\nEntre com um n�mero inteiro: ");
	scanf(" %d",&y);/*vai receber um valor do usu�rio, caso queiramos setar com um valor 
	j� especifico, teremos um s�mbolo espec�fico*/
	
	char x[5] = ""; //string x vazia;
	x[5]=y; //string x vai ter uma atribui��o de valor presente em y;
	
	printf("O caractere especial �: %c\n\n", x[5]); //dependendo desse valor, um caractere especial � impresso;
	
	system("PAUSE");
	return main(); //retorna para a fun��o principal
}
