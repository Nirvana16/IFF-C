#include <stdio.h>
#include <conio.h>

 //1-Criar um vetor de inteiro com 15 posições.
//2-Colocar o valor 0(zero) em todas as posições.
//3-Mostrar o menu abaixo.

// 1-Adicionar numero no vetor.
// 2-Remover numero do vetor.
// 3- substituir um numero por um outro numero;
// 4-media dos números
// 5-maior dos números
// 6- menor dos números
// 7- remover repetidos
// 8- ordenar o vetor
// 9-Sair

void removerRepetidos(int vetor[]){

	for(int i=0 ; i<15 ; i++)
	{
		for(int x=0 ; x<15 ; x++)
		{
			if(i != x)
			{
				if ( vetor[i]== vetor[x])
				{
					vetor[x] = 0;
				}
			}
		}
	}
}


//******************************************************************************
void mediaNumeros(int vetor[]){
	int cont=0, soma=0;
	float media;

	for(int i=0 ; i<15 ; i++)
	{
		soma += vetor[i];
		if(vetor[i] != 0)
			cont++;
	}
	if (cont != 0){
		media = soma/cont;
		printf("Media: %.2f\n", media);
	}
	else
		printf("Vetor vazio!!!\n\n");
}
//******************************************************************************
void substituirNumero(int vetor[], int num, int num2){
	int verificador = 0;
	for(int i=0 ; i<15 ; i++)
	  {
	    	  if (vetor[i] == num)
			  {
			      	  vetor[i] = num2;
			      	  verificador = 1;
			 }
	  }
	if ( verificador == 0)
	  printf("O numero digitado nao existe no vetor!\n\n");
}
//******************************************************************************
void zerarVetor(int vetor[]){
	for(int i=0 ; i<15 ; i++){
			vetor[i] = 0;
	}
}
//******************************************************************************
void adicionarNumero(int vetor[], int num){

	  for(int i=0 ; i<15 ; i++)
	  {
	    	  if (vetor[i] == 0){
			      	  vetor[i] = num;
			      	  break;
			}
	  }
}

//******************************************************************************
void removerNumero(int vetor[], int num){

	  for(int i=0 ; i<15 ; i++)
	  {
	    	  if (vetor[i] == num){
			      	  vetor[i] = 0;
			  }
	  }
}
//******************************************************************************
int main(){
	int vetor[15], opcao, num, num2;
	float media;

	zerarVetor(vetor);

	do{
		printf("Vetor: ");
		for(int i=0 ; i<15 ; i++)
			printf("%d|", vetor[i]);
		printf("\n\n1- Adicionar numero no vetor\n");
		printf("2- Remover numero do vetor\n");
		printf("3- Substituir um numero por outro numero\n");
		printf("4- Media dos numeros\n");
		printf("5- Maior dos numeros\n");
		printf("6- Menor dos numeros\n");
		printf("7- Remover repetidos\n");
		printf("8- Ordenar o vetor\n");
		printf("9- Sair\n");
  		printf("Opcao desejada: ");
	 	scanf("%d", &opcao);

		switch(opcao){
					  		case 1:
							  	 	printf("\nDigite o numero: ");
									scanf("%d", &num);
							  	 	adicionarNumero(vetor, num);
							  	 	break;
							case 2:
								   	printf("\nDigite o numero: ");
									scanf("%d", &num);
							  	 	removerNumero(vetor, num);
							  	 	break;

							case 3:
									printf("Digite o numero que deseja substituir: ");
									scanf("%d", &num);
									printf("Digite o numero que voce deseja adicionar: ");
									scanf("%d", &num2);
							  	 	substituirNumero(vetor, num, num2);
							  	 	break;
							case 4:
							  	 	mediaNumeros(vetor);
							  	 	break;
							/*case 5:
									maiorNumero(vetor);
									break;
							case 6:
									menorNumero(vetor);
									break;*/
							case 7:
									removerRepetidos(vetor);
									break;
							/*case 8:
									ordenarVetor(vetor);
									break;*/

							case 9:
									printf("Adeus!!!!");
									break;
							default:
									printf("Opcao indesejada\n");

		}

	}while(opcao != 9);
	getch();
}
