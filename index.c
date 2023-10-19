#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <unistd.h>
int main(){
    char respo[10], respq;
    int pontuacao = 0, i = 0;
    
    
    setlocale(LC_ALL, "Portuguese");
    
while(1){

    	printf("        ________________________________________________________________________________\n");
    	printf("       |                                                                                |");
        printf("\n       |  Bem vindo ao Quiz.                                                            | ");
        printf("\n       |  Neste jogo você verá o quanto sabe sobre Empreendedorismo.                    |\n ");
        printf("      |                                                                                |");
        printf("\n       |  Os níveis são: especialista, sênior, pleno e junior.                          |");
        printf("\n       |  Serão 16 perguntas, ou seja, 4 acertos para cada nível.                       |\n");
        printf("       |________________________________________________________________________________|");
        printf("\n       |  Digite (sim) para começar e (não) para fechar o jogo.                         |");
        printf("\n       |  Você:");
        fgets(respo, 10, stdin);
        
        if(strcmp(respo, "Sim\n")== 0||strcmp(respo, "sim\n") == 0){
		
		
			
        //QUESTAO 1
        printf("       |Vamos começar!                                                                  |\n");
        printf("       |                                                                                |");
        printf("\n       |Questão 1: O'Que podemos entender por Empreendedorismo?                         |\n");
        printf("       |                                                                                |\n");
        printf("       |Opção (A): A habilidade de criar novas empresas.                                | \n");
        printf("       |Opcao (B): A capacidade de inovar e identificar oportunidades de negócios.      |\n");
        printf("       |Opção (C): A arte de gerenciar negócios existentes.                             |\n"); 
        printf("       |Opção (D): Todas as opções acima.                                               |\n");
        printf("       |Resposta: ");
        scanf(" %c", &respq);
        fflush(stdin);
        if(respq == 'D'||respq == 'd'){
        printf("       |                                                                                |");	
        printf("\n       |Resposta Correta.                                                               |\n");
        printf("       |Próxima Pergunta.                                                               | \n");
        	pontuacao += 1;
		}else{
			printf("       |                                                                                |");
			printf("\n       |Resposta Incorreta.                                                             | \n       |A resposta correta era (D).                                                     |\n");
			printf("       |Próxima Pergunta.                                                               |\n");
			pontuacao -= 0;
		}
		//system("cls");
		
		
		//Questão 2
       	printf("       |                                                                                |");
		      printf("\n       |Questão 2: Qual é o objetivo de um empreendedor?                                |\n");
         	printf("       |                                                                                |");
        printf("\n       |Opção (A): Criar uma empresa lucrativa.                                         |\n");
        printf("       |Opção (B): Resolver problemas e atender às necessidades do mercado.             |\n");
        printf("       |Opção (C): Aumentar sua visibilidade e apreciação pessoal.                      |\n");
        printf("       |Opção (D): Nenhuma das opções acima.                                            |\n");
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'B'||respq == 'b'){
        		printf("       |                                                                                |");
        printf("\n       |Resposta Correta.                                                               | \n");
        printf("       |Próxima Pergunta.                                                               | \n");
        	pontuacao += 1;
		}else{
				printf("       |                                                                                |");
			printf("\n       |Resposta Incorreta.                                                             |\n       |A resposta correta era (B).                                                     |\n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
		}

		
		
		
		//Questão 3
 	printf("       |                                                                                |");
		printf("\n       |Questão 3: O que é plano de negócios simplificado?                              |\n");
	printf("       |                                                                                |");
        printf("\n       |Opção (A): Um documento resumido que descreve o modelo de negócio e as          |\n");
        printf("       |projeções financeiras de uma empresa.                                           | \n");
        printf("       |Opção (B): Um documento que descreve a história e a visão da empresa.           |\n");
        printf("       |Opção (C): Um documento que detalha as políticas e procedimentos internos de uma|\n");
        printf("       |empresa.                                                                        |\n");
        printf("       |Opção (D): Nenhuma das opções acima.                                            |\n");
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'A'||respq == 'a'){
        	printf("       |                                                                                |");
        	printf("\n       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n");
        	pontuacao += 1;
		}else{
			printf("       |                                                                                |");
			printf("\n       |Resposta Incorreta.                                                             |\n       |A resposta correta era (A).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
		}
		
		
		
       //Questão 4
       	printf("       |                                                                                |");
		printf("\n       |Questão 4: Qual é a importância da inovação para um empreendimento?             |\n");
		printf("       |                                                                                |");
        printf("\n       |Opção (A): Ajuda a manter a competitividade da empresa.                         |\n");
        printf("       |Opção (B): Ajuda a criar novos mercados e oportunidades de negócios.            | \n");
        printf("       |Opção (C): Ajuda a aumentar a rentabilidade e o valor da empresa.               | \n");
        printf("       |Opção (D): Todas as opções acima.                                               | \n");
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
     
        if(respq == 'D'||respq == 'd'){
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n");
        	pontuacao += 1;
		}else{
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta correta era (D).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
		}
		
		
		
		//Questão 5
		printf("       |                                                                                |");
		printf("\n       |Questão 5: O que é uma pesquisa de mercado?                                     | \n");
		printf("       |                                                                                |");
        printf("\n       |Opção (A): Uma análise do mercado e das tendências do setor para identificar    |\n");
        printf("       |oportunidades de negócio.                                                       |\n");
        printf("       |Opção (B): Investigação de produtos e serviços de concorrentes diretos e        |\n");
        printf("       |indiretos.                                                                      |\n");
        printf("       |Opção (C): A avaliação do desempenho financeiro da empresa.                     |\n"); 
        printf("       |Opção (D): Nenhuma das opções acima.                                            |\n");                               
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'A'||respq == 'a'){
        	printf("       |                                                                                |\n");
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n"); 
        	pontuacao += 1;
		}else{
			printf("       |                                                                                |\n");
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta era a opção (A).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
		}
		
		
		
		//Questão 6
		printf("       |                                                                                |");
		printf("\n       |Questão 6: O que é uma startup?                                                 |");
		printf("\n       |                                                                                |");
		printf("\n       |Opção (A): Uma empresa que se concentra em um nicho de mercado específico.      |\n");
        printf("       |Opção (B): Uma empresa que já está estabelecida no mercado há muitos anos.      |\n");
		printf("       |Opção (C): Uma empresa recém-criada que tem potencial de crescimento rápido.    |\n");
        printf("       |Opção (D): Nenhuma das opções acima.                                            |\n");
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'C'||respq == 'c'){
        	printf("       |                                                                                |\n");
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n"); 
        	pontuacao += 1;
		}else{
			printf("       |                                                                                |\n");
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta era a opção (C).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
		}	
		
		
		
		//Questão 7
		printf("       |                                                                                |");
		printf("\n       |Questão 7: O que é o networking? \n");
		printf("       |                                                                                |");
        printf("\n       |Opção (A): A construção de relacionamentos profissionais para fins de negócios. | \n");
        printf("       |Opção (B): A construção de relacionamentos pessoais para fins de lazer.         |  \n");
        printf("       |Opção (C): A construção de relacionamentos familiares para fins de negócios.    | \n");
        printf("       |Opção (D): Nenhuma das opções acima.                                            |\n");
        printf("       |Resposta:");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'A'||respq == 'a'){
        		printf("       |                                                                                |\n");
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n"); 
        	pontuacao += 1;
		}else{
			printf("       |                                                                                |\n");
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta era a opção (A).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
		}
		
		
		
		//Questão 8
		printf("       |                                                                                |");
		printf("\n       |Questão 8: O que é a missão de uma empresa?                                     |\n");
		printf("       |                                                                                |");
        printf("\n       |Opção (A):Uma declaração que descreve a estrutura organizacional de uma empresa.| \n");
        printf("       |Opção (B): Uma declaração que descreve as metas financeiras de uma empresa.     | \n");
        printf("       |Opção (C): Uma declaração que descreve o propósito e os valores centrais de uma |\n       |empresa.                                                                        | \n");
        printf("       |Opção (D): Nenhuma das opções acima.                                            |\n");
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'C'||respq == 'c'){
        	printf("       |                                                                                |\n");
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n"); 
        	pontuacao += 1;
		}else{
			printf("       |                                                                                |\n");
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta era a opção (C).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
			
			
		}
		
		
		
		//Questão 9
		printf("       |                                                                                |");
		printf("\n       |Questão 9: O que é um empreendedorismo social?                                  | \n");
		printf("       |                                                                                |");
        printf("\n       |Opção (A):Uma abordagem de negócios que se concentra em gerar lucro a qualquer  |\n       |custo.                                                                          | \n");
        printf("       |Opção (B): Uma abordagem de negócios que se concentra em resolver problemas     |\n       |sociais e ambientais.                                                           |  \n");
        printf("       |Opção (C): Uma abordagem de negócios que se concentra em imitar as práticas de  |\n       |empresas concorrentes.                                                          |  \n");
        printf("       |Opção (D): Nenhuma das opções acima.                                            |\n");
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'B'||respq == 'b'){
        printf("       |                                                                                |\n");
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n"); 
        	pontuacao += 1;
		}else{
				printf("       |                                                                                |\n");
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta era a opção (B).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
		}
		
		
		
		//Questão 10
		printf("       |                                                                                |");
		printf("\n       |Questão 10: Qual o primeiro passo para se tornar um empreendedor?               | \n");
		printf("       |                                                                                |\n");
        printf("       |Opção (A): Conseguir dinheiro.                                                  |  \n");
        printf("       |Opção (B): Trabalhar muito.                                                     |\n");
		printf("       |Opção (C): Identificar uma oportunidade de negócio.                             |\n");
        printf("       |Opção (D): Criar uma empresa.                                                   | \n"); 
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'C'||respq == 'c'){
        	printf("       |                                                                                |\n");
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n"); 
        	pontuacao += 1;
		}else{
			printf("       |                                                                                |\n");
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta era a opção (C).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
		}
		
		
		
		//Questão 11
		printf("       |                                                                                |");
		printf("\n       |Questão 11: Qual a importância de ser empreendedor?                             |\n");
		printf("       |                                                                                |");
        printf("\n       |Opção (A): Melhorar os problemas ao seu redor.                                  | \n");
        printf("       |Opção (B): Ganhar dinheiro.                                                     |  \n");
        printf("       |Opção (C): Mais capacidade de ser criativo.                                     |  \n");
        printf("       |Opção (D): Não ser pobre.                                                       | \n");
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'A'||respq == 'a'){
        	printf("       |                                                                                |\n");
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n"); 
        	pontuacao += 1;
		}else{
				printf("       |                                                                                |\n");
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta era a opção (A).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
		}
		
		
		
		//Questão 12
		printf("       |                                                                                |");
		printf("\n       |Questão 12: Quais são os principais desafios enfrentados por empreendedores ao  |");
		printf("\n       |iniciar um novo negócio?                                                        | \n");
		printf("       |                                                                                |\n");
		printf("       |Opção (A): Falta de recursos financeiros.                                       |\n");
        printf("       |Opção (B): Dificuldade em encontrar clientes.                                   |\n");
		printf("       |Opção (C): Concorrência acirrada.                                               |\n");
        printf("       |Opção (D): Todas as alternativas acima podem ser consideradas.                  |\n");
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'D'||respq == 'd'){
        printf("       |                                                                                |\n");
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n"); 
        	pontuacao += 1;
		}else{
			printf("       |                                                                                |\n");
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta era a opção (D).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
		}
		
		
		
		//Questão 13
		printf("       |                                                                                |");
		printf("\n       |Questão 13: Como identificar um empreendedor?                                   |\n");
		printf("       |                                                                                |");
        printf("\n       |Opção (A): Tem muito dinheiro, e investe em empresas.                           |\n");
        printf("       |Opção (B): Tem criatividade, poder de inovação e persistência.                  | \n");
        printf("       |Opção (C): Tem uma empresa registrada em seu nome.                              |  \n");
        printf("       |Opção (D): Somente analisam ao seu redor sobre os problemas.                    | \n");
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'B'||respq == 'b'){
        printf("       |                                                                                |\n");
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n"); 
        	pontuacao += 1;
		}else{
			printf("       |                                                                                |\n");
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta era a opção (B).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
		}
		
		
		
		//Questão 14
		printf("       |                                                                                |");
		printf("\n       |Questão 14: Qual desses empreendedores está em 1°lugar no Rank dos 5 maiores    |");
		printf("\n       |do mundo?                                                                       |\n");
		printf("       |                                                                                |");
        printf("\n       |Opção (A): Zumbi dos Palmares.                                                  |\n");
        printf("       |Opção (B): Neymar Jr.                                                           |   \n");
        printf("       |Opção (C): Bill Gates.                                                          |\n");
        printf("       |Opção (D): João de Deus.                                                        |\n");
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'C'||respq == 'c'){
        printf("       |                                                                                |\n");
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n"); 
        	pontuacao += 1;
		}else{
			printf("       |                                                                                |\n");
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta era a opção (C).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0;
		}
		
		
		
		//Questão 15
		printf("       |                                                                                |");
		printf("\n       |Questão 15: Qual desses Projetos sociais relacionados a animais de rua,         |");
		printf("\n       |está localizado em Jaraguá do Sul?                                              | \n");
		printf("       |                                                                                |");
        printf("\n       |Opção (A): Projeto Embaixadores Amepets.                                        | \n");
        printf("       |Opção (B): Instituto Luísa Mell.                                                |  \n");
        printf("       |Opção (C): Focinhos de Luz.                                                     |\n");
        printf("       |Opção (D): Nenhuma das opções acima.                                            |\n");
        printf("       |Resposta: ");
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'A'||respq == 'a'){
        printf("       |                                                                                |\n");
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |Próxima Pergunta.                                                               | \n"); 
        	pontuacao += 1;
		}else{
				printf("       |                                                                                |\n");
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta era a opção (A).                                                     | \n");
			printf("       |Próxima Pergunta.                                                               | \n");
			pontuacao -= 0; 
		}
		
		
		
		//Questão 16
		printf("       |                                                                                |");
		printf("\n       |Questão 16: O que é a identidade visual?                                        | \n");
		printf("       |                                                                                |");
        printf("\n       |Opção (A): O nome de uma empresa.                                               | \n");
        printf("       |Opção (B): O logotipo, cores e elementos gráficos que representam uma empresa.  | \n");
        printf("       |Opção (C): O histórico financeiro de uma empresa.                               | \n");
        printf("       |Opção (D): Nenhuma das opções acima.                                            | \n");
        printf("       |Resposta: ");
        
        scanf("%c", &respq);
        fflush(stdin);
        if(respq == 'B'||respq == 'b'){
        	printf("       |                                                                                |\n");
        	printf("       |Resposta Correta.                                                               | \n");
        	printf("       |                                                                                |\n");
        	pontuacao += 1;
		}else{
			printf("       |                                                                                |\n");
			printf("       |Resposta Incorreta.                                                             |\n       |A resposta era a opção (B).                                                     | \n");
		
			pontuacao -= 0;
		}
			printf("       |                                                                                |");
			printf("\n       |                                                                                |");
		  printf("\n       |Parabéns! Você chegou ao fim do Quiz, confira sua pontuação!                    | \n");
		  	printf("       |                                                                                |");
}else{
		printf("       |                                                                                |");
	      printf("\n       |  Fim do jogo.                                                                  |");
}         printf("\n       |                                                                                |");
          printf("\n       |  Pontuação: %2d                                                                 |\n", pontuacao);
          	
if (pontuacao <= 4 && pontuacao > 0){
		  printf("       |                                                                                |");
	      printf("\n       |Com base na sua pontuação seu nível está em : Junior!                           |\n");
	      	printf("       |                                                                                |\n");
	      	   printf("       |________________________________________________________________________________|\n");
}else if(pontuacao > 4 && pontuacao <=8){
		printf("       |                                                                                |");
	      printf("\n       |Com base na sua pontuação seu nível está em : Pleno!!                           |\n");
	      	printf("       |                                                                                |\n");
	      	   printf("       |________________________________________________________________________________|\n");
}else if(pontuacao > 8 && pontuacao <=12){
		printf("       |                                                                                |");
	      printf("\n       |Com base na sua pontuação seu nível está em : Sênior!!!                         |");
	      printf("\n       |                                                                                |");
	      	   printf("\n       |________________________________________________________________________________|\n");
}else if(pontuacao > 12 && pontuacao <= 16){
		    printf("       |                                                                                |");
          printf("\n       |UAU!! Seu nível é: Especialista!!!!                                             |\n");
          	printf("       |                                                                                |\n");
          	   printf("       |________________________________________________________________________________|\n");
}else if(pontuacao == 0){
	      printf("       |  Você nem tentou !!                                                            |");
	      printf("\n       |________________________________________________________________________________|\n");
}

    int tempo_resposta = 10; // Tempo em segundos para responder
        for (i = tempo_resposta; i > 0; i--) {
            printf("\r       |  Aguarde %2d segundos para o Quiz recomeçar..                                   | ", i);
            fflush(stdout);
            sleep(1); // Pausa a execução por 1 segundo
        }
        
    printf("\n"); 
    system("cls");
    fflush(stdin);
	pontuacao = 0;   
    }
    return 0;
}


