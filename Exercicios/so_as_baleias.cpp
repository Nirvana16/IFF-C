#include <stdio.h>
#include <conio.h>

int main () {
    char nome[30];
    float peso, altura, imc;
    
    
    printf ("Diga seu nome:");
    gets (nome);
    
    printf ("Diga sua altura:");
    scanf ("%f", &altura);
    
    printf ("Diga seu peso:");
    scanf ("%f" ,&peso);
    
    
    imc = peso/(altura * altura);
    
    printf ("O IMC de %s foi de %.1f.",nome, imc);
    
    
    if (imc < 18) {
       printf ("%s esta desnutrido.", nome, imc);
    }
    
    else if (imc >= 18 && imc < 25) {
           printf ("%s esta com peso normal.", nome);
    }
       
       
    else if (imc >= 25 && imc < 30) {
               printf ("%s esta com sobrepeso.", nome);
    }
        
        
    else if (imc >= 30) {
               printf ("%s esta obeso.", nome);
    }
    
    getch();
    
}
