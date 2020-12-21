#include <stdio.h>
#include <stdlib.h>
int main(){
	int op;
	system ("cls");
	printf("MENU");
	printf("\n\n1  - Questao 1\n2  - Questao 2\n3  - Questao 3\n4  - Questao 4\n5  - Questao 5\n6  - Questao 6\n7  - Questao 7\n8  - Questao 8\n9  - Questao 9\n10 - Sair");
	
	printf("\n\nEscolha uma das opcoes:");
	scanf("%d", &op);
	
	if(op==1){
		system("cls");
		
		float R, D, E, L, P;
	
	printf("Programa que converte reais em outras moedas");
	printf("\n\nEntre com o valor equivalente em reais:");
	scanf("%f", &R);
	
	
	D = R/5.02;
	E = R/5.37;
	L = R/5.92;
	P = R/0.079;
	
	
	printf("\n\n%f reais equivalem a:", R);
	printf("\n\n%f dolares", D);
	printf("\n%f euros", E);
	printf("\n%f libras", L);
	printf("\n%f pesos\n\n", P);
	
	system("PAUSE");
	return main();		
	}
	else{
	if(op==2){
		system("CLS");
		
	float Gh, h, sal;
	
	printf("Entre com o dinheiro que ganhas por hora:");
	scanf("%f", &Gh);
	
	printf("\n\nEntre com a quantidade de horas trabalhadas pro mes:");
	scanf("%f", &h);
	
	sal = Gh*h;
	
	printf("\n\nSeu salario mensal equivale a %f reais\n\n", sal);
	
	
	
	
	system("PAUSE");
	return main();
	}
	else{
	if(op==3){
		system("CLS");
	float C, F;
	printf("Converter graus Celsius em Fahrenheit");
	
	printf("\n\nEntre com o valor de graus Celsius:");
	scanf("%f", &C);
	
	F = ((C/5)*9)+32;
	
	printf("\n\n%f graus Celsius equivalem a %f graus Fahrenheit\n\n", C, F);
	
	system("PAUSE");
	return main();			
	}
	else{
	if(op==4){
		
		system("CLS");
		int A, M, D, A1, M1, D1, Dt;
	
	system("cls");
	printf("Programa que calcula a diferenca entre duas datas em dias");
	printf("\n\nEntre com a primeira data:");
	printf("\nAno:");
	scanf("%d", &A);
	printf("Mes:");
	scanf("%d", &M);
	printf("Dia:");
	scanf("%d", &D);
	
	
	if(A%4==0 && M==2){
		if(D>29){
		printf("Data invalida!\n\n");
		
	system("PAUSE");
	return main();
	
	}
	}
	else{
		if(M==2 && D>28){
		printf("\nData invalida!\n\n");
		
			system("PAUSE");
			return main();
		}
		else{
			if(M>12 || D>31){
				printf("\nData invalida!\n\n");	
				
			system("PAUSE");
			return main();
			}
		}
	
	}
	
	printf("\nEntre com a segunda data:");
	printf("\n\nAno:");
	scanf("%d", &A1);
	printf("Mes:");
	scanf("%d", &M1);
	printf("Dia:");
	scanf("%d", &D1);
	
	if(A1%4==0 && M1==2){
		if(D1>29){
		printf("Data invalida!\n\n");
				
		system("PAUSE");
		return main();
	}
	}
	else{
		if(M1==2 && D1>28){
		printf("\nData invalida!\n\n");
					
			system("PAUSE");
			return main();
		}
		else{
			if(M1>12 || D1>31){
				printf("\nData invalida!\n\n");
						
				system("PAUSE");
				return main();
			}
		}
		
	
	}
	printf("\n\nDe: %d/%d/%d Para: %d/%d/%d\n\n", D, M, A, D1, M1, A1);

	Dt = ((A - A1)*360 + (M -M1)*30+(D - D1))*-1;
	
	printf("Corresponde a diferenca de %d dias\n\n", Dt);
	
	system("PAUSE");
	return main();
			
	}
	else{
	if(op==5){
		system("CLS");
		float pt, pi, pd, car, peri, perd;
	
	printf("Entre com o preco de fabrica do carro em reais:");
	scanf("%f", &car);
	
	printf("\nEntre com o percentual de lucro do distribuidor:");
	scanf("%f", &perd);
	
	printf("\nEntre com o percentual de imposto:");
	scanf("%f", &peri);
	
	
	pd = car*perd/100;
	pi = car*peri/100;
	pt = car + pi + pd;
	
	printf("\n\nO lucro do distribuidor equivale a: %f reais\nO imposto equivale a:%f reais\nE o valor total a se pagar equivale a %f reais\n\n", pd, pi, pt);
	

	system("PAUSE");
	return main();	
	}
	else{
	if(op==6){
	system("CLS");	
		int t, b, n, v, pb, pn, pv;
	
	printf("Entre com o total de eleitores no municipio:");
	scanf("%d", &t);
	
	printf("\nEntre com o total de votos em branco:");
	scanf("%d", &b);
	
	printf("Entre com o total de votos nulos");
	scanf("%d", &n);
	
	printf("Entre com o total de votos validos:");
	scanf("%d", &v);
	
	
	pb = b*100/t;
	pn = n*100/t;
	pv = v*100/t;
	
	printf("\n\nO percentual equivalente a:\nVotos em brancos = %d porcento\%\nVotos nulos = %d porcento\%\nVotos validos = %d porcento\%\n\n", pb, pn, pv);
		
	system("PAUSE");
	return main();	
	}
	else{
	if(op==7){
		system("cls");
		int min, d, r1, h, m;
	
	printf("Programa conversor:");
	printf("\n\nEntre com a quantidade de minutos inteiros:");
	scanf("%d", &min);
	
	d = min/1440;
	r1 = min%1440;
	h = r1/60;
	m = r1%60;
	
	
	printf("\n%d minutos equivalem a:\n", min);
	printf("%d dias %d horas %d minutos\n\n",d, h, m);
	
	system("PAUSE");
	return main();			
	}
	else{
	if(op==8){
		
		system("cls");
		int Num, Suc, Ant;
	
	printf("Entre com um numero:");
	scanf("%d", &Num);
	
	Suc = Num+1;
	Ant = Num-1;
	
	printf("\nSucessor = %d\nAntecessor = %d\n\n", Suc, Ant);
	
	system("PAUSE");
	return main();		
	}
	else{
	if(op==9){
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
	return main();	
	}
	else{
	if(op==10){
		return 0;
	}
	else{
	if(op>10||op<1){
		printf("\nOpcao invalida!\n\n");
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
