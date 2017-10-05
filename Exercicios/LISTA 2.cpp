#include <stdio.h>
#include <conio.h>

//-------------------------------- Enunciado --------------------------------

//1- Faça um algoritmo que solicite números positivos ao usuário. O programa deve parar de solicitar 
//números quando o usuário digitar o número 0 ou um número negativo. Ao finalizar, o programa 
//deve calcular:
	//- A quantidade de números digitados
	//- A soma dos números digitados
	//- A média dos números digitados
	//- O maior número digitado
	//- O menor número digitado
	
	
//-------------------------------- Resolução --------------------------------

int main () {
    int numero, qtdNumDigitados = 0, somaNumeros = 0;
    int maior, menor;
    
    
    do {
    printf("Informe um Numero:");
    scanf ("%d", &numero);
    if (numero > 0) {
               qtdNumDigitados++; // isso é igual a  qtdNumDigitados = qtdNumDigitados + 1;
               somaNumeros+= numero; // isso é a mesma coisa que somaNumeros = numero + somaNumeros;
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
    printf ("A Media dos numeros eh %f: \n", (float) somaNumeros/qtdNumDigitados); // CAST o (float) obriga o resultado da divisão a virar um Float
    printf ("O Maior Numero foi %d, e o menor numero foi %d", maior, menor);
    getch ();


}
