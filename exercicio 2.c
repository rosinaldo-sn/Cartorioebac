#include <stdio.h>// Biblioteca de comunica��o com o usu�rio
#include <stdlib.h>// Biblioteca de aloca��os de espa�o em mem�ria 
#include <locale.h>// Biblioteca de aloca��es de texto por regi�o
#include <string.h>// Biblioteca de strings

//INICIO DA COLETA DE DADOS DE USUARIOS 
int registro()
{
//CRIA�AO DE VARIAVES 
char cpf[100];
char nome[100];
char sobrenome[100];
char cargo[100];
char arquivo[900];
// FIMDA CRIA�AO DE VARIAVES

printf("digite o cpf a ser cadastrado:");
scanf("%s",cpf);// COMANDO REFERENTE A BIBLIOTECA DE STRING/VARIAVES 

strcpy(arquivo,cpf);// responsavel por copiar os valores das string

FILE *file;// cria o arquivo
file=fopen(arquivo,"w");// crira o arquivo
fprintf(file,cpf);// armazena no banco de dados "arquivo criado"
fclose(file);//fecha o arquivo 
 
 file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s",nome);
	
	file = fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
		
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	system("cls");
	
   int opcao=0;// Definindo valores 
   int laco=1;
   
	printf("continuar adicionado?\n");
	printf("1- sim\n");
	printf("2- n�o\n");
	scanf("%d",&opcao);
	
	system("cls");
	switch(opcao)
		{   case 1:
			registro();
            break;
			
			case 2:
			system("pause");
			break;
			}
	
	
    
//FIM DA COLETA DE DADOS DE USU�RIOS.
}
// INICIO DA CONSILTA DE DADOS DE USU�RIOS
int consulta()
{ 
setlocale(LC_ALL, "Portuguese");//refente a biblioteca de texto reginal.
    //CRIA�AO DE VARIAVES
	char cpf[100];
	char conteudo[900];
	// FIM DAS VARIAVES
	 
	printf("digite o CPF a ser consultado:");
	scanf("%s",cpf);
	
	FILE *file;//FUN�AO PARA ABRI E LER O ARQUIVO SELECIONADO
	file = fopen(cpf,"r");
	
	if(file == NULL)// UTILIZADO PARA CASO O PROGAMA NAO ACHE O ITEN SOLICITADO.
	{
		printf("n�o foi possivel abrir o arquivo, nao localizado!.\n\n");
	}
	while(fgets(conteudo,900,file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio:");
		printf("%s,", conteudo);
		printf("\n\n");
	}
   int opcao=0;// Definindo valores 
   int laco=1;
   
	printf("continuar consultando?\n");
	printf("1- sim\n");
	printf("2- n�o\n");
	scanf("%d",&opcao);
	
	system("cls");
	switch(opcao)
		{   case 1:
			consulta();
            break;
			
			case 2:
			system("pause");
			break;
			}
	//FIM DA CONSULTA DE DADOS.	
}

// INICIO DA FUN��O DELETA USU�RIOS
int deletar()
{//CRIA�AO DE VARIAVES 

	char cpf[100];
	
	//VARIAVES 
	printf("Digite o cfp do usu�rio a ser deletado:");
	printf("\n\n");
	scanf("%s",cpf);
	printf("\n\n");
	
	remove(cpf);
	
	FILE *file; //FUN�AO PARA ABRI E LER O ARQUIVO SELECIONADO
	file = fopen(cpf,"r");

	if(file == NULL)
	{
	 printf("O usu�rio n�o encontrado\n\n\n");
	}
	
	int opcao=0;// Definindo valores 
    int laco=1;
   
	printf(" continuar deletando?\n");
	printf(" 1- sim\n");
	printf(" 2- n�o\n");
	scanf("%d",&opcao);
	
	system("cls");
	
	switch(opcao)
		{   case 1:
			deletar();
            break;
			
			case 2:
			system("pause");
			break;
		}
	// FIM DA FUN��O DE DELETAR 
}
// FACE DO PROGRAMA.

int main()// Comando para que as linhas de codigos funcione
{
   int opcao=0;// Definindo valores 
   int laco=1;
   char senhadigitada[10]="a";
   int comparacao;
   
   
   printf("==== Cart�rio da EBAC ====\n\n");
   printf("==== Login de adinistrador!\n\n Digite sua senha: ");
   scanf("%s",senhadigitada);
   
   comparacao = strcmp (senhadigitada,"admin");
   
   if(comparacao==0);
    {    
        system("cls");
         for(laco=1;laco=1;)
        {
	 	
	 	
	      system("cls");// Comando para manter a interface mais limpa
	    
		
		  setlocale(LC_ALL, "Portuguese");// Definindo a linguagem
	
	      printf("==== Cart�rio da EBAC ====\n\n");// Inicio do menu
	      printf("Escolha a op��o desejada no menu:\n\n");
	      printf("\t1-Registro de nomes\n");
	      printf("\t2-Consulta de nomes\n");
	      printf("\t3-Excluz�o de nomes\n");
	      printf("\t4-Sair do sistema\n\n\n");
	      printf("op��o: ");
		  // Fim do menu 

	      scanf("%d", &opcao);// fun��o de escolha do menu 
	
          system("cls"); 
          switch(opcao)
		    {   case 1:
		        registro();// FUN�OES DO MENU 
                break;
			 
                case 2:
                consulta();// FUN�OES DO MENU 
			    break;
			 
                case 3:
                deletar();// FUN�OES DO MENU 
                break;
            
                case 4:
                printf("Obrigado por usar o sistema!\n\n");
                return 0;
                break;
            	
                default:printf("\t==Esta op��o n�o existe==\n\n");// ALERTA PARA O USUARIO
                system("pause");
                break;
		    }
	    }
	}
	    else
    printf("sinha incorreta!")
	
}

