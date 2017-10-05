#include<stdio.h>
#include<conio.h>


void calculaIRPF(float *renda)  {//colocar ponteiro voce coloca o asterisco
    if (*renda > 1710.29 && *renda <= 2563.91)
        *renda -=(*renda *0.075);
    else if (*renda > 2563.91 && *renda <= 3418.59)
        *renda -=(*renda *0.15);
    else if (*renda > 3418.59 && *renda <= 4271,59)
        *renda -=(*renda *0.225);
    else if (*renda > 4271,59)
        *renda -=(*renda *0.275);
}

int main () {
    char nome[30];
    float salario;

    printf("Digite seu nome: \n");
    gets(nome);
    printf("Digite seu salario \n");
    scanf("%f",&salario);

    calculaIRPF(&salario); // para puxar o ponteiro voce coloca o & para passar o local na RAM onde ta o salario

    printf("Seu novo salario eh: R$ %.2f", salario);
    getch();
}
