#include <stdio.h>
#include <stdlib.h>

int main()
{ float Nota1, Nota2, Nota3, Nota4, media;

printf("Digite a primeira nota:");
scanf("%f", &Nota1);
	
printf("\nDigite a segunda nota:");
scanf("%f", &Nota2);

printf("\nDigite a terceira nota:");
scanf("%f", &Nota3);

printf("\nDigite a quarta nota:");
scanf("%f", &Nota4);
	
media = (Nota1 + Nota2 + Nota3 + Nota4)/4;

printf("\nA media do aluno e: %f", media);

if (media>=5){
	printf("\n\nAprovado");
}
else{
    printf("\n\nReprovado");
}
	
system("PAUSE");
return 0;

}

