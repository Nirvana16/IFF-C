#include <stdio.h>
#include <conio.h>
#include <locale.h>

//-------------------------------- Enunciado --------------------------------

//2- Fa�a um programa que solicite o nome do usu�rio e o saldo da conta banc�ria. 
//Ap�s, ele exibir� o menu abaixo: 

//Conta Corrente de _________ 

//1- Ver Saldo da Conta 
//2- Fazer Dep�sito 
//3- Fazer Saque 
//4- Sair 

//Op��o desejada:  
//Obs. 01: N�o ser�o aceitos dep�sitos nem saques com valor 0 ou negativos. 
//Obs. 02: N�o ser� aceito sacar um valor maior que a quantidade na conta. 
//Obs. 03: O programa finaliza quando o usu�rio marcar a op��o 4.
	
	
//-------------------------------- Resolu��o --------------------------------

int main () {
	setlocale(LC_ALL, "Portuguese");

	char cliente[30];
	int opcao, saldo, deposito, saque, saldo_final;
	
	
	printf ("Digite seu nome: ");
	gets (cliente);
	printf ("Digite o saldo da sua Conta Banc�ria: ");
	scanf ("%d", &saldo);
	
	
	if (saldo > 0) 
	{
		
    printf ("\n");
    printf ("--------------------------------------------------------------\n");
    printf ("--------------------------------------------------------------\n");
    printf ("\n");

	
	printf ("Conta corrente de: || %s ||\n \n", cliente);
	
	printf ("Segue abaixo as op��es, digite ap�s aquela que voc� precisa:\n");
	
	//Menu
	printf ("1- Ver Saldo da Conta. \n");
	printf ("2- Fazer Dep�sito. \n");
	printf ("3- Fazer Saque. \n");
	printf ("4- Sair. \n \n");
	
	printf ("--------------------------------------------------------------\n");
	printf ("\n");


	//Escolher as op��es
	printf ("Ent�o, qual op��o voc� escolhe: ");
	scanf ("%d",&opcao);
	printf ("\n");
	printf ("--------------------------------------------------------------\n \n");

	switch(opcao)
	{
		case 1:
        printf ("O saldo da sua conta �: %d", saldo);
        break;
        
        
        case 2:
        printf ("Digite quanto voc� quer depositar: ");
        scanf ("%d",&deposito);
        printf ("O seu novo saldo �: %d", saldo + deposito);
        break;
        
        
        case 3:
        printf ("Digite quanto voc� quer sacar: ");
        scanf ("%d",&saque);
        
    	if (saldo > saque)
    	{
		printf ("Aguarde alguns instantes... Estamos processando a opera��o.\n");
		printf ("Pode retirar o dinheiro!\n");
		saldo_final = saldo - saque;
		printf ("\n");
		printf ("Seu novo saldo �: %d", saldo_final);	
			
		}
		
		else
		{
		printf ("Voc� n�o tem saldo suficiente, volte mais tarde!");	
		}
    
        break;
        
        
        case 4:
        printf ("Volte sempre!");
        break;
        
        
        
        default:
        printf ("Op��o inv�lida");
		
	
	
	} //Chave do switch

	} //Chave do if do saldo ser positivo!
	
	
	else
	{
		printf ("\n");
		printf ("--------------------------------------------------------------\n \n");
		printf ("O saldo n�o � positivo... FIM! ");
	}
	
	

	getch();  

} //Chave da fun��o principal.

