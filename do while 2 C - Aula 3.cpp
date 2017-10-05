#include <stdio.h>
#include <conio.h>

int main () {
    int opcao;
    float saldo, valor;
    char nome [30];
    printf ("Digite seu nome: \n");
    gets (nome);
    printf ("Digite o saldo da sua conta: \n");
    scanf ("%f", &saldo);
    do {  
       printf ("Conta corrente de %s com saldo R$ %.2f \n", nome);
       printf ("1- Fazer deposito \n");
       printf ("2- Fazer saque \n");
       printf ("3- Opcao desejada: ");
       scanf ("%d", &opcao);
    }  
       switch (opcao) {
              case 1:
                   printf("Digite o valor do deposito")
                   scanf ("%f", %valor);
                   if (valor > 0)
                      saldo += valor;
                      printf ("\nDeposito efetuado com sucesso.\n\n");
              }
            else {
                        printf ("\nValor Invalido de deposito\n\n");

}
break;
      case 2:
           printf("Digite o valor do deposito")
           scanf ("%f", %valor);
                 if (valor > 0 && valor <= saldo){
                 saldo -= valor;
                 printf ("\nSaque efetuado com sucesso.\n\n");
              }
                 else {
                      printf ("\nValor Invalido de saque\n\n");

}
break;
      case 3:
           printf ("Nosso banco agradece a preferencia o/")
break;
default:
           printf ("Opcao invalida!\n")
           }
           }while (opcao != 3);
getch ()
