#include <stdio.h>
#include <conio.h>

//-------------------------------- Enunciado --------------------------------

// 1- As Organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus funcion�rios e lhe
//contataram para desenvolver o programa que calcular� os reajustes.
//Fa�a um programa que recebe o nome e o sal�rio de um funcion�rio. O programa deve calcular o
//reajuste segundo o seguinte crit�rio, baseado no sal�rio atual:
         //sal�rios at� R$ 600,00 (incluindo) : aumento de 20%
         //sal�rios entre R$ 600,00 e R$ 1000,00 : aumento de 15%
         //sal�rios entre R$ 1000,00 e R$ 1500,00 : aumento de 10%
         //sal�rios de R$ 1500,00 em diante : aumento de 5%

//Ap�s o aumento ser realizado, informe na tela:
       //O nome do funcion�rio;
       //O sal�rio antes do reajuste;
       //O percentual de aumento aplicado;
       //O valor do aumento;
       //O novo sal�rio, ap�s o aumento. 
       
       
//-------------------------------- Resolu��o --------------------------------

int main () {
    char nome[30];
    float bolsa_familia, reajuste, porc_aumento;
    
    printf ("Digite seu nome:");
    gets (nome);
    
    printf ("Digite o valor da sua Bolsa Familia:");
    scanf ("%f", &bolsa_familia);
    
    if (bolsa_familia <= 600) {
       porc_aumento = 0.20;
    }
    
    else if (bolsa_familia > 600 && bolsa_familia <= 1000) {
       porc_aumento = 0.15;
    }
    
    else if (bolsa_familia > 1000 && bolsa_familia <= 1500) {
       porc_aumento = 0.10;
    }
    
    else if (bolsa_familia > 1500) {
       porc_aumento = 0.05;
    }
    
    reajuste = (bolsa_familia * porc_aumento) + bolsa_familia;
    printf ("Seu antigo salario era de: %.f.\n", bolsa_familia);
    printf ("Seu novo salario e de: %.f.", reajuste);
    
    getch();     
}
