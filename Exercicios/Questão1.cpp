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
