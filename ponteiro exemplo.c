#include<stdio.h>
#include<conio.h>
#include<windows.h>


void calcularAumento(float *s, float taxa) {
    *s += ((*s)  * taxa);

}

void main(){
   float salario, taxaAumento;
   printf("Digite o Salario \n");
   scanf("%f", &salario);

   printf("Digite a taxa de aumento: \n");
   scanf("%f", &taxaAumento);

   calcularAumento(&salario, taxaAumento);
   printf("O novo salario eh: %.2f \n", salario);

   system("pause");

}
