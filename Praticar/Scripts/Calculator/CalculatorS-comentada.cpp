#include <stdio.h> //biblioteca de entrada e sa�da.
#include <stdlib.h>//biblioteca de sistema, comandos como Pause ou Cls.
#include <conio.h> //biblioteca getch, utilizei para a cria��o do menu.
#include <math.h>//biblioteca para opera��es matem�ticas.
 main() //fun��o principal do programa
{
  int op; // declara��o de vari�vel inteira, op��o de menu(op).                  
  system("cls"); //comando da biblioteca stdlib.h apaga conte�do anterior do visor.
  printf("Selecione uma opcao:\n\n");//comando b�sico, imprime algo na tela.      //\n serve para quebra de linha.
  printf("1 - Media\n2 - Imposto\n3 - Segundo Grau\n4 - Juros Simples\n5 - Juros Composto\n6 - Mais\n7 - Sair");
  //imprime mensagem na tela, representa os dados do menu
  op = getch(); //retorna a tecla digitada, a mesma n�o aparece na tela.
  switch (op){  // utilizado no menu, serve para que dependendo da tecla retorne determinada fun��o.
  	
  	case '1': // caso teclado 1 o c�digo abaixo � retornado:
  		system("cls"); //apaga tudo antes escrito no visor.
  		
  		float Not1, Not2, Not3, Not4, media; //declara��o de vari�veis decimais

printf("\n\nPrimeira nota?");  //imprime mensagem na tela

scanf("%f",&Not1); //entrada de dado por meio do usu�rio

printf("\n\Segunda nota?");

scanf("%f", &Not2); 

printf("\n\Terceira nota?");

scanf("%f", &Not3);

printf("\n\Quarta nota?");

scanf("%f", &Not4);

media = (Not1 + Not2 + Not3 + Not4) / 4; //declara��o do valor da v�riavel m�dia, utilizando dados estabelecidos pelo usu�rio

printf("\n\n Media do aluno sera %f ", media); //imprime na tela, retornando o valor da vari�vel "media"

if (media>=5) // se media maior ou igual � 5

printf("- Aprovado\n"); //retorne aprovado. 

else //sen�o.

printf("- reprovado\n"); //retorne reprovado.

system("PAUSE");//pausa da tela.
return main(); // retorno para o inicio da fun��o principal.

   case '2': //caso teclado 2 o c�digo abaixo � retornado:
   	
   	system("cls"); //apaga tudo antes escrito no visor.
   	
   	float QuantMer, ValorMer, i, t; //declara��o v�riaveis decimais

printf("\nDigite a quantidade da mercadoria:"); //imprime mensagem na tela
scanf("%f", &QuantMer); //entrada de dados por meio do usu�rio, determinando valor da v�riavel

printf("\n\Digite o valor de cada mercadoria:");
scanf("%f", &ValorMer);

printf("\nDigite a taxa atual do imposto:");
scanf("%f", &i);

t = (QuantMer * ValorMer * i) + (QuantMer * ValorMer); // declara��o valor da v�riavel t, utilizando dados estabelecidos pelo usu�rio.

printf("\nO valor total para pagar sera: %f\n", t); //imprime na tela, retornando valor v�riavel t.

system("PAUSE"); // pasa da tela.
return main(); //retorno a fun��o principal.

     case '3': //caso teclado 3 considere o c�digo abaixo:
     	
     	system("cls"); //apaga tudo antes escrito no visor
  	
  	float A, B, C, Delta, raiz, teste1, teste2;  //declara��o de vari�veis decimais

printf("Digite o valor de A:"); //imprime mensagem na tela.
scanf("%f", &A); //entrada de dado por meio do usu�rio.

printf("\nDigite o valor de B:");
scanf("%f", &B);

printf("\nDigite o valor de C:");
scanf("%f", &C);

Delta = (B*B)-4*A*C; //declara��o valor vari�vel delta por meio de dados estabelecidos pelo usu�rio.

printf("\nValor de Delta: %f", Delta); //imprime mensagem na tela, retornando valor vari�vel delta.
if(Delta<0) //se delta menor que zero

printf("\n\nError.Delta menor que zero.\n"); //retorne error

else //sen�o

{
teste1= ((-B) + sqrt(Delta))/(2*(A)); //declara��o raiz1 por meio de dados do usu�rio

teste2= ((-B) - sqrt(Delta))/(2*(A)); //declara��o raiz2 por meio de dados do usu�rio

printf("\n\nAs raizes sao; x1=%f e x2=%f\n", teste1, teste2); //imprime mensagem na tela, retornando valor das raizes
}
  	
  	system("PAUSE"); //pausa tela
  	return main(); //retorna para o inicio da fun��o principal
  	
  	case '4': //caso teclado 4 considere o c�digo abaixo:
  		system("cls"); //apaga do visor tudo escrito anteriormente.
  	  float capital, taxa, tempo, juros, montante; //declara��o de vari�veis decimais
    
	printf("Informe o capital:"); //imprime mensagem na tela
	scanf("%f", &capital); //entrada de dado por meio do usu�rio
	
	printf("\nInfome o tempo:");
	scanf("%f", &tempo);
	
	printf("\nInforme a taxa, convertida em relacao ao tempo:");
	scanf("%f", &taxa);
	
	
	juros = (capital * taxa * tempo)/100; //declara��o valor da vari�vel juros por meio de dados estabelecidos pelo usu�rio
	
	montante = juros + capital; //declara��o valor da vari�vel montante por meio de dados estabelecidos pelo usu�rio
	
	printf("\nO juros equivale a %f reais, totalizando um montante de: %f reais \n\n", juros, montante); //imprime mensagem na tela, retornando valor das vari�veis
	
	system("PAUSE"); //pause tela
	return main(); //retorna para o inicio da fun��o principal
  		 
  		case '5': //caso teclado 5 considere o c�digo abaixo:
  			system("cls");//apaga do visor tudo escrito anteriormente
  			
  			float Capital, Taxa, Tempo, Juros, y, Montante; //declara��o vari�veis decimais
  			printf("Informe o valor do Capital:"); //imprime mensagem na tela
  			scanf("%f", &Capital); //entrada de dado por meio do usu�rio
  			
  			printf("\nInforme o tempo:");
  			scanf("%f", &Tempo);
  			
  			printf("\nInforme a taxa, convertida em relacao ao tempo:");
  			scanf("%f", &Taxa);
  			
  			y = (1 + Taxa/100); //declara��o valor da vari�vel y por meio de dados estabelecidos pelo usu�rio
  			
  			Montante = Capital*(pow(y, Tempo)); //declara��o valor da vari�vel Montante por meio de dados estabelecidos pelo usu�rio
  			
  			Juros = Montante - Capital; //declara��o valor da vari�vel juros por meio de dados estabelecidos pelo usu�rio
  			
  			printf("\nO Juros compostos equivale ao valor de: %f reais\ntotalizando um montante de:%f reais\n\n", Juros, Montante);
  			//imprime mensagem na tela, retornando valor das vari�veis
  			system("PAUSE");//pausa tela
  			return main();//retorna para o inicio da fun��o principal
  						
  		case '6'://caso teclado 6 considere o c�digo abaixo
        system("Cls");
        int Sub;
        printf("Selecione uma opcao:"); 
        printf("\n\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n5 - Mais\n6 - Voltar");
        Sub = getch(); 
        switch (Sub){ 
        
        	case '1':
        		
    float p1, p2, p3, p4, resultado;
	int Esc;
	system("cls");
	printf("Escolha quantas parcelas calcular:");
	printf("\n\n1 - 2 parcelas\n\n2 - 3 parcelas\n\n3 - 4 parcelas\n\n4 - Voltar");
	Esc = getch();
	switch (Esc){
		
		case '1':	
		    system("cls");
			printf("Digite a primeira parcela:\n");
			scanf("%f", &p1);
			
				
			printf("\nDigite a segunda parcela");
			scanf("%f", &p2);
			
		resultado = p1 + p2 ;
	
	printf("\nA soma corresponde ao valor de: %f\n", resultado);
	
	system("PAUSE");
			return main();
  
      case '2':
      	
      		system("cls");
			printf("Digite a primeira parcela:");
			scanf("%f", &p1);
			
			printf("\nDigite a segunda parcela:");
			scanf("%f", &p2);
			
			printf("\nDigite a terceira parcela:");
			scanf("%f", &p3);
			
		resultado =	p1 + p2 + p3; 
			
			printf("\nA soma corresponde ao valor de: %f\n", resultado);
			
			system("PAUSE");
			return main();
		
		case '3':
			system("cls");
		    printf("Digite a primeira parcela:");
			scanf("%f", &p1);
			
			printf("\nDigite a segunda parcela:");
			scanf("%f", &p2);
			
			printf("\nDigite a terceira parcela:");
			scanf("%f", &p3);
			
			printf("\nDigite a quarta parcela:");
			scanf("%f", &p4);
			
			resultado = p1 + p2 + p3 + p4;
			
			printf("\nA soma corresponde ao valor de: %f\n", resultado);
			
			system("PAUSE");
			return main();
		
			
			case'4':
		    return main();
			
	}
  			case '2':
  				float P1, P2, P3, P4, Resultado;
  				int Ppcao;
  				system("cls");
  				printf("Escolha quantos termos subtrair:");
  				printf("\n1 - 2 termos\n\n2 - 3 termos\n\n3 - 4 termos\n\n4 - Sair");
  				Ppcao = getch();
  				switch (Ppcao){
  					
  					case '1':
  						system("cls");
		    printf("Digite a primeiro termo:");
			scanf("%f", &P1);
			
			printf("\nDigite a segundo termo:");
			scanf("%f", &P2);
			
			
			Resultado = P1 - P2;
			
			printf("\nA subtracao corresponde ao valor de: %f\n", Resultado);
			system("PAUSE");
			return main();
			
			    case '2':
			
			system("cls");
		    printf("Digite a primeiro termo:");
			scanf("%f", &P1);
			
			printf("\nDigite a segundo termo:");
			scanf("%f", &P2);
			
			printf("\nDigite o terceiro termo");
			scanf("%f", &P3);
			
			Resultado = P1 -P2 - P3;
			
			printf("\nA subtracao corresponde ao valor de: %f\n", Resultado);
			system("PAUSE");
			return main();
			
			    case '3':
			    	
			    	  	system("cls");
		    printf("Digite a primeiro termo:");
			scanf("%f", &P1);
			
			printf("\nDigite a segundo termo:");
			scanf("%f", &P2);
			
			printf("\nDigite o terceiro termo");
			scanf("%f", &P3);
			
			printf("\nDigite o quarto termo:");
			scanf("%f", &P4);
			
			Resultado = P1 - P2 - P3 - P4;
			
			printf("\nA subtracao corresponde ao valor de: %f\n", Resultado);
			system("PAUSE");
			return main();
			
			case '4':
				return main();									
		  }  
		  
		  	case '3':
		  		
		  		float P11, P22, P33, P44, REsultado;
  				int Ppocao;
  				system("cls");
  				printf("Escolha quantos termos multiplicar:");
  				printf("\n1 - 2 termos\n\n2 - 3 termos\n\n3 - 4 termos\n\n4 - Sair");
  				Ppocao = getch();
  				switch (Ppocao){
  					
  					case '1':
  		    	  	system("cls");
		    printf("Digite a primeiro termo:");
			scanf("%f", &P11);
			
			printf("\nDigite a segundo termo:");
			scanf("%f", &P22);
			
			REsultado = P11 * P22 ;
			
			printf("\nA multiplicacao corresponde ao valor de: %f\n", REsultado);
			system("PAUSE");
			return main();
			
			    case '2':
			
				    	  	system("cls");
		    printf("Digite a primeiro termo:");
			scanf("%f", &P11);
			
			printf("\nDigite a segundo termo:");
			scanf("%f", &P22);
			
			printf("\nDigite o terceiro termo");
			scanf("%f", &P33);
			
			REsultado = P11 * P22 * P33;
			
			printf("\nA multiplicacao corresponde ao valor de: %f\n", REsultado);
			system("PAUSE");
			return main();
			
			    case '3':
			    	
			    	  	system("cls");
		    printf("Digite a primeiro termo:");
			scanf("%f", &P11);
			
			printf("\nDigite a segundo termo:");
			scanf("%f", &P22);
			
			printf("\nDigite o terceiro termo");
			scanf("%f", &P33);
			
			printf("\nDigite o quarto termo:");
			scanf("%f", &P44);
			
			REsultado = P11 * P22 * P33 * P44;
			
			printf("\nA multiplicacao corresponde ao valor de: %f\n", REsultado);
			system("PAUSE");
			return main();
			
			case '4':
				return main();									
		  }  
		  
		  case '4':
		  	float d1, d2, quo;//declara��o de vari�veis decimais
		  	system("cls");
		  	printf("Digite o dividendo:");//imprime mensagem na tela
		  	scanf("%f", &d1);//entrada de dado por meio do usu�rio
		  	
		  	printf("\nDigite o divisor:");
		  	scanf("%f", &d2);
		  	
	if(d2==0)//se divisor igual a 0

printf("\n\nError, impossivel dividir\n\n");//retorne error

else//sen�o

{
	
quo = d1 / d2;//retorne declara��o valor da v�riavel quo por meio de dados estabelecidos pelo usu�rio

printf("\nO resultado vale: %f\n", quo);//imprime mensagem na tela, retornando valor da vari�vel quo

}
		  	
		  	system("PAUSE");//pausa da tela
		  	return main();//retorno para o inicio da fun��o principal
		  	
           case '5':
           system("cls");
           int Escolha;
           printf("Selecione uma opcao:\n");
           printf("\n1 - Radiciacao\n2 - Potenciacao\n3 - Area do Circulo\n4 - Comprimento da circunferencia\n5 - Voltar");          
           Escolha = getch();
           switch (Escolha){
           	case '1':
           		
           		 system("cls");
            float rad, ind, re;//declara��o de vari�veis decimais

            printf("Digite o Radicando:");//imprime mensagem na tela
            scanf("%f", &rad);//entrada de dado por meio do usu�rio

            printf("\nDigite o indice:");
            scanf("%f", &ind);

            re = pow(rad, 1/ind); //declara��o valor vari�vel re por meio de dados estabelecidos pelo usu�rio. 
            //utiliza��o propriedade de potencia para representa��o de fra��o

            printf("\nO resultado vale: %f\n", re);

            system("PAUSE");
            return main();
            
            
            
            case '2':
            	
            	system("cls");
            	float b, Ind, resul;
              printf("Digite o valor da base:");
              scanf("%f", &b);

              printf("\nDigite o valor do indice:");
              scanf("%f", &Ind);

              resul = pow(b, Ind);

              printf("\nO resultado vale: %f\n", resul);
              
              system("PAUSE");
              return main();
              
              case'3':
              	
              	     system("cls");
          float Pi, Raio, Area; //declara��o vari�veis decimais
          Pi = 3.14;//declarado valor vari�vel Pi, valor fixo
          printf("Considere Pi = %f\n", Pi);//Apresenta valor fixo de vari�vel
          printf("Digite o valor do raio:");//imprime mensagem na tela
          scanf("%f", &Raio);//entrada de dados pelo usu�rio

          Area = Pi*(Raio*Raio);//declara��o valor da vari�vel Area por meio de dados estabelecidos pelo usu�rio

          printf("\nA area do circulo corresponde ao valor de: %f\n", Area);//imprime mensagem na tela, retornando valor vari�vel Area.

          system("PAUSE");
          return main();
          
          case'4':
          	system("cls");
          	
          	float PI, RAio, Comp;
          	
          	PI = 3.14;
          	printf("\nConsidere Pi = %f\n", PI);
          	printf("Digite o valor do raio:");
          	scanf("%f", &RAio);
          	
          	Comp = 2*PI*RAio;
          	
          	printf("\nO comprimento da circunferencia corresponde ao valor de:%f\n", Comp);
        
          	system("PAUSE");
          return main();
          
          case '5':
          	
          	return main();
           	
        
		   }

		     	
        
		}
				  			 		
  		case '7':
  				int Opt;//menu confirma��o de sa�da
  				system("cls");
  			printf("\nTu pediste para sair, tem certeza?\n\n");
  			printf("\n1 - Sim\n2 - Nao");
  			Opt = getch();
  			switch(Opt){
			  
			  case '1':// caso teclado 1
			  	system("cls");
			  	return 0;//retorne para o fim do programa
  			
  			case '2':
  				return main();//retorne para o inicio da fun��o principal
  		}
  	    
}
//caso outra tecla n�o declarada seja estabelecida o programa vem para esta parte fora da fun��o
printf("\n\nPressione uma opcao valida\n\n");//imprime mensagem na tela 
system("PAUSE");//pausa tela para ler mensagem
return main();//retorna para incio da fun��o principal.
}
