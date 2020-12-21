#include <stdio.h>
#include <stdlib.h>
int main(){
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
	return 0;
}
