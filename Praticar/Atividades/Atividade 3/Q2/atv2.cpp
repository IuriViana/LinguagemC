#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("cls");
	setlocale(LC_CTYPE, "Portuguese");
	int op;
	
	printf("Entre com o seu plano:\n\n1 - A\n2 - B\n3 - C\n\n");
	printf("Escolha a opção equivalente: ");
	scanf("%d", &op);
	float sal;
	
	switch(op){
		case 1:
			system("cls");
			printf("Seu plano é o plano A! Aumento de 10%%");
			
			printf("\n\nEntre com o seu salário em reais: ");
			scanf("%f",&sal);
			
			printf("\nSeu novo salário com aumento de 10%% é %f reais \n\n", (sal*110)/100);
			
			break;
		case 2:
			system("cls");
			printf("Seu plano é o plano B! Aumento de 15%%");
			
			printf("\n\nEntre com o seu salário em reais: ");
			scanf("%f",&sal);
			
			printf("\nSeu novo salário com aumento de 15%% é %f reais \n\n", (sal*115)/100);
			
			break;
		case 3:
			system("cls");
			printf("Seu plano é o plano C! Aumento de 20%%");
			
			printf("\n\nEntre com o seu salário em reais: ");
			scanf("%f",&sal);
			
			printf("\nSeu novo salário com aumento de 20%% é %f reais \n\n", (sal*120)/100);
			break;
		default:
			printf("\nEscolha de plano inválida! Tente novamente\n\n");
			system("Pause");
			return main();
			break;
			
	}
	
	system("PAUSE");
	return 0;
}
