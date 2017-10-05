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
    struct pessoa listaPessoas[5];
    int i;
    for (i=0; i<5; i++) {
        printf("Pessoa N.:%d  \n", i+1);
        printf("Informe o nome da pessoa  \n");
        scanf("%s", &listaPessoas[i].nome);
        printf("informe o peso da pessoa \n");
        scanf("%f", &listaPessoas[i].peso);
        printf("informe a altura da pessoa \n");
        scanf("%f \n", &listaPessoas[i].altura);
        listaPessoas[i].imc = listaPessoas[i].peso / (listaPessoas[i].altura * listaPessoas[i].altura);
    }

    for (i=0; i<5; i++) {
        printf("%s com peso de %2.f e altura de %.2f em IMC de %.2f \n", listaPessoas[i].nome, listaPessoas[i].peso, listaPessoas[i].altura, listaPessoas[i].imc);


    }

    getch();
}
