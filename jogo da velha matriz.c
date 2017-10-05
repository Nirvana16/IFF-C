#include <stdio.h>
#include <stdlib.h>

void main(){
char mat[3][3];
int i=0,j=0,k=0,m=0;
printf("Bem vindo ao jogo da velha!!!\n\n\tVeja as regras do jogo a seguir.\n1. Sao dois jogadores, cada um deve escolher um simbolo x ou circulo.\n2. Os jogadores jogam alternadamente, uma marcacao por vez, numa lacuna que esteja vazia.\n3. O objetivo e conseguir tres circulos ou tres x em linha, quer horizontal, vertical ou diagonal, e ao mesmo tempo, quando possivel, impedir o adversario de ganhar na proxima jogada.\n\n\tBoa sorte");
for(i=0;i<3;i++){ // preenchimento da matriz com * para corresponder a posição vazia
for(j=0;j<3;j++){//preenche todas a posição com '*'
mat[i][j]='*';
}
}
printf("\nDigite 1 para player 1 vs player 2, 2 para player vs computador e 3 para computador vs computador.\n");
scanf("%d",&i); // o usuario digita o o tipo de jogo
while(i<1 || i>3){//testa se o tipo de jogo é valido ou não
printf("Tipo invalido, escolha novamente");
scanf("%d",&i);
}
switch(i){//para escolher o tipo de jogo
case 1: // case usado para selecionar tipo de jogo, neste case é usado o modo player vs player
do{
if(k%2==0){// Testa a vez do jogador: se o resto for igual a 0 a vez do jogador 'x' se for diferente é a vez do jogador 'o'
/*Imprime o jogo*/
printf("\n%c|%c|%c\n",mat[0][0],mat[0][1],mat[0][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[1][0],mat[1][1],mat[1][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[2][0],mat[2][1],mat[2][2]);
printf("Em qual linha e a coluna vc deseja marcar.\n");
scanf("%d%d",&i,&j);
while((mat[i-1][j-1]=='x') || (mat[i-1][j-1]=='o')|| (i<1 || i>3) || (j<1 || j>3)){/*Verifica se a posição solicitada já foi marcada e se o se o jogador digita posçoes que não existem*/
printf("Por favor digite novamente a linha e a coluna qe vc deseja marcar.\n");
scanf("%d%d",&i,&j);
}
mat[i-1][j-1]='x';//preenche com o 'x' a posição desejada
m++;//incrementa o 'm' para o teste abaixo
if (m>=5){//Só faz os testes abaixo apartir da quinta jogada
if((mat[0][0]=='x' && mat[0][1]=='x' && mat[0][2]=='x')|| // teste usado para saber se o jogador corespondente a X ganhou
(mat[1][0]=='x' && mat[1][1]=='x' && mat[1][2]=='x')||
(mat[2][0]=='x' && mat[2][1]=='x' && mat[2][2]=='x')||
(mat[0][0]=='x' && mat[1][0]=='x' && mat[2][0]=='x')||
(mat[0][1]=='x' && mat[1][1]=='x' && mat[2][1]=='x')||
(mat[0][2]=='x' && mat[1][2]=='x' && mat[2][2]=='x')||
(mat[0][0]=='x' && mat[1][1]=='x' && mat[2][2]=='x')||
(mat[0][2]=='x' && mat[1][1]=='x' && mat[2][0]=='x')){
printf("\n%c|%c|%c\n",mat[0][0],mat[0][1],mat[0][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[1][0],mat[1][1],mat[1][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[2][0],mat[2][1],mat[2][2]);
printf("Parabens player 1 vc venceu!!!\n");
break;
}
if(m==9)
printf("\n\nEMPATE\n\n");
}
}
else{//vez do jogador 'o'
printf("\n%c|%c|%c\n",mat[0][0],mat[0][1],mat[0][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[1][0],mat[1][1],mat[1][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[2][0],mat[2][1],mat[2][2]);
printf("Em qual linha e a coluna vc deseja marcar.\n");
scanf("%d%d",&i,&j);
while((mat[i-1][j-1]=='x') || (mat[i-1][j-1]=='o')|| (i<1 || i>3) || (j<1 || j>3)){/*Verifica se a posição solicitada já foi marcada e se o se o jogador digita posçoes que não existem*/
printf("Por favor digite novamente a linha e a coluna qe vc deseja marcar.\n");
scanf("%d%d",&i,&j);
}
mat[i-1][j-1]='o';//preenche com o 'x' a posição desejada
m++;//incrementa o 'm' para o proximo teste
if (m>=5){//Só faz os testes abaixo apartir da quinta jogada
if((mat[0][0]=='o' && mat[0][1]=='o' && mat[0][2]=='o')|| // teste usado para saber se o jogador corespondente a O ganhou
(mat[1][0]=='o' && mat[1][1]=='o' && mat[1][2]=='o')||
(mat[2][0]=='o' && mat[2][1]=='o' && mat[2][2]=='o')||
(mat[0][0]=='o' && mat[1][0]=='o' && mat[2][0]=='o')||
(mat[0][1]=='o' && mat[1][1]=='o' && mat[2][1]=='o')||
(mat[0][2]=='o' && mat[1][2]=='o' && mat[2][2]=='o')||
(mat[0][0]=='o' && mat[1][1]=='o' && mat[2][2]=='o')||
(mat[0][2]=='o' && mat[1][1]=='o' && mat[2][0]=='o')){
printf("\n%c|%c|%c\n",mat[0][0],mat[0][1],mat[0][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[1][0],mat[1][1],mat[1][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[2][0],mat[2][1],mat[2][2]);
printf("Parabens player 2 vc venceu!!!\n");
break;
}
if(m==9)
printf("\n\nEMPATE\n\n");
}
}
k++;//incrementa o 'k' para o primeiro teste que verá de qual jogador é a vez
}while(1);//mantem o jogo rodando
break;
case 2: // case usado para selecionar tipo de jogo, neste case é usado o modo player vs computador
do{
if(k%2==0){// Testa a vez do jogador: se o resto for igual a 0 a vez do jogador 'x' se for diferente é a vez do jogador 'o'
printf("\n%c|%c|%c\n",mat[0][0],mat[0][1],mat[0][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[1][0],mat[1][1],mat[1][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[2][0],mat[2][1],mat[2][2]);
printf("Em qual linha e a coluna vc deseja marcar.\n");
scanf("%d%d",&i,&j);
while((mat[i-1][j-1]=='x') || (mat[i-1][j-1]=='o')|| (i<1 || i>3) || (j<1 || j>3)){/*Verifica se a posição solicitada já foi marcada e se o se o jogador digita posçoes que não existem*/
printf("Por favor digite novamente a linha e a coluna qe vc deseja marcar.\n");
scanf("%d%d",&i,&j);
}
mat[i-1][j-1]='x';
m++;
if (m>=5){//Só faz os testes abaixo apartir da quinta jogada
if((mat[0][0]=='x' && mat[0][1]=='x' && mat[0][2]=='x')|| // teste usado para saber se o jogador corespondente a X ganhou
(mat[1][0]=='x' && mat[1][1]=='x' && mat[1][2]=='x')||
(mat[2][0]=='x' && mat[2][1]=='x' && mat[2][2]=='x')||
(mat[0][0]=='x' && mat[1][0]=='x' && mat[2][0]=='x')||
(mat[0][1]=='x' && mat[1][1]=='x' && mat[2][1]=='x')||
(mat[0][2]=='x' && mat[1][2]=='x' && mat[2][2]=='x')||
(mat[0][0]=='x' && mat[1][1]=='x' && mat[2][2]=='x')||
(mat[0][2]=='x' && mat[1][1]=='x' && mat[2][0]=='x')){
printf("\n%c|%c|%c\n",mat[0][0],mat[0][1],mat[0][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[1][0],mat[1][1],mat[1][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[2][0],mat[2][1],mat[2][2]);
printf("Parabens player 1 vc venceu!!!\n");
break;
}
if(m==9)
printf("\n\nEMPATE\n\n");
}
}
else{//vez do computador
printf("\n%c|%c|%c\n",mat[0][0],mat[0][1],mat[0][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[1][0],mat[1][1],mat[1][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[2][0],mat[2][1],mat[2][2]);
printf("Computador mexeu.\n");
srand(time(NULL));//comando para sorteio
i = rand()%3;//sorteia uma posição i
j = rand()%3;//sorteia uma posição j
while((mat[i][j]=='x') || (mat[i][j]=='o')){//testa para se a posição desejada já esta preenchida se ja estiver sorteia novamente
i = rand()%3;
j = rand()%3;
}
mat[i][j]='o';//preenche a posição desejada com 'o'
m++;
if (m>=5){//Só faz os testes abaixo apartir da quinta jogada
if((mat[0][0]=='o' && mat[0][1]=='o' && mat[0][2]=='o')|| // teste usado para saber se o jogador corespondente a O ganhou
(mat[1][0]=='o' && mat[1][1]=='o' && mat[1][2]=='o')||
(mat[2][0]=='o' && mat[2][1]=='o' && mat[2][2]=='o')||
(mat[0][0]=='o' && mat[1][0]=='o' && mat[2][0]=='o')||
(mat[0][1]=='o' && mat[1][1]=='o' && mat[2][1]=='o')||
(mat[0][2]=='o' && mat[1][2]=='o' && mat[2][2]=='o')||
(mat[0][0]=='o' && mat[1][1]=='o' && mat[2][2]=='o')||
(mat[0][2]=='o' && mat[1][1]=='o' && mat[2][0]=='o')){
printf("\n%c|%c|%c\n",mat[0][0],mat[0][1],mat[0][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[1][0],mat[1][1],mat[1][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[2][0],mat[2][1],mat[2][2]);
printf("O computador venceu!!!\n");
break;
}
if(m==9)
printf("\n\nEMPATE\n\n");
}
}
k++;
}while(1);//mantem o jogo rodando
break;
case 3: // case usado para selecionar tipo de jogo, neste case é usado o modo computador vs computador
do{
if(k%2==0){
printf("\n%c|%c|%c\n",mat[0][0],mat[0][1],mat[0][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[1][0],mat[1][1],mat[1][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[2][0],mat[2][1],mat[2][2]);
printf("Computador 1 mexeu.\n");
srand(time(NULL));
i = rand()%3;
j = rand()%3;
while((mat[i][j]=='x') || (mat[i][j]=='o')){/*Verifica se a posição solicitada já foi marcada*/
i = rand()%3;
j = rand()%3;
}
mat[i][j]='x';
m++;
if (m>=5){
if((mat[0][0]=='x' && mat[0][1]=='x' && mat[0][2]=='x')|| // teste usado para saber se o jogador corespondente a X ganhou
(mat[1][0]=='x' && mat[1][1]=='x' && mat[1][2]=='x')||
(mat[2][0]=='x' && mat[2][1]=='x' && mat[2][2]=='x')||
(mat[0][0]=='x' && mat[1][0]=='x' && mat[2][0]=='x')||
(mat[0][1]=='x' && mat[1][1]=='x' && mat[2][1]=='x')||
(mat[0][2]=='x' && mat[1][2]=='x' && mat[2][2]=='x')||
(mat[0][0]=='x' && mat[1][1]=='x' && mat[2][2]=='x')||
(mat[0][2]=='x' && mat[1][1]=='x' && mat[2][0]=='x')){
printf("\n%c|%c|%c\n",mat[0][0],mat[0][1],mat[0][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[1][0],mat[1][1],mat[1][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[2][0],mat[2][1],mat[2][2]);
printf("O computador 1 venceu!!!\n");
break;
}
if(m==9)
printf("\n\nEMPATE\n\n");
}
}
else{
printf("\n%c|%c|%c\n",mat[0][0],mat[0][1],mat[0][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[1][0],mat[1][1],mat[1][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[2][0],mat[2][1],mat[2][2]);
printf("Computador 2 mexeu .\n");
srand(time(NULL));
i = rand()%3;
j = rand()%3;
while((mat[i][j]=='x') || (mat[i][j]=='o')){/*Verifica se a posição solicitada já foi marcada*/
i = rand()%3;
j = rand()%3;
}
mat[i][j]='o';
m++;
if (m>=5){
if((mat[0][0]=='o' && mat[0][1]=='o' && mat[0][2]=='o')|| // teste usado para saber se o jogador corespondente a O ganhou
(mat[1][0]=='o' && mat[1][1]=='o' && mat[1][2]=='o')||
(mat[2][0]=='o' && mat[2][1]=='o' && mat[2][2]=='o')||
(mat[0][0]=='o' && mat[1][0]=='o' && mat[2][0]=='o')||
(mat[0][1]=='o' && mat[1][1]=='o' && mat[2][1]=='o')||
(mat[0][2]=='o' && mat[1][2]=='o' && mat[2][2]=='o')||
(mat[0][0]=='o' && mat[1][1]=='o' && mat[2][2]=='o')||
(mat[0][2]=='o' && mat[1][1]=='o' && mat[2][0]=='o')){
printf("\n%c|%c|%c\n",mat[0][0],mat[0][1],mat[0][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[1][0],mat[1][1],mat[1][2]);
printf("--------\n");
printf("%c|%c|%c\n",mat[2][0],mat[2][1],mat[2][2]);
printf("O computador 2 venceu!!!\n");
break;
}
if(m==9)
printf("\n\nEMPATE\n\n");
}
}
k++;
}while(1);

}
getch();
}
