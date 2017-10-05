#include <stdio.h>
#include <conio.h>
#include <locale.h>

//-------------------------------- Enunciado --------------------------------

//3- O gr�mio do IFF est� em processo de elei��o. Apresentaram-se 3 candidatos: JOS� com o n� 1, 
//MARIA com o n� 2 e JO�O com o n� 3. Cada eleitor marca uma c�dula com sua op��o, que pode 
//ser o n� de um candidato (1,2,3), voto branco (n� 4) ou voto nulo (n� 5). Prepare um programa para 
//auxiliar na contagem dos votos, processando os dados de um n�mero n�o determinado de c�dulas 
//at� que seja digitado 0 para finalizar. Ao finalizar, escreva os seguintes dados na tela: 

//a)o n� de voto de cada uma das 5 op��es; 
//b)o nome do candidato vencedor.
	
	
//-------------------------------- Resolu��o --------------------------------

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
	int voto = 10, voto_jose = 0, voto_maria = 0, voto_joao = 0, voto_branco = 0;
	int voto_nulo = 0;
	
	
	printf ("Veja como participar da vota��o:\n \n");
	printf (">> De 1 a 3 s�o os candidatos, 4 a 5 s�o as op��es secund�rias.\n \n");
	
	printf ("--------------------------------------------------------------\n \n");
	
	printf ("Digitando \"1\" voc� estar� votando em Jos�.\n");
	printf ("Digitando \"2\" voc� estar� votando em Maria.\n");
	printf ("Digitando \"3\" voc� estar� votando em Jo�o.\n \n");
	
	printf ("Veja tamb�m:\n");
	printf ("Digitando \"4\" voc� estar� votando em BRANCO.\n");
	printf ("Digitando \"5\" voc� estar� votando NULO.\n \n \n");
	
	printf ("\"Vote com Consci�ncia:\"\n \n");
	
	printf ("--------------------------------------------------------------\n \n");
	
	
	
	while (voto != 0)
	{
		
	printf ("Ent�o, qual o n�mero escolhido? Digite ao lado: ");
	scanf ("%d", &voto);
	printf ("\n");
	
	
	switch(voto)
	{
	case 1:
    printf ("Obrigado por votar em Jos�, seu voto foi computado.\n \n \n \n");
    voto_jose++;
    break;
    
    
    case 2:
    printf ("Obrigado por votar em Maria, seu voto foi computado.\n \n \n \n");
    voto_maria++;
    break;
    
    
    case 3:
    printf ("Obrigado por votar em Jo�o, seu voto foi computado.\n \n \n \n");
    voto_joao++;
    break;
    
    case 4:
    printf ("Seu voto foi computado como branco.\n \n \n \n");
    voto_branco++;
    break;
    
    
    case 0:
	printf ("Contagem de votos:\n");
	
   	printf ("- Jos� recebeu %d voto(s).", voto_jose);
   	printf ("\n");
   	printf ("- Maria recebeu %d voto(s).", voto_maria);
   	printf ("\n");
   	printf ("- Jo�o recebeu %d voto(s).", voto_joao);
   	printf ("\n");
   	printf ("- Total de %d voto(s) em branco.", voto_branco);
   	printf ("\n");
   	printf ("- Total de %d voto(s) nulo(s).", voto_nulo);
   	printf ("\n \n \n");
   	
   	
   	printf ("E o resultado �... \n \n");
   	//Jos� vencendo!
   	if (voto_jose > voto_maria && voto_jose > voto_joao
   		&& voto_jose > voto_branco + voto_nulo)
   	{
	printf ("Jos� venceu a elei��o! Parab�ns!");	
	}
	
	
	//Maria vencendo!
	else if (voto_maria > voto_jose && voto_maria > voto_joao 
   		&& voto_maria > voto_branco + voto_nulo)
   	{
	printf ("Maria venceu a elei��o! Parab�ns!");	
	}
	
	
	//Jo�o vencendo!
	else if (voto_joao > voto_jose && voto_joao > voto_maria
   		&& voto_joao > voto_branco + voto_nulo)
   	{
	printf ("Jo�o venceu a elei��o! Parab�ns!");	
	}
   	
   	
   	//Votos em branco/nulos vencendo!
   	else if (voto_branco + voto_nulo > voto_jose && voto_branco + voto_nulo > voto_maria
   		&& voto_branco + voto_nulo > voto_joao)
   	{
	printf ("Tem mais votos em branco/nulos do que de candidatos.");	
	}
   	
   	
   	//Jos� e Maria empatados!
   	else if (voto_jose == voto_maria && voto_jose > voto_joao
   		&& voto_jose > voto_branco + voto_nulo)
   	{
	printf ("Jos� e Maria empataram!");	
	}
	
	
	//Jos� e branco/nulos empatados!
   	else if (voto_jose > voto_maria && voto_jose > voto_joao
   		&& voto_jose == voto_branco + voto_nulo)
   	{
	printf ("Jos� e votos branco/nulos empataram!");	
	}
   	
   	
   	//Jos� e Jo�o ampatados!
   	else if (voto_jose > voto_maria && voto_jose == voto_joao
   		&& voto_jose > voto_branco + voto_nulo)
   	{
	printf ("Jos� e Jo�o empataram!");	
	}
	
	
	//Maria e Jo�o ampatados!
   	else if (voto_maria > voto_jose && voto_maria == voto_joao 
   		&& voto_maria > voto_branco + voto_nulo)
   	{
	printf ("Maria e Jo�o empataram!");	
	}
	
	
	//Maria e branco/nulos ampatados!
   	else if (voto_maria > voto_jose && voto_maria > voto_joao 
   		&& voto_maria == voto_branco + voto_nulo)
   	{
	printf ("Maria e votos branco/nulos empataram!");	
	}
   	
   	
   	//Branco/nulos e Jo�o empatados!
   	else if (voto_branco + voto_nulo > voto_jose && voto_branco + voto_nulo > voto_maria
   		&& voto_branco + voto_nulo == voto_joao)
   	{
	printf ("Jo�o e votos branco/nulos empataram!");	
	}
	
	
	//Jos�, Maria e Jo�o empatados!
   	else if (voto_jose == voto_maria && voto_jose == voto_joao
   		&& voto_jose > voto_branco + voto_nulo)
   	{
	printf ("Jos�, Maria e Jo�o empataram!");	
	}
	
	
	//Maria, Jo�o e Branco/nulos empatados!
   	else if (voto_maria == voto_joao && voto_maria == voto_branco + voto_nulo
   		&& voto_maria > voto_jose)
   	{
	printf ("Maria, Jo�o e branco/nulos empataram!");	
	}
	
	
	//Jo�o, Branco/nulos e Jos� empatados!
   	else if (voto_joao == voto_branco + voto_nulo && voto_joao == voto_jose
   		&& voto_joao > voto_maria)
   	{
	printf ("Maria, Jo�o e branco/nulos empataram!");	
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
	
} //Chave da fun��o principal.
