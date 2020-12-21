#include <stdio.h>
#include <stdlib.h>
int main(){
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
	return 0;
}
