//While e do-while

#include<stdio.h>

int main(){

	int x,x2;
	
	//do-while
	do{
		printf("Entre com um numero: ");
		
		scanf("%d", &x);
		if(x<100){
			printf("Numero menor que 100\n");
		}
		else{
			printf("Numero maior que 100\n");
		}

	}while(x<100);
	
	x2 = 0;
	
		printf("\n(Tabuada!)Entre com um numero: ");
		scanf("%d", &x);
		
		//while
	while(x2<=10){
		printf("\n%dX%d = %d", x ,x2, x*x2);
		x2++;
	}
	
	
	
	
	return 0;
}
