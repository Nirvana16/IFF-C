#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

//-------------------------------- Dupla --------------------------------

	//José Danilo Azevedo
	//Matheus Manhães Tavares


//-------------------------------- Enunciado --------------------------------

	//4- Faça um programa em C que peça ao usuário o valor de um financiamento, a quantidade de
	//meses, e a taxa de juros mensal, e calcule o valor de prestação mensal de acordo com a tabela Price.
	//Para saber mais sobre a fórmula, acesse:
	//http://www.brasilescola.com/matematica/financiamentos-utilizando-tabela-price.htm
	//Faça uma função que retorne o valor da prestação mensal. Faça outra função que imprima uma
	//tabela conforme o exemplo do site. Para calcular a potência, utilize a função pow. Coloquei um
	//tutorial de funções matemáticas no meu blog.

//-------------------------------- Resolução --------------------------------


// Função para calcular a parcela.
float calcularPM(float valor_financiamento, float taxa_juros, int quant_meses)
{
	float prestacao_mensal;


	prestacao_mensal = (valor_financiamento * taxa_juros) / (1 - (1/( pow((1 + taxa_juros),quant_meses))));

	//prestacao_mensal = valor_financiamento * ((pow((1 + taxa_juros),quant_meses))* taxa_juros)/((pow((1 + taxa_juros),quant_meses))-1);

	return prestacao_mensal;


} //Fim da função "calcularPM".





// Função para exibir a tabela!
void calcularTab(float valor_financiamento, float taxa_juros, int quant_meses, float prestacao_mensal)
{
	float jurosMaior, devedor, amortizacao, saldo_devedor;
	int contador = 1;

	printf("Parcela | Valor | Juros(%.2f%%) | Armotização | Saldo Devedor\n", taxa_juros);

	devedor = valor_financiamento;
	saldo_devedor = valor_financiamento;
	while (contador <= quant_meses)
	{
		jurosMaior = devedor * taxa_juros;
		amortizacao = prestacao_mensal - jurosMaior;
		devedor = devedor - amortizacao;
		saldo_devedor = saldo_devedor - amortizacao;

		printf("%i       | %.2f|   %.2f   |  %.2f    | %.2f" , contador, prestacao_mensal, jurosMaior, amortizacao, saldo_devedor);
		contador++;
		printf ("\n");




	} // Fim do While.



} //Fim da função "Void".






// Função principal.
int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int quant_meses;
	float valor_financiamento, taxa_juros, prestacao_mensal;

	printf("Digite o valor do seu financiamento: ");
	scanf ("%f", &valor_financiamento);

	printf("Digite a quantidade de meses restantes: ");
	scanf ("%i", &quant_meses);

	printf("Digite a taxa de júros mensal: ");
	scanf ("%f", &taxa_juros);
	taxa_juros = taxa_juros / 100;


	printf ("\n");
	printf ("--------------------------------------------------------------\n \n");


	prestacao_mensal = calcularPM(valor_financiamento, taxa_juros, quant_meses);


	printf("O Valor da prestação mensal é de: %.2f \n\n", prestacao_mensal);


	calcularTab(valor_financiamento, taxa_juros, quant_meses, prestacao_mensal);

	getch();

} //Fim da função "main".
