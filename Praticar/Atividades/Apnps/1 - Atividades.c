//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "portuguese");
	int op;
	system("cls");
	printf("\tATIVIDADE\n\n");
	printf("1 - Horas em dia\n2 - Converter moedas\n3 - Comissão do garçom\n4 - Preço da gasolina");
	printf("\n\nEscolha uma opção: ");
	op = getche();
	
	switch(op){
		//Atividade 01
		case '1':
			system("cls");
		
		int h;
		float dias;
		printf("CONVERTER HORAS EM DIAS\n\n");

		printf("Entre com a quantidade de horas: ");
		scanf("%d", &h);
		dias = h / 24.0;

		printf("\n\n%d horas equivalem a %.2f dias\n\n", h , dias);
	
			system("Pause");
			return main();
			break;
			
		//Atividade 02
		case '2':	
			system("cls");
		float r, d, e, l, p;
		d = 5.02, e = 5.37, l = 5.92, p = 0.079;
		
		printf("CONVERTER MOEDAS\n\n");
		
		printf("Entre com o valor em reais: ");
		scanf("%f", &r);
		d = r / d;
		e = r / e; 
		l = r / l; 
		p = r / p;
		
		printf("\n\n%.2f reais em:", r);
		printf("\n\n\ Doláres: %.2f\n\n Euros: %.2f\n\n Libras: %.2f\n\n Pesos: %.2f\n\n", d, e, l, p);
		
			system("Pause");
			return main();
			break;
			
		//Atividade 03
		case '3':
			system("cls");
		float valor, com, total;
		
		printf("COMISSÃO DO GARÇOM\n\n");
		
		printf("Entre com o valor da conta: ");
		scanf("%f", &valor);
	
		com = valor / 10;
		total = valor + com;
		
		printf("\n\nA comissão do garçom equivale a R$%.2f e o valor total para pagar R$%.2f\n\n", com, total);
		
			system("Pause");
			return main();
			break;
		
		//Atividade 04
		case '4':
			system("cls");
		float DtwoP, litros, Pgasolina, Ptotal;
	
		printf("Entre com a distância percorrida na viagem: ");
		scanf("%f", &DtwoP);

		printf("\nEntre com o preço da gasolina: ");
		scanf("%f", &Pgasolina);
	
		litros = DtwoP / 12;
	
		Ptotal = litros * Pgasolina;
	
		printf("\n\no carro consumiu %.2f litros de gasolina gastando R$%.2f\n\n", litros, Ptotal);
	
			system("PAUSE");
			return main();
			break;
	}
	system("PAUSE");
	return 0;
}
