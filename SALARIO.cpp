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

int main() {
    char nome[30];
    float salario;
    
    printf("Informe o Nome do Funcionario");
    gets (nome);
    
    printf("Digite o Valor do Salario");
    scanf ("%f", salario);
    
    float switch (salario) {
           case >= 600:
           salario = salario* 0.2;
           break;
           case < 600 {
           printf ("funciona");
           break;

                
           
