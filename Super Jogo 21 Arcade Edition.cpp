// -------------------------------- IFF - Professor: Vinicius Barcelos
// -------------------------------- Alunos:
// -------------------------------- Danilo Azevedo e Matheus Manhães


// Bib padrões -------------------------------------------------
#include <time.h> // Para brincar com  o Rand
#include <windows.h> // Pra limpar a tela
#include <conio.h> // Para usar o getch();
#include <stdio.h> // Porque C tem de ter
#include <stdlib.h> // Porque sim


//Que os jogos começem! --------------------------------------------------

// Funções --------------------------------------------------------------------------------

void sleep(clock_t wait) //funcao apenas para fazer o pc esperar um pouco
{
   int i=0;
     clock_t goal = wait + clock();
     while ( goal > clock())
     {
           //waiting
     }
}


int aleatorio()  //gera um numero aleatorio entre 0 e 10
{
    int sorteiro=0;

    sorteiro = ((rand()%10)  +1);
    return sorteiro;
}

int humano() // Ela que ira fazer a jogada do  jogador
{
    int total=0,i=0,escolha=0;
    do
    {
        i=aleatorio(); // Uma função dentro de outra função que sera chamda na função principal!
        total+=i;
        printf("O Numero sorteado foi: %d, O Total de pontos eh: %d\n",i,total);
        if ( total > 21) {
             printf("Voce perdeu Computador ganhou\n");
             return -1;
        }
        printf("Deseja outra carta <1-SIM / 2-nao>: ");
        scanf("%d",&escolha);
        printf("\n");
    } while ( escolha == 1);
    return total;
}
int computador(int cheat) //Função ppara fazer o computador roubar vendo o numero do humano, caçaniquel
{
    int total=0,i=0;
    do
    {
        i=aleatorio();
        total+=i;
        sleep(1000); // para que o computador jogue de vagar
        printf("O Numero sorteado foi: %d, O Total de pontos eh: %d\n",i,total);
        if ( total > 21){
             printf("Computador Perdeu Voce Ganhou\n");
             return -1;
        }
        if (total > cheat){

              return total;
        }
        if (( total == cheat) && (total > 16)){


              return total;
        }
        if (total == 21){

              return total;
        }
    } while ( total < 21);
    return total;
}


int main() // Funcao principal
{
    int contador = 1,totalpc=0,jogador1=0,continua=1,pc=0,player=0;

    srand(time(NULL));
    do    {
         system("Cls"); // executando um limpa tela
         printf("-----------Partida numero: %d-----------\n",contador);
         printf("              Pontuacao:                   \n \n");
         printf("       Humano : %d Computador: %d \n",jogador1, totalpc );
         printf("\n");
         printf("---------- SUA VEZ ----------------------\n");
         player = humano();
         if (player > 0 ){
              printf("--:: Computador jogando::--\n");
              pc = computador(player);
              if ( pc == -1){
                   jogador1++;
              }
              else{
                  if ( pc == player){
                       printf(" EMPATOU \n");

                  }
                  if ( player > pc){
                       printf("PARABENS VOCE GANHOU\n");
                       jogador1++;
                  }
                  if (player < pc){
                       printf("Voce Perdeu Computador Ganhou\n");
                       totalpc++;
                  }
              }
         }
         else{
             totalpc++;
         }
         printf("Deseja jogar novamente (Pressiona 1 para SIM ou 2 Para NAO");
         scanf("%d",&continua);
         printf("\n");
         contador++;
    } while ( continua == 1);

    getch();
}
