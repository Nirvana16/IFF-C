#include <stdio.h>
#include <conio.h>

//-------------------------------- Enunciado --------------------------------

//3- Fa�a um Programa que pe�a os 3 lados de um tri�ngulo. O programa dever� informar se os
//valores podem ser um tri�ngulo. Indique, caso os lados formem um tri�ngulo, se o mesmo �:
//equil�tero, is�sceles ou escaleno. 

//Dicas:
//Tr�s lados formam um tri�ngulo quando a soma de quaisquer dois lados for maior que o
//terceiro; 
//Tri�ngulo Equil�tero: tr�s lados iguais;
//Tri�ngulo Is�sceles: quaisquer dois lados iguais; 
//Tri�ngulo Escaleno: tr�s lados diferentes;


//-------------------------------- Resolu��o --------------------------------

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
