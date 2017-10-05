#include <stdio.h>
#include <conio.h>

int main () {
    char nome[30];
    char sexo;
    printf ("Diga seu nome:");
    gets (nome);
    
    printf ("Digite o sexo:");
    scanf ("%c", &sexo);
    
    if (sexo == 'H' || sexo == 'h') {
         printf ("%s e Homem", nome);
             }
    else if (sexo == 'M' || sexo == 'm') {
         printf ("%s e Mulher", nome);
         }
    else {
         printf ("Assexuado xD");
         }
                  
         getch();
}
