#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
 main()
{
  int op;
  system("cls");
  printf("Selecione uma opcao:\n\n");
  printf("1 - Media\n2 - Imposto\n3 - Segundo Grau\n4 - Juros Simples\n5 - Juros Composto\n6 - Mais\n7 - Sair");
  op = getch();
  switch (op){
  	
  	case '1':
  		system("cls");
  		
  		float Not1, Not2, Not3, Not4, media;

printf("\n\nPrimeira nota?");

scanf("%f",&Not1);

printf("\n\Segunda nota?");

scanf("%f", &Not2);

printf("\n\Terceira nota?");

scanf("%f", &Not3);

printf("\n\Quarta nota?");

scanf("%f", &Not4);

media = (Not1 + Not2 + Not3 + Not4) / 4;

printf("\n\n Media do aluno é %f ", media);

if (media>=5)

printf("- Aprovado\n");

else 

printf("- reprovado\n");

system("PAUSE");
return main();

   case '2':
   	
   	system("cls");
   	
   	float QuantMer, ValorMer, i, t;

printf("\nDigite a quantidade da mercadoria:");
scanf("%f", &QuantMer);

printf("\n\Digite o valor de cada mercadoria:");
scanf("%f", &ValorMer);

printf("\nDigite a taxa atual do imposto:");
scanf("%f", &i);

t = (QuantMer * ValorMer * i) + (QuantMer * ValorMer);

printf("\nO valor total para pagar é: %f\n", t);

system("PAUSE");
return main();

     case '3':
     	
     	system("cls");
  	
  	float A, B, C, Delta, raiz, teste1, teste2; 

printf("Digite o valor de A:");
scanf("%f", &A);

printf("\nDigite o valor de B:");
scanf("%f", &B);

printf("\nDigite o valor de C:");
scanf("%f", &C);

Delta = (B*B)-4*A*C;

printf("\nValor de Delta: %f", Delta);
if(Delta<0)

printf("\n\nError.Delta menor que zero.\n");

else

{
teste1= ((-B) + sqrt(Delta))/(2*(A));

teste2= ((-B) - sqrt(Delta))/(2*(A));

printf("\n\nAs raízes são; x1=%f e x2=%f\n", teste1, teste2);
}
  	
  	system("PAUSE");
  	return main();
  	
  	case '4':
  		system("cls");
  	  float capital, taxa, tempo, juros, montante;
    
	printf("Informe o capital:");
	scanf("%f", &capital);
	
	printf("\nInfome o tempo:");
	scanf("%f", &tempo);
	
	printf("\nInforme a taxa, convertida em relacao ao tempo:");
	scanf("%f", &taxa);
	
	
	juros = (capital * taxa * tempo)/100;
	
	montante = juros + capital;
	
	printf("\nO juros equivale à %f reais, totalizando um montante de: %f reais \n\n", juros, montante);
	
	system("PAUSE");
	return main();
  		 
  		case '5':
  			system("cls");
  			
  			float Capital, Taxa, Tempo, Juros, y, Montante;
  			printf("Informe o valor do Capital:");
  			scanf("%f", &Capital);
  			
  			printf("\nInforme o tempo:");
  			scanf("%f", &Tempo);
  			
  			printf("\nInforme a taxa, convertida em relacao ao tempo:");
  			scanf("%f", &Taxa);
  			
  			y = (1 + Taxa/100);
  			
  			Montante = Capital*(pow(y, Tempo));
  			
  			Juros = Montante - Capital;
  			
  			printf("\nO Juros compostos equivale ao valor de: %f reais\ntotalizando um montante de:%f reais\n\n", Juros, Montante);
  			
  			system("PAUSE");
  			return main();
  						
  		case '6':
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
			
		resultado = p1 + p2;
	
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
		  	float d1, d2, quo;
		  	system("cls");
		  	printf("Digite o dividendo:");
		  	scanf("%f", &d1);
		  	
		  	printf("\nDigite o divisor:");
		  	scanf("%f", &d2);
		  	
	if(d2==0)

printf("\n\nError, impossivel dividir\n\n");

else

{
	
quo = d1 / d2;

printf("\nO resultado vale: %f\n", quo);

}
		  	
		  	system("PAUSE");
		  	return main();
		  	
           case '5':
           system("cls");
           int Escolha;
           printf("Selecione uma opcao:\n");
           printf("\n1 - Radiciacao\n2 - Potenciacao\n3 - Area do Circulo\n4 - Comprimento da circunferencia\n5 - Voltar");          
           Escolha = getch();
           switch (Escolha){
           	case '1':
           		
           		 system("cls");
            float rad, ind, re;

            printf("Digite o Radicando:");
            scanf("%f", &rad);

            printf("\nDigite o indice:");
            scanf("%f", &ind);

            re = pow(rad, 1/ind);

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
          float Pi, Raio, Area;
          Pi = 3.14;
          printf("Considere Pi = %f\n", Pi);
          printf("Digite o valor do raio:");
          scanf("%f", &Raio);

          Area = Pi*(Raio*Raio);

          printf("\nA area do circulo corresponde ao valor de: %f\n", Area);

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
  				int Opt;
  				system("cls");
  			printf("\nTu pediste para sair, tem certeza?\n\n");
  			printf("\n1 - Sim\n2 - Nao");
  			Opt = getch();
  			switch(Opt){
			  
			  case '1':
			  	system("cls");
			  	return 0;
  			
  			case '2':
  				return main();
  		}
  	    
}

printf("\n\nPressione uma opcao valida\n\n");
system("PAUSE");
return main();
}
