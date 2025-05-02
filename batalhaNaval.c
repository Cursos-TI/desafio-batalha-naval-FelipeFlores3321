#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

#define LINHAS 11
#define COLUNAS 11
//Definindo o tamanho de linhas e colunas do tabuleiro
//Coloquei 11x11, nas coordenadas 0, irei colocar a númeração

//Definindo a tabela
int tabela[LINHAS][COLUNAS] = {{0}};

//Varíavel para as colunas
char ColunaAbc = 'a';

//Varíavel para as linhas
int Linha123 = 01;

//Para o cantinho representando o nada.
char nada = '~';



// Parte para definir o tabuleiro.
void printarTabu(){

    for (int eixo_coluna = 0; eixo_coluna <= 10; eixo_coluna++) { 
        for (int eixo_linha = 0; eixo_linha <= 10; eixo_linha++) {
           
            if (eixo_linha == 0 && eixo_coluna == 0) {
                tabela[eixo_linha][eixo_coluna] = nada;
         

            } else if(eixo_coluna == 0){
                tabela[eixo_linha][eixo_coluna] = ColunaAbc++;
      

            }else if(eixo_linha == 0){
                tabela[eixo_linha][eixo_coluna] = Linha123++;
       

            } else {
                tabela[eixo_linha][eixo_coluna] = 0;
     
        
            }
            
         
        }
        
    }





};




int main() {

   printarTabu();
     //Chamei a função de definir o tabuleiro.

     //Definindo os navios, usando 
     int navioLinha = 3;

     //Usei a varíavel com o valor de 3 para definir a posição do navio.
   for(int navMais = 0; navMais < 3; navMais++){
    navioLinha++;
    //Inclementei essa varíavel 3 vezes
    //E defini que as linhas dessa varíavel, sejam 3, para representar o navio, começando na coluna 3.
    tabela[navioLinha][3] = 3;

   }

   int NavioColuna = 7;
   for(int navMais = 0; navMais < 3; navMais++){
     //Mesma lógica, mas apenas inverti para a coluna.
    NavioColuna++;
    tabela[7][NavioColuna] = 3;

   }



   //E finalmente, imprimi o tabuleiro, já com os barcos definidos.
   //Usei if e else, para definir o tipo de dados imprimidos, se fizer esse código.
   //E um único printf, só poderia definir um tipo de dado.
   //Usando vários printfs, me permitiu um controle maior sobre o tipo de varíaveis imprimidas.
    for (int eixo_coluna = 0; eixo_coluna <= 10; eixo_coluna++) {
        printf(" \n");
        for (int eixo_linha = 0; eixo_linha <= 10; eixo_linha++) {
           
            if (eixo_linha == 0 && eixo_coluna == 0) {
                printf(" %2c ", tabela[0][0]);

            } else if(eixo_coluna == 0){
                printf("%c ", tabela[eixo_linha][eixo_coluna]);

            }else if(eixo_linha == 0){
                printf(" %2i ", tabela[eixo_linha][eixo_coluna]);

            } else {
                printf("%i ", tabela[eixo_linha][eixo_coluna]);
        
            }
        }
}

return 0;

}
   

















    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

  