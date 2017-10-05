#include <stdio.h>
#include <conio.h>

int main (){
    float numeroLitros, totalPagar;
    char combustivel;
    
    printf("Digite o combustivel (A-alcool, G-gasolina): ");
    scanf ("%c",&combustivel);
    printf ("Digite a quantidade em litros ");
    scanf ("%.2f", &numeroLitros);
    if (combustivel == 'A' || combustivel == 'a'){
       if (numeroLitros < 20)
          totalPagar = (2.3 - (2.3 * 0.0.3))* numeroLitros;
       else
           totalPagar = (2.3 - (2.3 * 0.0.5))* numeroLitros;}
    else if (combustivel == 'G' || combustivel == 'g'){
         if (numeroLitros < 20)
            totalPagar = (2.98 - (2.98 * 0.04))* numeroLitros;
         else   
            totalPagar = (2.98 - (2.98 * 0.06))* numeroLitros;}
     printf ("Abastecer %.2f litros de %c tera que pagar R$ %.2f", numeroLitros, combustivel, totalPagar);
     
    
     getch();
                
}
