#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	printf("N�meros de 1 a 100!\n\n");
	int x, y = 3;
	char ch[5] = "";
	ch[5]= 26;
	
	for(x=1;x<=100;x++){
		printf("%d%c",x,ch[5]);
	}
	for(x=100;x!=65;x-=5){
	
	printf(" \n\nO quadrado de %d e %d",x, x*x);
	}
	
	
	//Diferen�a entre x++ e ++x :
	
	int x2 = 12, y2;
	y2 = x2++;
	
	printf("\n\n%d", y2);
	
	int a = 12, b;
	b = ++a;
	
	printf("\n\n%d", b);
	
	
/*For infinito pode ser feito deixando termos vazios, para finaliz�-lo utilizamos break;
tamb�m pode ser feito setando uma vari�vel na condi��o que nunca vai alterar de valor*/
	
	printf("\n\nTabuada!\n");
	printf("Entre com um n�mero: ");
	float valor;
	scanf("%f",&valor);
	
	
	
	/*for sem corpos, praticamente o for normal, por que � necess�rio setar incremento,
	v�riavel de controle e uma condi��o para fim*/
	
	
	int z = 0;
	for(;;){
		z++;
		printf("\n%d X %.2f = %.2f", z, valor, z*valor);
		if(z>=10){
			break;
		}
	}	
	
	
	
	return 0;
}
