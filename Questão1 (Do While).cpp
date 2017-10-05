#include<stdio.h>
#include<conio.h>

main(){
       int numero, cont = 0, soma=0, maiorNumero, menorNumero;
       
       do{
           printf("insira um numero\n");
           scanf("%d",&numero);
           if (numero != 0){
              cont++;
              soma += numero;
              // a linha acima é a mesma coisa que esta: soma=soma+numero; haha
              if (cont ==1 ){
                       maiorNumero=numero;
                       menorNumero=numero;
              }
              else{
                       if (numero > maiorNumero)
                                  maiorNumero=numero;
                       if (numero < menorNumero)
                                  menorNumero=numero;          
              }}
       }while(numero >0);
       printf("a quantidade de numeros digitados foi: %d\n", cont);
       printf("a soma dos numeros digitados foi: %d\n", soma);
       printf("a media dos numeros digitados foi: %.2f\n",(float) soma/cont);
       printf("o maior numero digitado foi: %d\n",maiorNumero);
       printf("o menor numero digitado foi: %d\n",menorNumero);
       getch();
       }
       