#include <stdio.h>
#include <conio.h>
#include <math.h> 

//-------------------------------- Enunciado --------------------------------

//2- Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c. 
//O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário 
//nas seguintes situações: 
	//• Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o
	//programa não deve fazer pedir os demais valores, sendo encerrado; 

	//• Se o delta calculado for negativo, a equação não possui raízes reais. Informe ao usuário e
	//encerre o programa;

	//• Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe-a ao
	//usuário;

	//• Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário;
	
	
//-------------------------------- Resolução --------------------------------

int main () {

    float valor_A, valor_B, valor_C, valor_delta, resultado1, resultado2;
	
	printf ("Digite o valor de A:");
    scanf ("%f", &valor_A);
	
	if (valor_A =! 0) {
		printf ("Digite o valor de B:");
		scanf ("%f", &valor_B);
	
		printf ("Digite o valor de C:");
		scanf ("%f", &valor_C);
		
		
		
		//D = b^2 - 4ac
		
		valor_delta = valor_B*valor_B - 4*valor_A*valor_C;
		
		if (valor_delta > 0) {
			//x = (-b +- Vdelta)/2a
			resultado1 = (- valor_B + sqrt(valor_delta))/2*valor_A;
			resultado2 = (- valor_B - sqrt(valor_delta))/2*valor_A;
			printf ("Uma de suas raizes vale: %.2f. A outra vale: %.2f.\n", resultado1,resultado2);

		
		}
		
		
		else if (valor_delta == 0) {
			//x = -b/2a
			resultado1 = (- valor_B/2*valor_A);
			printf ("A sua unica raiz real vale: %.f.\n", resultado1);
		
		}
		
		
		else if (valor_delta < 0) {
			printf ("Não possui raizes reais");
		
		}
		
		
		
		
		
	}
	
	

	
	
	getch();
	
	}
