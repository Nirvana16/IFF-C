#include <stdio.h>
#include <conio.h>


int main () {
    FILE *arq;
    char frase [200];

    arq = fopen("frases.txt", "r");


    while (!feof(arq)){
        fgets(frase,200,arq);
        printf("Frase no arquivo: %s\n", frase);


    }
    fclose(arq);
    getch();
}

