#include<stdio.h>
#include<conio.h>

void selection_sort (int vetor[],int max) {
  int i, j, min, aux;

  for (i = 0; i < (max - 1); i++) {
    /* O minimo é o primeiro número não ordenado ainda */
    min = i;
    for (j = i+1; j < max; j++) {
      /* Caso tenha algum numero menor ele faz a troca do minimo*/
      if (vetor[j] < vetor[min]) {
   min = j;
      }
    }
    /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
  /* Imprime o vetor ordenado
  for (i = 0; i < max; i++) {
    printf ("%d ",vetor[i]);
  }
  printf ("\n");*/
}

void insertionSort(int V[], int tam)
{
        int i, aux;

        for(i = 1; i < tam; i++){
                while((i != 0) && (V[i] < V[i - 1])) {

                        aux = V[i];
                        V[i] = V[i - 1];
                        V[i - 1] = aux;
                        i--;
                }
        }
}

void main () {
    int i, vetor[10]={3,1,9,4,5,2,4,70,8,6}; //valores quaisquer

    printf(" SE LIGA NO VETOR INICIAL \n");
    for (i=0; i<10; i++){
            printf("%i ",vetor[i]);
    }

    selection_sort(vetor,10);
    printf("\n \n");

    printf("Agora veja como fica com o SELECTION \n \n");
    for (i=0; i<10; i++){
            printf("%i ",vetor[i]);
    }

    insertionSort(vetor,10);
    printf("\n \n");

    printf("Agora veja como fica o INSERTION: \n \n");
    for (i=0; i<10; i++){
            printf("%i ",vetor[i]);
    }
    getch();
}
