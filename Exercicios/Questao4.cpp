#include <stdio.h>
#include <conio.h>
//4- Um posto está vendendo combustíveis com a seguinte tabela de descontos:
//Álcool:
// até 20 litros, desconto de 3% por litro
// acima de 20 litros, desconto de 5% por litro
//Gasolina:
// até 20 litros, desconto de 4% por litro
// acima de 20 litros, desconto de 6% por litro
//Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da
//seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se
//que o preço do litro da gasolina é R$ 2,98 o preço do litro do álcool é R$ 2,30.


int main () {
    float numeroLitros, totalPagar;
    char combustivel;
    
    printf("Digite o combustivel  (A-Alcool, G-Gasolina):");
    scanf("%c", &combustivel);
    printf("Digite a quantidade de litros:");
    scanf("%f", &numeroLitros);
    if (combustivel =='A' || combustivel =='a') {  //Char tem de usar aspas simples  || = OR em C
                     if (numeroLitros < 20) // como só tem 1 comomando nao precisa de chaves
                                      totalPagar = (2.3 - (2.3*0.03)) * numeroLitros;
                     else
                         totalPagar = (2.3 - (2.3*0.05)) * numeroLitros;
    }
    else if (combustivel =='G' || combustivel =='g') { 
                     if (numeroLitros < 20) 
                                      totalPagar = (2.98 - (2.98*0.04)) * numeroLitros;
                     else
                         totalPagar = (2.98 - (2.98*0.06)) * numeroLitros;
    }
    printf("Abastecer %.1f litros de %c tera que pagar R$ %.2f", numeroLitros, combustivel, totalPagar); // .1 ou .2 antes do f é a quantidade casas
    getch();
}
