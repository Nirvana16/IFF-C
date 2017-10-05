#include <stdio.h>
#include <conio.h>

int main (){
    int contador = 1;
    float valor, totalVenda, dinheiroPago, totalDoDia = 0;
    printf ("---Lojas Tabajaras---\n");
    do {
        contador = 1;
        totalVenda = 0;
      do {
         printf ("Produto %d (R$): ");
         scanf ("%f", &valor);
         totalVenda += valor;
         contador ++;
}   while (valor != 0);
    totalDoDia += totalVenda;
    printf ("Total de Vendas: R$ %.2f \n", totalVenda);
    printf ("Dinheiro Pago: ");
    scanf ("%f", dinheiroPago);
    printf("Troco: Rs %.2f", dinheiroPago - totalVenda);
    printf ("(1) Registrar outra compra ou (2) Fechar Caixa: ");
    scanf ("%d", &opcao);
    }while (opcao == 1);
    
getch();
}
        
