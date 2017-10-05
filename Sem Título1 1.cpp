#include<stdio.h>

float calcularIR(float  salarioBruto){
	float valorIR;
	if (salarioBruto <= 1710.78)		 {
	   valorIR = 0;
	}
	else if (salarioBruto >= 1710.79 && salarioBruto <= 2563.91 ){
	   valorIR = salarioBruto * 0.075 ;
	}
 	   else if (salarioBruto >= 2563.92 && salarioBruto <= 3418.59 ){
	   valorIR = salarioBruto * 0.015 ;
	   }
	      else if (salarioBruto >= 3418.60  && salarioBruto <= 4271.59 ){
	   valorIR = salarioBruto * 0.225 ;
	}
	   		   else if (salarioBruto >= 4271.60){
	   valorIR = salarioBruto * 0.275 ;
	}	   
	return valorIR;
}


main()
{
 float salarioBruto, irpf, salarioLiquido;
 char nome[30]; 
 printf("Digite seu nomezinho xD \n");
 gets(nome);
 printf("Digite o salariozinho bruto =P \n");
 scanf("%f", &salarioBruto);
 irpf = calcularIR(salarioBruto);
 salarioLiquido = salarioBruto - irpf;
 printf(" %s ira pagar R$ %.2f de imposto de renda\n ", nome, irpf);
 printf(" O salario final de %s  sera R$ %.2f \n", nome, salarioLiquido);
 

  
getch(); 
}
