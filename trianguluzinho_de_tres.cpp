#include <stdio.h>
#include <conio.h>

//-------------------------------- Enunciado --------------------------------

//3- Faça um Programa que peça os 3 lados de um triângulo. O programa deverá informar se os
//valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é:
//equilátero, isósceles ou escaleno. 

//Dicas:
//Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o
//terceiro; 
//Triângulo Equilátero: três lados iguais;
//Triângulo Isósceles: quaisquer dois lados iguais; 
//Triângulo Escaleno: três lados diferentes;


//-------------------------------- Resolução --------------------------------

int main () {
    float lado_tri1, lado_tri2, lado_tri3;
    
    printf ("Digite o valor do lado do triangulo:");
    scanf ("%f", &lado_tri1);
    
    printf ("Digite o valor do lado do triangulo:");
    scanf ("%f", &lado_tri2);
    
    printf ("Digite o valor do lado do triangulo:");
    scanf ("%f", &lado_tri3);
    
    
    if (lado_tri1 == lado_tri2 && lado_tri2 == lado_tri3 && lado_tri3 == lado_tri1) {
       printf ("O triangulo e Equilatero");
    }
    
    else if (lado_tri1 == lado_tri2 || lado_tri2 == lado_tri3 || lado_tri1 == lado_tri3) {
       printf ("O triangulo e Isosceles");
    }
    
    else if (lado_tri1 != lado_tri2 != lado_tri3) {
       printf ("O triangulo e Escaleno");
    }
       
    
    
    getch();  

}
