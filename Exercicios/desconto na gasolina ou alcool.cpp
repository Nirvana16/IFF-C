#include<stdio.h>
#include<conio.h>

main(){
       char tipo;
       int qndd;
       float novo_preco, preco;
       
       printf("insira o tipo de combustivel desejado\n");
       scanf("%c",&tipo);
       printf("insira a quantidade do combustivel desejado\n");
       scanf("%d",&qndd);
       
       if (tipo == 'a'){
                preco = qndd*2.3;
                
                if (qndd< 20)
                          novo_preco = preco - ((3*preco)/100);
                else 
                          novo_preco = preco - ((5*preco)/100);
                printf("o valor a ser pago pelos %d litros de alcool sera: %.2f\n", qndd, novo_preco);}
       else if (tipo == 'g'){
                preco = qndd*1.98;
                if (qndd< 20)
                          novo_preco = preco - ((4*preco)/100);
                else 
                          novo_preco = preco - ((6*preco)/100);
                          printf("o valor a ser pago pelos %d litros de gasolina sera: %.2f\n", qndd, novo_preco);}
                else
                          printf("entrada invalida\n");
       
       getch();
       }
                
       