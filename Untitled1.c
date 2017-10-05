#include<stdio.h>
#include<conio.h>


float AreaRetangulo(float base, float alt){
    //float base, resultado, alt;

    //resultado = (base * alt);

    return (base*alt);
}


int main(){
    float b, h, resposta;

    printf("Informe a Base do Retangulo: \n");
    scanf("%i",&b);

    printf("Informe a altura do Retangulo: \n");
    scanf("%i",&h);

    printf ("%f", AreaRetangulo(b,h));




    getch();
}
