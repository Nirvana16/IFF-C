#include <stdio.h>
#include <conio.h>

//-------------------------------- Enunciado --------------------------------

//1- Fa�a um algoritmo que solicite n�meros positivos ao usu�rio. O programa deve parar de solicitar 
//n�meros quando o usu�rio digitar o n�mero 0 ou um n�mero negativo. Ao finalizar, o programa 
//deve calcular:
	//- A quantidade de n�meros digitados
	//- A soma dos n�meros digitados
	//- A m�dia dos n�meros digitados
	//- O maior n�mero digitado
	//- O menor n�mero digitado
	
	
//-------------------------------- Resolu��o --------------------------------

int main () {
    int numero, qtdNumDigitados = 0, somaNumeros = 0;
    int maior, menor;
    
    
    do {
    printf("Informe um Numero:");
    scanf ("%d", &numero);
    if (numero > 0) {
               qtdNumDigitados++; // isso � igual a  qtdNumDigitados = qtdNumDigitados + 1;
               somaNumeros+= numero; // isso � a mesma coisa que somaNumeros = numero + somaNumeros;
               if (qtdNumDigitados == 1) {
                                   maior = numero;
                                   menor = numero;
               }
               else {
                    if (numero > maior) {
                    maior = numero;
                    }
                    else if (numero < menor){
                    menor = numero;
                    }
                         
               }
    }
    }while (numero > 0);
    printf("A Quantidade de Numeros Digitados foi: %d \n", qtdNumDigitados);
    printf ("E a Soma dos numeros digitados foi: %d \n", somaNumeros);
    printf ("A Media dos numeros eh %f: \n", (float) somaNumeros/qtdNumDigitados); // CAST o (float) obriga o resultado da divis�o a virar um Float
    printf ("O Maior Numero foi %d, e o menor numero foi %d", maior, menor);
    getch ();


}
