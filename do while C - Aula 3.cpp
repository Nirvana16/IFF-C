#include <stdio.h>
#include <conio.h>

int main () {
    int numero, quantidadeNumeroDigitados = 0, somaNumeros = 0, maior = 0, menor = 0;
    do {
    printf("Digite um mumero"); 
    scanf ("%d", &numero);
    if (numero > 0) {
               quantidadeNumeroDigitados++;
               somaNumeros += numero;
               if (quantidadeNumeroDigitados == 1){
                  maior = numero;
                  menor = numero;
                  }
               else   {
                      if (numero > maior)
                         maior = numero;
                      if (numero < menor)
                         menor = numero;
                         }
                         }
}   while (numero > 0);

    printf ("A quantidade de numeros digitados foi: %d \n", quantidadeNumeroDigitados);
    printf ("A soma dos numeros digitados foi: %d \n", somaNumeros);
    printf ("A media numeros eh de: %.1f \n", (float) somaNumeros / quantidadeNumeroDigitados);
    printf ("O maior numero eh de: %d \n", maior);
    printf ("O menor numero eh de: %d \n", menor); 

getch ();

}
