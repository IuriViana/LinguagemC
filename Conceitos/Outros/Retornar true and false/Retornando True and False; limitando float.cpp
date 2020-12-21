#include<stdio.h>
#include<stdlib.h>

int main(){
	int x = 5;
	int y = 4;
	printf("%d\n\n\n\n",x>y); /*Quando C retorna TRUE ele retorna o valor 1,
	quando retorna valor FALSE ele retorna 0;*/
	
	float pi = 3.1415; /*Também arredonda!*/
	printf("%.2f\n\n",pi); /*Representar um ponto flutuante com tamanho limitado após 
	a vírgula %.2f nesse caso apenas 2 casas decimais;*/

	system("PAUSE");
	return 0 ;
}
