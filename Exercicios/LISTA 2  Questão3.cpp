#include <stdio.h>
#include <conio.h>
#include <locale.h>

//-------------------------------- Enunciado --------------------------------

//3- O grêmio do IFF está em processo de eleição. Apresentaram-se 3 candidatos: JOSÉ com o nº 1, 
//MARIA com o nº 2 e JOÃO com o nº 3. Cada eleitor marca uma cédula com sua opção, que pode 
//ser o nº de um candidato (1,2,3), voto branco (nº 4) ou voto nulo (nº 5). Prepare um programa para 
//auxiliar na contagem dos votos, processando os dados de um número não determinado de cédulas 
//até que seja digitado 0 para finalizar. Ao finalizar, escreva os seguintes dados na tela: 

//a)o nº de voto de cada uma das 5 opções; 
//b)o nome do candidato vencedor.
	
	
//-------------------------------- Resolução --------------------------------

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
	int voto = 10, voto_jose = 0, voto_maria = 0, voto_joao = 0, voto_branco = 0;
	int voto_nulo = 0;
	
	
	printf ("Veja como participar da votação:\n \n");
	printf (">> De 1 a 3 são os candidatos, 4 a 5 são as opções secundárias.\n \n");
	
	printf ("--------------------------------------------------------------\n \n");
	
	printf ("Digitando \"1\" você estará votando em José.\n");
	printf ("Digitando \"2\" você estará votando em Maria.\n");
	printf ("Digitando \"3\" você estará votando em João.\n \n");
	
	printf ("Veja também:\n");
	printf ("Digitando \"4\" você estará votando em BRANCO.\n");
	printf ("Digitando \"5\" você estará votando NULO.\n \n \n");
	
	printf ("\"Vote com Consciência:\"\n \n");
	
	printf ("--------------------------------------------------------------\n \n");
	
	
	
	while (voto != 0)
	{
		
	printf ("Então, qual o número escolhido? Digite ao lado: ");
	scanf ("%d", &voto);
	printf ("\n");
	
	
	switch(voto)
	{
	case 1:
    printf ("Obrigado por votar em José, seu voto foi computado.\n \n \n \n");
    voto_jose++;
    break;
    
    
    case 2:
    printf ("Obrigado por votar em Maria, seu voto foi computado.\n \n \n \n");
    voto_maria++;
    break;
    
    
    case 3:
    printf ("Obrigado por votar em João, seu voto foi computado.\n \n \n \n");
    voto_joao++;
    break;
    
    case 4:
    printf ("Seu voto foi computado como branco.\n \n \n \n");
    voto_branco++;
    break;
    
    
    case 0:
	printf ("Contagem de votos:\n");
	
   	printf ("- José recebeu %d voto(s).", voto_jose);
   	printf ("\n");
   	printf ("- Maria recebeu %d voto(s).", voto_maria);
   	printf ("\n");
   	printf ("- João recebeu %d voto(s).", voto_joao);
   	printf ("\n");
   	printf ("- Total de %d voto(s) em branco.", voto_branco);
   	printf ("\n");
   	printf ("- Total de %d voto(s) nulo(s).", voto_nulo);
   	printf ("\n \n \n");
   	
   	
   	printf ("E o resultado é... \n \n");
   	//José vencendo!
   	if (voto_jose > voto_maria && voto_jose > voto_joao
   		&& voto_jose > voto_branco + voto_nulo)
   	{
	printf ("José venceu a eleição! Parabéns!");	
	}
	
	
	//Maria vencendo!
	else if (voto_maria > voto_jose && voto_maria > voto_joao 
   		&& voto_maria > voto_branco + voto_nulo)
   	{
	printf ("Maria venceu a eleição! Parabéns!");	
	}
	
	
	//João vencendo!
	else if (voto_joao > voto_jose && voto_joao > voto_maria
   		&& voto_joao > voto_branco + voto_nulo)
   	{
	printf ("João venceu a eleição! Parabéns!");	
	}
   	
   	
   	//Votos em branco/nulos vencendo!
   	else if (voto_branco + voto_nulo > voto_jose && voto_branco + voto_nulo > voto_maria
   		&& voto_branco + voto_nulo > voto_joao)
   	{
	printf ("Tem mais votos em branco/nulos do que de candidatos.");	
	}
   	
   	
   	//José e Maria empatados!
   	else if (voto_jose == voto_maria && voto_jose > voto_joao
   		&& voto_jose > voto_branco + voto_nulo)
   	{
	printf ("José e Maria empataram!");	
	}
	
	
	//José e branco/nulos empatados!
   	else if (voto_jose > voto_maria && voto_jose > voto_joao
   		&& voto_jose == voto_branco + voto_nulo)
   	{
	printf ("José e votos branco/nulos empataram!");	
	}
   	
   	
   	//José e João ampatados!
   	else if (voto_jose > voto_maria && voto_jose == voto_joao
   		&& voto_jose > voto_branco + voto_nulo)
   	{
	printf ("José e João empataram!");	
	}
	
	
	//Maria e João ampatados!
   	else if (voto_maria > voto_jose && voto_maria == voto_joao 
   		&& voto_maria > voto_branco + voto_nulo)
   	{
	printf ("Maria e João empataram!");	
	}
	
	
	//Maria e branco/nulos ampatados!
   	else if (voto_maria > voto_jose && voto_maria > voto_joao 
   		&& voto_maria == voto_branco + voto_nulo)
   	{
	printf ("Maria e votos branco/nulos empataram!");	
	}
   	
   	
   	//Branco/nulos e João empatados!
   	else if (voto_branco + voto_nulo > voto_jose && voto_branco + voto_nulo > voto_maria
   		&& voto_branco + voto_nulo == voto_joao)
   	{
	printf ("João e votos branco/nulos empataram!");	
	}
	
	
	//José, Maria e João empatados!
   	else if (voto_jose == voto_maria && voto_jose == voto_joao
   		&& voto_jose > voto_branco + voto_nulo)
   	{
	printf ("José, Maria e João empataram!");	
	}
	
	
	//Maria, João e Branco/nulos empatados!
   	else if (voto_maria == voto_joao && voto_maria == voto_branco + voto_nulo
   		&& voto_maria > voto_jose)
   	{
	printf ("Maria, João e branco/nulos empataram!");	
	}
	
	
	//João, Branco/nulos e José empatados!
   	else if (voto_joao == voto_branco + voto_nulo && voto_joao == voto_jose
   		&& voto_joao > voto_maria)
   	{
	printf ("Maria, João e branco/nulos empataram!");	
	}
	
	
	//Todos empatados!
   	else if (voto_branco + voto_nulo == voto_jose && voto_branco + voto_nulo == voto_maria
   		&& voto_branco + voto_nulo == voto_joao)
   	{
	printf ("Todos empataram");	
	}
   	
   	
   	
   	
    break;
    
    
    default:
    printf ("Voto nulo!\n \n \n \n");
    voto_nulo++;
	
	
	
	
	} //Chave do Switch.
	
	} //Chave do While.
	

	
	
	getch(); 
	
} //Chave da função principal.
