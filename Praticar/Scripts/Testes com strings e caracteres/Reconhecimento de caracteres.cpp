#include <stdio.h>//biblioteca entrada e saída.
#include<stdlib.h>
int main() //função principal
{

char a, b, c, d; //declaração variável, caractere por caractere.
printf("Digite o meu nome:"); //Imprime mensagem na tela.
scanf("%c%c%c%c",&a,&b,&c,&d); //declaração das variaveis pelo usuário.

if (a=='I'||a=='i' && b=='u' && c=='r' && d=='i') //reconhecimento de caracteres, se formarem palavre "iuri" ou "Iuri"
{
printf("\n\nExatamente o meu nome e %c%c%c%c\n\n",a,b,c,d);//Escreve na tela Correto.

int Idade;
printf("\n\nDigite minha idade:");

scanf("%d", &Idade);

if(Idade==14){
	
printf("\n\nCorreto, eu tenho 14 anos\n\n");
}

else{
printf("Errado!\n\n");
}
}

else {


printf("\n\nErrado!\n\n");//senão escreve errado
}

system("PAUSE");
return 0;


}

//|| significa "ou".
