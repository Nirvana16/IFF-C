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

	int numero, contador = 0, somatorio = 0, media, maior_numero = 0;
	int menor_numero = numero + 1;
	
	printf("Digite um numero:");
	scanf ("%d", &numero);
	
	while (numero > 0) {
	
		if (numero > maior_numero) {
			maior_numero =  numero;
		}
			
		if (numero < menor_numero) {
			menor_numero = numero;
		}
	
	
	somatorio += numero;
	printf("Digite um numero:");
	scanf ("%d", &numero);
	
    contador++;
	
    } 
	
	printf("A quantidade de numeros digitados e: %.d\n", contador);
	printf("O somatorio dos numeros e de: %.d\n", somatorio);
	
	media = (somatorio/2);
	printf("A media e de: %.1d\n", media);
	
	printf("O maior numero e: %.d\n", maior_numero);
	printf("O menor numero e: %.d\n", menor_numero);




getch ();

}
