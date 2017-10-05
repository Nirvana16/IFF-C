#include<stdio.h>
#include<conio.h>

/*
struct nome {
    tipo nome_variavel
    tipo nome_varaivel
};

struct pessoa P1;

*/

struct pessoa {
    char nome[30];
    float peso, altura, imc;
};

int main (){
    struct pessoa p1;
    printf("Digite o nome da pessoa \n");
    gets(p1.nome); // usar o scanf("%S") para loop
    printf("Digite o altura da pessoa \n");
    scanf("%f",&p1.altura);
    printf("Digite o peso da pessoa \n");
    scanf("%f",&p1.peso);

    p1.imc = p1.peso / (p1.altura * p1.altura);

    printf("%s com peso de %2.f e altura de %.2f em IMC de %.2f \n", p1.nome, p1.peso, p1.altura, p1.imc);


    getch();
}
