#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


//Verificador se um n�mero � inteiro ou float, utilizando cast para converter medidas.
int main(){
	system("cls");
	setlocale(LC_CTYPE, "Portuguese"); /*Pelo visto utilizando isso modifica 
somente acentua��o valores de pontos flutuantes continuam com . Anteriormente com LC_ALL modificava tudo*/


	float valor; //v�riavel flutuante identificador valor
	
	printf("Entre com algum valor: ");
scanf("%f",&valor);//entrando com valor para valor

if(valor==(int)valor){ //se valor == valor de valor convertido para inteiro
	printf("\nO valor digitado � um inteiro %d\n\n", (int)valor); //� inteiro
}
else{ //sen�o
	printf("\nO valor digitado � um ponto flutuante %f\n\n", valor);//� um valor de ponto flutuante;
}
	
	
	system("PAUSE");
	return main();
}
