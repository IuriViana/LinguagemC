#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main(){
	int op;
	system("CLS");
	printf("MENU\n\n");
	printf("2  - Questao 2\n3  - Questao 3\n4  - Questao 4\n5  - Questao 5\n6  - Questao 6\n7  - Questao 7\n8  - Questao 8\n9  - Questao 9\n10 - Questao 10\n11 - Questao 11\n12 - Questao 12\n13 - Questao 13\n14 - Sair");
	
	printf("\n\nSelecione uma opcao:");
	scanf("%d", &op);
	
	if(op == 2){
		system("CLS");
		float a = 1.5, b = 4, c = 2, d = 3, e = 1.2, f = 4.3, e1, e2, e3, e4, delta;

		delta = (b*b)-4*a*c;
		e1 = (a*(c+d))/(b*(e+f));
		e2 =a+((c+d)*(c+d))/(b*b)*d*(1/c);
		e3 = (a*a*a*a*a*a)/(e+f)+d;
		e4 = (-b + sqrt(delta))/2;

		printf("As respostas para as expressoes sao respectivamente:");
		printf("\n\n%f %f %f %f\n\n", e1, e2, e3, e4);
		system("PAUSE");
		return main();	
	}
	else{
	if(op==3){
	system("cls");
	int op2;
	printf("\n\nSelecione uma opcao:");
	printf("\n\n1 - Converter metros para quilometros\n2 - Converter quilometros para metros\n\n");
	op2 = getch();
	switch(op2){
	
	case '1':
		float m, km;
		system("cls");
		printf("Entre com a quantidade de metros:");
		scanf("%f", &m);
		km = m/1000;
		printf("\n\n%f metros equivale a %f quilometros\n\n", m, km);
		system("PAUSE");
		return main();
	break;
	case '2':
		system("cls");
		printf("Entre com a quantidade de quilometros:");
		scanf("%f", &km);
		m = km*1000;
		printf("\n\n%f quilometros equivale a %f metros\n\n", km, m);
		system("PAUSE");
		return main();
	break;
	default:
		printf("\nOpcao invalida!\n\n");
		system("PAUSE");
		return main();
	
	}
	}
	else{
	if(op==4){
		system("CLS");
			float h, kg, imc;
	printf("Programa que calcula IMC do usuario");
	printf("\n\nEntre com sua altura em metros: ");
	scanf("%f", &h);
	printf("\nEntre com seu peso em quilogramas: ");
	scanf("%f", &kg);
	
	imc = kg/(h*h);
	
	printf("\n\nSeu IMC equivale a: %f\n\n", imc);
	
	system("PAUSE");
	
	return main();
	}
	else{
	if(op==5){
		system("cls");
		float pi =3.14, r, P, A;
	printf("Programa que calcula o perimetro da circunferencia e a area do circulo");
	printf("\nConsidere pi = 3.14");
	
	printf("\n\nEntre com o valor do raio:");
	scanf("%f", &r);
	
	P = 2*pi*r;
	A = pi*(r*r);
	
	printf("\n\nO perimetro da circunferencia equivale a %f\ne a area do circulo a %f\n\n", P, A);
	
	
	
	
	system("PAUSE");
	return main();	
	}
	else{
	if(op==6){
	system("CLS");
		float n1, n2, p1 = 6, p2 = 4, media;
	printf("Pograma que calcula valor da média ponderada");
	printf("\nValores ja definidos");
	
	printf("\n\nEntre com o valor da nota 1:");
	scanf("%f", &n1);
	
	printf("\nEntre com o valor da nota 2:");
	scanf("%f", &n2);
	
	media = ((n1*p1)+(n2*p2))/(p1+p2);
	
	printf("\nA media ponderada das notas equivale a: %f\n\n", media);
		
	system("PAUSE");
	return main();		
	}
	else{
	if(op==7){
	system("CLS");
	float n1,n2,p1,p2, media;
	printf("Programa que calcula a media ponderada entre duas notas");
	printf("\n\nEntre com o valor da nota 1:");
    scanf("%f", &n1);
    
   	printf("\nEntre com o peso da nota 1:");
    scanf("%f", &p1);
    
    printf("\nEntre com o valor da nota 2:");
    scanf("%f", &n2);
    
    printf("\nEntre com o peso da nota 2:");
    scanf("%f", &p2);
    
    media = ((n1*p1)+(n2*p2))/(p1+p2);
    
    printf("\nA media ponderada das notas equivale a: %f\n\n",media);
	system("PAUSE");
	return main();	
	}
	else{
	if(op==8){
	system("CLS");
		float com, cont, t;
	printf("Programa que calcula a commisao de 10 porcento do garcom");
	
	printf("\n\nEntre com o valor da conta:");
	scanf("%f", &cont);
	
	com = (cont*10)/100;
	t = cont + com;
	
	printf("\n\nA comissao do garcom equivale a: %f\nValor total a ser pago: %f\n\n",com,t);
	
	system("PAUSE");
	return main();		
	}
	else{
	if(op==9){
	system("CLS");
	float com, cont, p, t;
	
	printf("Programa que calcula a comissao de um garcon definida por um usuario");
	
	printf("\n\nEntre com o valor da conta:");
	scanf("%f", &cont);
	
	printf("\nEntre com a porcentagem da comissao:");
	scanf("%f", &p);
	
	com = (cont*p)/100;
	
	t = cont + com;
	
	printf("\nO valor da comissao do garcom equivale a %f\nValor total a ser pago de: %f\n\n", com, t);
	system("PAUSE");
	return main();		
	}
	else{
	if(op==10){
		system ("cls");
	printf("Programa convertor:");
	int op3;
	printf("\nSelecione uma opcao:");
	printf("\n\n1 - Converter horas para dias\n2 - Converter dias para horas");
	
	op3 = getch();
	switch(op3){
		
		case '1':
			system("cls");
			float H, D;
		    printf("Entre com a quantidade de horas:");
		    scanf("%f", &H);
		    
		    D = H/24;
		    
		    printf("\n%f horas equivalem a %f dias\n\n", H, D);
		    system("PAUSE");
			return main();
		    
		break;
		case '2':
			
			
			system("Cls");
			printf("Entre com a quantidade de dias:");
		    scanf("%f", &D);
		    
		    H = D*24;
		    
		    printf("\n%f dias equivalem a %f horas\n\n", D, H);
		    system("PAUSE");
			return main();
		
		break;
		default:
	
		
			
			printf("\n\nOpcao invalida!\n\n");
			system("PAUSE");
			return main();
		
	}
	}
	else{
	if(op==11){
	system("cls");
		int H, D, D2;
	
	printf("Entre com a quantidade de horas:");
	scanf("%d", &H);
	
	D2 = H/24;
	D = H%24;
	
	printf("\n%d horas equivale a %d dias e %d horas\n\n", H, D2, D);
	
	system("PAUSE");
	return main();
	}
	else{
	if(op==12){
	system("CLS");
	float A, B, C, Delta, r1, r2;
	system("CLS");
	printf("Programa que calcula equacao de segunda grau");
	
	printf("\n\nEntre com o valor de A:");
	scanf("%f", &A);
	
	printf("\nEntre com o valor de B:");
	scanf("%f", &B);
	
	printf("\nEntre com o valor de C:");
	scanf("%f", &C);
	
	Delta = (B*B)-4*A*C;
	
	if (Delta<0){
		
	printf("\n\nERRO! Delta menor que zero\n\n");
	system("PAUSE");
	return main();								
	}
	else{
		r1 = (-B + sqrt(Delta))/(2*A);
		r2 = (-B - sqrt(Delta))/(2*A);
		printf("\n\nAs raizes equivalem a %f e %f\n\n", r1, r2);		
	}
	
	
	system("PAUSE");
	return main();
		
		
	}
	else{
	if(op==13){
	system("CLS");
	float kmt, pre, g,t;
	
	printf("Informe com a quantidade de quilometros entre dois pontos:");
	scanf("%f", &kmt);
	
	printf("\nEntre com o preco da gasolina:");
	scanf("%f", &pre);
	
	g = kmt/12;
	
	t = g*pre;
	
	printf("\n\nO carro consumira %f litros de gasolina\nValor total a pagar de %f reais\n\n", g, t);
	
	

	system("PAUSE");
	return main();	
	}
	else{
	if(op<2 || op>14){
	printf("\n\nErro! Invalido\n\n");
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
	
	
	system("PAUSE");
	return 0;
}
}
