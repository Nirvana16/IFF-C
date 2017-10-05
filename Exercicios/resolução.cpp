#include<stdio.h>
#include<conio.h>

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


void zerarVetor(int vetor[]){
     for (int i=0; i<15; i++){
             vetor[i]=0;
     }
}

void adicionarNumero(int vetor[]){
         int numero;
         printf("Insira o numero desejado\n");
         scanf("%d",&numero);
         for (int i=0; i<15; i++){
             if(vetor[i]==0){
                            vetor[i]=numero;
                            break;
             }
         }
}

void removerNumero(int vetor[]){
     int numero;
         printf("Insira o numero desejado\n");
         scanf("%d",&numero);
         for (int i=0; i<15; i++){
             if(vetor[i]==numero){
                            vetor[i]=0;
                            break;
             }
         }
}

void substituirVetor(int vetor[]){
     int numero, numero2;
         printf("Insira o numero que deseja retirar\n");
         scanf("%d",&numero);
         printf("Insira o numero que deseja adicionar\n");
         scanf("%d",&numero2);
         for (int i=0; i<15; i++){
             if(vetor[i]==numero){
                            vetor[i]=numero2;
                            break;
             }
         }
}

float calcularMedia(int vetor[]){
      float media=0, acumulador=0;
      int cont=0;
      for (int i=0; i<15; i++){
             if(vetor[i]!=0){
                            cont++;
                            acumulador = acumulador + vetor[i];
             }
      }
      media = acumulador/cont;
      printf("a media e: %.2f", media);

}

void removerRepetidos(int vetor[]){
     for(int i=0; i<15; i++){
             for(int y=i+1; y<15; y++){
                     if (vetor[i]== vetor[y]){
                        vetor[y]=0;
                     }
             }
     }

}


main(){
       int vetor[15], opcao;
       zerarVetor(vetor);

    do{
       printf("vetor:\n");
       for(int i=0; i<15;i++){
            printf(" %d", vetor[i]);
        }
       printf("\n1- adicionar numero ao vetor\n");
       printf("2- remover numero do vetor\n");
       printf("3- substituir um numero por outro\n");
       printf("4- calcular a media\n");
       printf("7- remover repetidos\n");
       printf("9- sair\n");
       scanf("%d",&opcao);
       if (opcao==1)
          adicionarNumero(vetor);
       if (opcao==2)
          removerNumero(vetor);
       if (opcao==3)
          substituirVetor(vetor);
       if (opcao==4)
          calcularMedia(vetor);
       if (opcao==7)
          removerRepetidos(vetor);
    }while(opcao !=9);
}


