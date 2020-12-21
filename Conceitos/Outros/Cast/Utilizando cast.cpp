#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


//Verificador se um número é inteiro ou float, utilizando cast para converter medidas.
int main(){
	system("cls");
	setlocale(LC_CTYPE, "Portuguese"); /*Pelo visto utilizando isso modifica 
somente acentuação valores de pontos flutuantes continuam com . Anteriormente com LC_ALL modificava tudo*/


	float valor; //váriavel flutuante identificador valor
	
	printf("Entre com algum valor: ");
scanf("%f",&valor);//entrando com valor para valor

if(valor==(int)valor){ //se valor == valor de valor convertido para inteiro
	printf("\nO valor digitado é um inteiro %d\n\n", (int)valor); //É inteiro
}
else{ //senão
	printf("\nO valor digitado é um ponto flutuante %f\n\n", valor);//É um valor de ponto flutuante;
}
	
	
	system("PAUSE");
	return main();
}
