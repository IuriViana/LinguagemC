#include <stdio.h>
#include <stdlib.h>

int main(){
int op;
system("Cls");
printf("MENU");
printf("\n\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair");

printf("\n\nDigite o que queres escolher:");
scanf("%d", &op);

if (op==1){
system("cls");
float p1, p2, soma;

printf("Digite a primeira parcela:");
scanf("%f", &p1);	
	
printf("\nDigite a segunda parcela:");
scanf("%f", &p2);	
	
soma = p1 + p2;

printf("\n\nA soma equivale ao valor de: %f\n\n", soma);

system("PAUSE");
return main();		
}

else{
if(op ==2){
system("cls");
float s1, s2, sub;

printf("Digite o minuendo:");
scanf("%f", &s1);	
	
printf("\nDigite a subtraendo:");
scanf("%f", &s2);	

sub = s1 - s2;

printf("\n\nA subtracao equivale ao valor de: %f\n\n", sub);

system("PAUSE");
return main();
}
else{
if(op ==3){
system("Cls");
float f1, f2, mult;

printf("Digite o primeiro fator:");
scanf("%f", &f1);

printf("\nDigite o segundo fator:");
scanf("%f", &f2);

mult = f1 * f2;
	
printf("\n\nA multiplicacao equivale ao valor de: %f\n\n", mult);

system("PAUSE");
return main();	
}
else{
if(op ==4){
system("Cls");
float d1, d2, quo;

printf("Digite o dividendo:");
scanf("%f", &d1);

printf("\nDigite o divisor:");
scanf("%f", &d2);
if(d2 == 0){
printf("\n\nError, divisor igual a zero\n\n");
system("PAUSE");
return main();
}
else{
quo = d1/d2;
printf("\n\nA divisao equivale ao valor de: %f\n\n", quo);
system("PAUSE");
return main();
}
}
else{
if(op ==5){
int op2;
system("cls");	
printf("Tu pedistes para sair, continuar?");

printf("\n\n1 - Sim\n2 - nao");

printf("\n\nDigite o que queres escolher:");
scanf("%d", &op2);
if(op2==1){
return 0;
}
else{
if(op2==2){
return main();
}
else{
if (op2>2||op2==0){
printf("\n\nOpcao invalida! Retornando para o menu principal\n\n");
system("PAUSE");
return main();
}
}
}
}
else{
if(op>5 || op ==0){
printf("\n\nInvalido!\n\n");
system("PAUSE");
return main();
}
}
}
}
}
}
}
