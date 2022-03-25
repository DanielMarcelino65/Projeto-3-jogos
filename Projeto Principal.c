#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()

{
//base	
	int j; //jogo
	int opcao;
	int retorno;
		 	 
    //mesagem inicial
    printf("\n*********************** PROJETO PROGRAMACAO ************************\n\n");
    printf("                            BEM VINDO!!!\n\n");
    printf("          --Selecione um jogo de sua escolha de sua escolha--\n\n");
    
    printf("_______________________________Digite__________________________________\n\n");
    printf (" |1| para --> PERGUNTAS E RESPOSTAS \n\n |2| para--> ADVINHE O NUMERO\n\n |3| para --> OLHO DE COBRA\n\n |4| para --> SAIR DO MENU\n\n");
    printf(" --> ");
    
    scanf("%d",&j);
    
    switch (j)
    {
	
    
    //**************************** JOGO 01 ******************************************************** JOGO 01 ******************************************************** JOGO 01 ****************************
    
    case 1:
    do
    {
    
 	
	
    int r1;
	int r2;
	int r3;
	//***************Iniciando jogo numero 1*************
	printf("\n********************************JOGO-1*********************************\n");
	//*************************Primeira Pergunta**************************
	printf("\n --> -|Qual a data do atentado terrosita que derrubou as torres gemeas?|-");
	printf("\n\n1 - 30 de Julho de 2001.");
	printf("\n2 - 11 de Setembro de 2001");
	printf("\n3 - 22 de Dezembro de 2003\n");
	printf("\nDigite a respota: ");
	scanf("%d", &r1);
	switch(r1)
	{
	case 1:
	printf("\n --Resposta Errada--");
	break;
	case 2:
	printf("\n --Resposta Correta--");
	break;
	case 3:
	printf("\n --Resposta Errada--");
	break;
	default:
	printf("\n --Resposta Invalida--");
		
	}
	//*************Segunda Pergunta*********************************
	printf("\n\n --> -|Qual a data do nascimento da rainha Elizabeth II?|-");
	printf("\n\n1 - 21 de Abril de 1926.");
	printf("\n2 - 29 de Fevereiro de 1926.");
	printf("\n3 - 17 de Novembro de 1200.");
	printf("\n4 - Ha 245 milhoes de anos atras durante o periodo triassico.");
	printf("\n\nDigite a respota: ");
	scanf("%d", &r2);
	switch(r2)
	{
	case 1:
	printf("\n --Resposta Correta--");
	break;
	case 2:
	printf("\n --Resposta Errada--");
	break;
	case 3:
	printf("\n --Resposta Errada--");
	break;
	case 4:
	printf("\n --Resposta Errada--");
	break;
	default:
	printf("\n --Resposta Invalida--");
	}
	//******************Terceira Pergunta*****************
	printf("\n\n --> -|Em que ano surgiu o primeiro computador 100%% eletronico ?|-");
	printf("\n\n1 - Final dos anos 1930.");
	printf("\n2 - Ano de 1642.");
	printf("\n3 - 500 a.C.");
	printf("\n4 - No ano de 1945.");
	printf("\n\nDigite a respota: ");
	scanf("%d", &r3);
	switch(r3)
	{
	case 1:
	printf("\n--Resposta Errada--\n\n");
	break;
	case 2:
	printf("\n--Resposta Errada--\n\n");
	break;
	case 3:
	printf("\n--Resposta Errada--\n\n");
	break;
	case 4:
	printf("\n--Resposta Correta--\n\n");
	break;
	default:
	printf("\n--Resposta Invalida--\n\n");
	break;
	}
    
    
    
   	 //***************Finalização do Jogo e escolher voltar ao menu ou repetir**********************
   	printf("\n****************************fIM DE JOGO*****************************\n\n"); 
	printf("_______________________________Digite__________________________________\n\n");
	printf("\n\n |1| para --> retornar ao menu\n\n |2| para--> Jogar novamente\n\n");
   	scanf("%d", &retorno);
   	
   	
   	if(retorno == 1)
	{
		return main();
	}
   	
   	
    } while (retorno != 1);
    break;
    
   //**************************** JOGO 02 ******************************************************** JOGO 02 ******************************************************** JOGO 02 **************************** 	
    case 2:
    do
    {
	
	
    int 
	numero, 
	sorteio, 
	tentativas;
	
    char s;
    srand(time(NULL));
    sorteio = rand() % 1001;
    tentativas=1;
    
    	printf("\n----------ADIVINHE O NUMERO SORTEADO----------\n");
	    printf("\n     |||Sorteando numero entre 0 e 1000|||    \n\n");
	    printf("                   ...                            \n");
	    printf("\n             -Numero sorteado!-             \n\n");
	    printf("______________________________________________\n");
	    printf("\n               VC TEM 5 TENTATIVAS           \n");
	    printf("______________________________________________\n\n");
	    
	    
    do
	{
	    printf("----------------Tentativa  |%d|---------------\n", tentativas);
		printf("\nQual numero que voce acha que eh?\n-->");	
    	scanf("%d", &numero);
    	
    	if(numero > sorteio)
		{ 
		    
			printf("\n\n_____________________________________________\n         Tente um numero MENOR que %d\n______________________________________________\n\n", numero);  
			
	    }
		else 
		{
			if(numero < sorteio)       
			                                                
                printf("\n\n_____________________________________________\n         Tente um numero MAIOR que %d\n______________________________________________\n\n", numero);
                
            else
			{
				printf("\n                              VOCÊ ACERTOU!!");
                printf("\n                            O número era: %d", sorteio);
			}    
			
		}
		
		tentativas++;
			
    } 
    while (numero != sorteio && tentativas <= 5);
    
    if (tentativas > 5) 
	{
    printf("\n\nSuas chances acabaram!!\n");
    printf("\nO numero era: %d\n", sorteio);
    
    
    }
    
        //***************Finalização do Jogo e escolher voltar ao menu ou repetir**********************
   	printf("\n****************************fIM DE JOGO*****************************\n\n"); 
	printf("________Digite_______\n\n");
	printf("\n\n |1| para --> retornar ao menu\n\n |2| para--> Jogar novamente\n\n");
   	scanf("%d", &retorno);
    
    
    if(retorno == 1)
	{
		return main();
	}
    
     } while (retorno != 1);
    break;
    
    
   
   //**************************** JOGO 03 ******************************************************** JOGO 03 ******************************************************** JOGO 03 **************************** 
    case 3: 
    do
	{
		
		
	
    char  jogador1[61];
	char jogador2[61];
	int dado1 , dado2;
	int i = 0, j= 0, x = 0, y =0;
	int FimDeJogo = 0;
	int ponto1 = 0, ponto2 = 0;
	do
	{
	ponto1 = 0; ponto2 = 0;
	printf("\n********************************JOGO-3*********************************\n");
	printf("\n*************************** Vamos comecar *****************************\n");
	
	
	printf("\nDigite o nome do jogador 1:\n\n--> ");
	scanf("%s", &jogador1);
	printf("\nDigite o nome do jogador 2:\n\n--> ");
	scanf("%s", &jogador2);
	
	
	printf("\n\n\n\n\n\n\n\n\n\n      ***************************Jogo iniciado****************************\n");
	do{
		
	
	
	do
	{
		printf("                  ______________________________________________\n");
	    printf("\n                                 RODADA JOGADOR 1              \n");
	    printf("                  ______________________________________________\n\n");
	    
	    printf("\n                        ==>A rodada da vez eh do ==>|%s|", jogador1);
	
	    printf("\n                  ______________________________________________\n");
	    printf("\n                                 Jogando dados...              \n");
	    printf("                  ______________________________________________\n\n");
	    
	    
	    
	    
	//**********Jogando dos Dados*****************
	srand( (unsigned)time(NULL) );
	dado1 = 1+rand() % 7;
	dado2 = 1+rand() % 7;
	if(dado1 == 7)
	{
		dado1 = dado1- 1;
	}
	if(dado2 == 7)
	{
		dado2 = dado2 - 1;
	}
	
	
	
	//*************Apresentando os valores dos dados**********
	printf("\n\n                          -->Valor do dado 1 eh: %d", dado1);
	printf("\n\n                          -->Valor do dado 2 eh: %d\n\n", dado2);
	printf("                       _________________________________\n");
	
	ponto1 = ponto1 + dado1 + dado2;
	printf("\n\n                  **********JOGADOR 1 ==>  %d PONTOS**********\n\n", ponto1);
	printf("___________________________________________________________________________________\n");
	if(ponto1 >= 50)
	{
		printf("\n\n                  ----------JOGADOR 1 VENCEU O JOGO----------\n");
		printf("___________________________________________________________________________________\n");
		printf("\n\n |1| para --> JOGAR NOVAMENTE");
		printf("\n\n |2| para --> VOLTAR AO MENU\n\n");
		printf("\n\n ==> ");
		scanf("%d", &x);
		switch(x)
		{
		
		case 1:
			FimDeJogo = 1;
			i = 2;
			y = 3;
			break;
		case 2:
			return main();
			break;
		}
	}
	else
	{
		if(dado1 == 1 || dado2 == 1)
		{
			printf("                                    -OBS-                                             \n\n");
	    printf("\n          ==>Um dos dados caiu no numero 1, portanto sua pontuacao ira");
		printf("\n              zerar e voce perdera a vez. Obrigado por jogar.");
	    printf("\n\n___________________________________________________________________________________\n\n");
		ponto1 = 0;
		i = 2;
		dado1 = 0; dado2 = 0;
		}
		else
		{
			
			
		printf("_______________________________DECIDA SUA ESCOLHA__________________________________\n");
		printf("___________________________________________________________________________________\n");
	    printf("                                    -OBS-                                             \n\n");
	    printf("\n          ==> Caso voce jogue novamente e um dos dados cair no numero 1,");
		printf("\n              voce ira perder sua pontuacao e passara a sua vez.");
	    printf("\n\n___________________________________________________________________________________\n\n");	
		
		
        printf("\n\n |1| para --> JOGAR NOVAMENTE");
		printf("\n\n |2| para --> PASSAR A VEZ\n\n");   
		printf("\n\nVoce escolhe: ");
		scanf("%d", &i);
			if(i == 2)
			{
				printf("                  ______________________________________________\n");
				printf("\n\n\n\n\n\n\n\n\n\n                       --> Jogador 1 passou a sua vez. Ate a proxima.\n\n");
				printf("                  ______________________________________________\n");
			}
			else
			{
				i = 1;
				printf("                  ______________________________________________\n");
				printf("\n\n\n\n\n\n\n\n\n\n                       -->Jogador 1 ira Jogar novamente!\n\n\n");
				printf("\n\n                  ______________________________________________\n");
			}
			
		}
	}

	}while(i != 2);
	
	
	
	//*******************Rodadada Jogador 2****************
	if(ponto1 < 50){
	dado1 = 0; dado2 = 0;
	do
	{
	    printf("\n\n                   ______________________________________________\n");
	    printf("\n                                 RODADA JOGADOR 2               \n");
	    printf("                  ______________________________________________\n\n");
	    
	    printf("\n\n                   ==>A rodada da vez eh do ==>|%s|", jogador2);
	
	    printf("\n\n                  ______________________________________________\n");
	    printf("\n                                 Jogando dados...              \n");
	    printf("                  ______________________________________________\n\n");
	    
	    
	    
	//**********Jogando dos Dados*****************
	srand( (unsigned)time(NULL) );
	dado1 = 1+rand() % 7;
	dado2 = 1+rand() % 7;
	if(dado1 == 7)
	{
		dado1 = dado1- 1;
	}
	if(dado2 == 7)
	{
		dado2 = dado2 - 1;
	}
	
	
	
	//*************Apresentando os valores dos dados**********
	printf("                  ______________________________________________\n");
	printf("\n\n                  -->Valor do dado 1 eh: %d", dado1);
	printf("\n\n                  -->Valor do dado 2 eh: %d\n\n", dado2);
	printf("___________________________________________________________________________________\n");
	
	
	ponto2 = ponto2 + dado1 + dado2;
	
	
	printf("\n\n                     **********JOGADOR 2 ==>  %d PONTOS**********\n\n", ponto2);
	printf("___________________________________________________________________________________\n");
	
	if(ponto2 >= 50)
	{
		printf("\n\n                  ----------JOGADOR 2 VENCEU O JOGO----------\n");
		printf("___________________________________________________________________________________\n");
		
		printf("\n\n |1| para --> JOGAR NOVAMENTE");
		printf("\n\n |2| para --> VOLTAR AO MENU\n\n");
		scanf("%d", &x);
		switch(x)
		{
		
		case 1:
			FimDeJogo = 1;
			j = 2;
			y = 3;
			break;
		case 2:
			return main();
			break;
		}
	}
	else
	{
		if(dado1 == 1 || dado2 == 1)
		{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n___________________________________________________________________________________\n\n");
		printf("                                 PONTUACAO ZERADA!\n\n");
		printf("                          ==>UM DE SEUS DADOS FOI IGUAL A |1|\n");
		printf("___________________________________________________________________________________\n\n");
		
		ponto2 = 0;
		j = 2;
		y = 1;
		dado1 = 0; dado2 = 0;
		}
		else{
			
		printf("_______________________________DECIDA SUA ESCOLHA__________________________________\n");
		printf("___________________________________________________________________________________\n");
	    printf("                                    -OBS-                                             \n\n");
	    printf("\n          ==> Caso voce jogue novamente e um dos dados cair no numero 1,");
		printf("\n              voce ira perder sua pontuacao e passara a sua vez.") ;
	    printf("\n\n___________________________________________________________________________________\n\n");	
		
		
        printf("\n\n |1| para --> JOGAR NOVAMENTE");
		printf("\n\n |2| para --> PASSAR A VEZ\n\n");
		scanf("%d", &j);
			if(j == 2)
			{
				y = 1;
				printf("                  ______________________________________________\n");
				printf("\n\n\n\n\n\n\n\n\n\n                      -->Jogador 2 passou a sua vez. Ate a proxima.");
				printf("\n                  ______________________________________________\n");
			}
			else
			{
				j = 1;
				printf("                  ______________________________________________\n");
				printf("\n\n\n\n\n\n\n\n\n\n                      -->Jogador 2 ira Jogar novamente!");
				printf("\n                  ______________________________________________\n");
			}
			
		}
	}
		}while(j != 2);		
	}
	}while(y != 3);
	}while(FimDeJogo == 1);

    
    
    
    
    //***************Finalização do Jogo e escolher voltar ao menu ou repetir**********************
   	printf("\n****************************fIM DE JOGO*****************************\n\n"); 
	printf("________Digite_______\n\n");
	printf("\n\n |1| para --> retornar ao menu\n\n |2| para--> Jogar novamente\n\n");
   	scanf("%d", &retorno);
   	
   	
   	if(retorno == 1)
	{
		return main();
	}
   	
   	
    } while (retorno != 1);
    break;
    
    case 4:
    	return 0;
    	break;
}



}
    //David passou por aqui
    	
	
		
