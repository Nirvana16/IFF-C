/*Criar um vetor int com 15 posicoes, colocar 0 em todas as posicoes, mostrar o */
/*menu abaixo:*/
/*1. Adicionar numero no vetor*/
/*2. Remover numero do vetor*/
/*3 - Substituir um número por outro*/
/*4 - Média dos numeros*/
/*9. Sair*/
/*Opcao desejada.*/

#include<stdio.h>
//#include<conio.h>

int main()
{
	int opcao = 0, vetor[15], i, numero;
	
	for (i = 0; i<15; i++)
	{
		vetor[i] = 0;
	}

	while (opcao != 9)
	{
		printf("Vetor");
		for (i=0; i<15; i++)
		{
			printf("%d | ", vetor[i]);
		}
		printf("------------- MENU ----------------");
		printf("1 - Adicionar numero no vetor");
		printf("2 - Remover numero do vetor");
		printf("9 - Sair");
		printf("Digite a opcao desejada");
		scanf("%d", &opcao);
		switch(opcao)
		{
			case 1:
				printf("Digite um nmero: ");
				scanf("%d", &numero);
				for (i=0; i<15; i++)
				{
					vetor[i] = numero;
				}
				break;

			case 2:
				if (vetor[i] != 0)
				{
					vetor[i] = 0
				}
				break;
		}
	}
		
	
















