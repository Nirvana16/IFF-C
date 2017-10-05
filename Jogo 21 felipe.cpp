#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//Por Felipe Franzes
//e Nikolas Terra Sales

void sleep(clock_t wait)
{
     //funcao apenas para fazer o pc esperar um pouco antes de jogar as respostas na tela
     //para criar um clima :P
     int i=0;
     clock_t goal = wait + clock();
     while ( goal > clock())
     {
           //waiting
     }
}

int aleatorio()
{
    int x=0;
    //gera um numero aleatorio entre 0 e 10
    x = ((rand()%10)  +1);  
    return x;
}
int jogador()
{
    int total=0,i=0,go=0;
    do
    {
        i=aleatorio();
        total+=i;
        printf("Numero sorteado: %d, total de pontos: %d\n",i,total);
        if ( total > 21)
        {
             printf("Voce perdeu Computador ganhou\n");
             return -1;
        }
        printf("Deseja outra carta (1-sim, 2-nao): ");
        scanf("%d",&go);
        printf("\n");
    } while ( go == 1);
    return total;
}
int computador(int cheat)
{
    int total=0,i=0;
    do
    {
        i=aleatorio();
        total+=i;
        sleep(1000); //sleep de 1sec Criando o suspense...
        printf("Numero sorteado: %d, total de pontos: %d\n",i,total);
        if ( total > 21)
        {
             printf("Computador Perdeu Voce Ganhou\n");
             return -1;
        }
        if (total > cheat)
        {
              // para se ja conseguiu um valor > que o do Jogador exemplo 10 > 5
              return total;
        }
        if (( total == cheat) && (total > 16))
        {
              //situacao em q o pc empata com o player
              // e a chances de conseguir um valor que não passe de 21 e < 50%
              return total;
        }
        if (total == 21)
        {
              //se for igual a 21 retorna VALOR MAXIMO
              return total;
        }
    } while ( total < 21);
    return total;
}    
    
    
int main()
{
    int count = 1,tpc=0,tplayer=0,continua=1,pc=0,player=0;
    //start
    srand(time(NULL));
    do
    {
         system("Cls"); // executando um clear
         printf("-----------Jogo n %d-----------\n",count);
         printf("Placar:\n");
         printf("Voce: %d\n",tplayer);
         printf("PC: %d\n",tpc);
         printf("\n");
         printf("--:: Sua Vez de Jogar::--\n");
         player = jogador();
         if (player > 0 )
         {
              printf("--:: Computador jogando::--\n");
              pc = computador(player);
              if ( pc == -1)
              {
                   tplayer++;
              }
              else
              {
                  if ( pc == player)
                  {
                       printf("Empate\n");
                       printf("Ninguem ganha ponto\n");
                  }
                  if ( player > pc)
                  {
                       printf("Voce Ganhou\n");
                       tplayer++;
                  }
                  if (player < pc)
                  {
                       printf("Voce Perdeu Computador Ganhou\n");
                       tpc++;
                  }
              }
         }
         else
         {
             tpc++;
         }     
         printf("Deseja jogar novamente (1-sim 2-nao)");
         scanf("%d",&continua);
         printf("\n");
         count++;
    } while ( continua == 1);
         
    printf("Por Felipe Franzes\n");     
    printf("e Nikolas Terra Sales");
    getch();
}
