#include <stdio.h>
#include <conio.h>


//-------------------------------- Resolução --------------------------------

int main () {
    int n_dia_semana;
    
    printf ("Digite o o numero que representa o dia da semana:");
    scanf ("%i", &n_dia_semana);
    
    
    switch(n_dia_semana) {
          case 1:
          printf ("Hoje e domingo");
          break;
          
          case 2:
          printf ("Hoje e segunda");
          break;
          
          case 3:
          printf ("Hoje e terca");
          break;
          
          case 4:
          printf ("Hoje e quarta");
          break;
          
          case 5:
          printf ("Hoje e quinta");
          break;
          
          case 6:
          printf ("Hoje e sexta");
          break;
          
          case 7:
          printf ("Hoje e sabado");
          break;
               
          default:
          printf ("Esse dia nao existe");
          
          
          
          }
          
          getch();  
          
          }
