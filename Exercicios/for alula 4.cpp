#include <stdio.h>
#include <conio.h>

int main (){
    float temperatura, somaTemperaturas, maior, menor;
    int i;
    
    for (i = 0 ; i<=23 ; i ++){
        printf ("Digite a temperatura da hora %d: \n",i);
        scanf ("%f", &temperatura);
        somaTemperaturas += temperatura;
        if (i==0) {
           maior = temperatura;
           menor = temperatura;
    }
    else if (temperatura > maior)
         maior = temperatura;
    else if (temperatura < menor)
         menor = temperatura;
         }
    printf ("Media do dia: %.1f", somaTemperaturas / 24);
    printf ("Maxima do dia: %.1f", maior);
    printf ("Minima do dia %.1f", menor);
    
getch ();  
}
