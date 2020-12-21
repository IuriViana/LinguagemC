#include <stdio.h>
#include <stdlib.h>
int main(){
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
	return 0;
}
