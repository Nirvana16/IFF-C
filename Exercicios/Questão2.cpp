#include <stdio.h>
#include <conio.h>
#include <math.h> 

//-------------------------------- Enunciado --------------------------------

//2- Fa�a um programa que calcule as ra�zes de uma equa��o do segundo grau, na forma ax2 + bx + c. 
//O programa dever� pedir os valores de a, b e c e fazer as consist�ncias, informando ao usu�rio 
//nas seguintes situa��es: 
	//� Se o usu�rio informar o valor de A igual a zero, a equa��o n�o � do segundo grau e o
	//programa n�o deve fazer pedir os demais valores, sendo encerrado; 

	//� Se o delta calculado for negativo, a equa��o n�o possui ra�zes reais. Informe ao usu�rio e
	//encerre o programa;

	//� Se o delta calculado for igual a zero a equa��o possui apenas uma raiz real; informe-a ao
	//usu�rio;

	//� Se o delta for positivo, a equa��o possui duas raiz reais; informe-as ao usu�rio;
	
	
//-------------------------------- Resolu��o --------------------------------

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
			printf ("N�o possui raizes reais");
		
		}
		
		
		
		
		
	}
	
	

	
	
	getch();
	
	}
