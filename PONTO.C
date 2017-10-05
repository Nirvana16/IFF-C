#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
//------------------------------------------------------------


//------------------------------------------------------------
void adicionarRandVetor(int vetor[])
{
    srand(time(NULL));
    for (int i=0; i<15; i++)
    {
        vetor[i] = (rand()%100);
    }
}
//------------------------------------------------------------
void adiconarNumeroVetor(int vetor[], int numero)
{
    for (int i=0; i<15; i++)
    {
        if (vetor[i] == 0)
        {
            vetor[i] = numero;
            break;
        }
    }
}
//------------------------------------------------------------
void removerNumeroVetor(int vetor[], int numero)
{
    for (int i=0; i<15; i++)
    {
        if (numero == vetor[i])
        {
            vetor[i] = 0;
            break;
        }
    }

}
//------------------------------------------------------------
void SubstituirNumeroVetor (int vetor[], int numero, int substituto)
{
    int auditor = 0;
    for (int i=0; i<15; i++)
    {
        if (vetor[i] == numero)
        {
            vetor[i] =  substituto;
            auditor = 1;
        }
    if (auditor == 0)
    {
        printf("\n ******** Esse Numero não existe dentro desse vetor o babaca ******** \n \n");
        break;
    }
    }

}
//------------------------------------------------------------
void mediaVetor(int vetor[])
{
    int total = 0, auditor = 0;
    float media;
    for (int i=0; i<15; i++)
    {
        if (vetor[i] != 0)
        {
            total+= vetor[i];
            auditor = 1;
        }
        else
        {
            printf(" \n ************* O Vetor esta Vazio seu Imbecil! \n");
            break;
        }
    }
    if (auditor == 1)
    {
        media = (total/15);
        printf("\n A Media do bagulho eh %f ", media);
        printf("\n");
    }
}

//------------------------------------------------------------
void maiorVetor(int vetor[])
{
    int maior = 0;

    for (int i=0; i<15; i++)
    {
        if (vetor[i] >= maior)
        {
            maior = vetor[i];
        }
    }
    printf("\n O Maior numero do bagulho eh %i ", maior);
    printf("\n");

}
//------------------------------------------------------------
void menorVetor(int vetor[])
{
    int menor = 99999;

    for (int i=0; i<15; i++)
    {
        if (vetor[i] <= menor)
        {
            menor = vetor[i];
        }
    }
    printf("\n O menor numero do bagulho eh %i ", menor);
    printf("\n");
}
//------------------------------------------------------------
void removerRep(int vetor[])
{

	for(int i=0 ; i<15 ; i++)
	{
		for(int j=0 ; j<15 ; j++)
		{
			if(i != j)
			{
				if ( vetor[i]== vetor[j])
				{
					vetor[j] = 0;
				}
			}
		}
	}
}
//------------------------------------------------------------

//------------------------------------------------------------
//------------------------------------------------------------
//------------------------------------------------------------
int main (void)
{
    int vetorInteiro[15] = {}, opcao, numero, numeroSubstituto;

    do
    {
    for (int i=0; i<15; i++)
    {
        printf("%i | ", vetorInteiro[i]);
    }
    //------------------------------------------------------------
    printf("\n\n1- Adicionar numero no vetor\n");
	printf("2- Remover numero do vetor\n");
	printf("3- Substituir um numero por outro numero\n");
	printf("4- Media dos numeros\n");
	printf("5- Maior dos numeros\n");
	printf("6- Menor dos numeros\n");
	printf("7- Remover repetidos\n");
	printf("8- Ordenar o vetor\n");
	printf("9- Sair\n");
	printf("0 - LIMPAR TELA \n");
	printf("10 - Add Num rand vector \n");
  	printf("Opcao desejada: ");
	scanf("%d", &opcao);
	//------------------------------------------------------------
	switch(opcao)
	{
        case 10:
            adicionarRandVetor(vetorInteiro);
            break;
        case 1:
            printf("\nDigite o numero: ");
            scanf("%d", &numero);
            adiconarNumeroVetor(vetorInteiro, numero);
            break;
        case 2:
            printf("\nDigite o numero: ");
            scanf("%d", &numero);
			removerNumeroVetor(vetorInteiro, numero);
			break;
        case 3:
			printf("Digite o numero que deseja substituir: ");
			scanf("%d", &numero);
			printf("Digite o numero que voce deseja adicionar: ");
			scanf("%d", &numeroSubstituto);
			SubstituirNumeroVetor(vetorInteiro, numero, numeroSubstituto);
			break;
        case 4:
            mediaVetor(vetorInteiro);
            break;
        case 5:
            maiorVetor(vetorInteiro);
            break;
        case 6:
            menorVetor(vetorInteiro);
            break;
        case 7:
            removerRep(vetorInteiro);
            break;


	}


    }while(opcao != 9);

    getch();
}
