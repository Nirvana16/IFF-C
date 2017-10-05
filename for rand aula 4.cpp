#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main () {
    int numero;
    for (int i=1 ; 1 <= 12 ; i++) {
        numero = rand () % 4 + 1;
        printf ("Sorteado n. %d: %d \n", i, numero);
       getch ();
    }
getch ();
}
