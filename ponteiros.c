#include<stdio.h>
#include<conio.h>
#include<windows.h>


void main(){
    int x = 10, z=20;
    int *y;
    y = &x;
    printf("O Valor de x eh: %d \n",x);
    printf("O endereco de x na RAM eh: %p \n\n", &x);
    printf("O Valor de Y eh: %d \n", *y);
    system("pause");
    //x = 25;
    y = &z;
    (*y)++;
    printf("O Valor de x eh: %d \n",x);
    //printf("O endereco de x na RAM eh: %p \n\n", &x);
    printf("O Valor de Y eh: %d \n", *y);

    system("pause");
    system("notepad");
}
