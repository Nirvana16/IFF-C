#include <stdio.h>
#include <conio.h>
#include <locale.h>

//-------------------------------- Enunciado --------------------------------

//2- Faça um programa que solicite o nome do usuário e o saldo da conta bancária. 
//Após, ele exibirá o menu abaixo: 

//Conta Corrente de _________ 

//1- Ver Saldo da Conta 
//2- Fazer Depósito 
//3- Fazer Saque 
//4- Sair 

//Opção desejada:  
//Obs. 01: Não serão aceitos depósitos nem saques com valor 0 ou negativos. 
//Obs. 02: Não será aceito sacar um valor maior que a quantidade na conta. 
//Obs. 03: O programa finaliza quando o usuário marcar a opção 4.
	
	
//-------------------------------- Resolução --------------------------------

int main () {
	setlocale(LC_ALL, "Portuguese");

	char cliente[30];
	int opcao, saldo, deposito, saque, saldo_final;
	
	
	printf ("Digite seu nome: ");
	gets (cliente);
	printf ("Digite o saldo da sua Conta Bancária: ");
	scanf ("%d", &saldo);
	
	
	if (saldo > 0) 
	{
		
    printf ("\n");
    printf ("--------------------------------------------------------------\n");
    printf ("--------------------------------------------------------------\n");
    printf ("\n");

	
	printf ("Conta corrente de: || %s ||\n \n", cliente);
	
	printf ("Segue abaixo as opções, digite após aquela que você precisa:\n");
	
	//Menu
	printf ("1- Ver Saldo da Conta. \n");
	printf ("2- Fazer Depósito. \n");
	printf ("3- Fazer Saque. \n");
	printf ("4- Sair. \n \n");
	
	printf ("--------------------------------------------------------------\n");
	printf ("\n");


	//Escolher as opções
	printf ("Então, qual opção você escolhe: ");
	scanf ("%d",&opcao);
	printf ("\n");
	printf ("--------------------------------------------------------------\n \n");

	switch(opcao)
	{
		case 1:
        printf ("O saldo da sua conta é: %d", saldo);
        break;
        
        
        case 2:
        printf ("Digite quanto você quer depositar: ");
        scanf ("%d",&deposito);
        printf ("O seu novo saldo é: %d", saldo + deposito);
        break;
        
        
        case 3:
        printf ("Digite quanto você quer sacar: ");
        scanf ("%d",&saque);
        
    	if (saldo > saque)
    	{
		printf ("Aguarde alguns instantes... Estamos processando a operação.\n");
		printf ("Pode retirar o dinheiro!\n");
		saldo_final = saldo - saque;
		printf ("\n");
		printf ("Seu novo saldo é: %d", saldo_final);	
			
		}
		
		else
		{
		printf ("Você não tem saldo suficiente, volte mais tarde!");	
		}
    
        break;
        
        
        case 4:
        printf ("Volte sempre!");
        break;
        
        
        
        default:
        printf ("Opção inválida");
		
	
	
	} //Chave do switch

	} //Chave do if do saldo ser positivo!
	
	
	else
	{
		printf ("\n");
		printf ("--------------------------------------------------------------\n \n");
		printf ("O saldo não é positivo... FIM! ");
	}
	
	

	getch();  

} //Chave da função principal.

