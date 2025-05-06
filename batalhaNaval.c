#include <stdio.h>
#define coluna 10
#define linha 10
int main()
{

    char letra[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[coluna][linha];

    printf("  \nTABULEIRO BATALHA NAVAL  \n \n");
    printf(" ");
    /*primeira linha contendo as letras*/
    for (int l = 0; l < 10; l++)
    {printf(" %c", letra[l]);}

    printf(" \n");
    /*linhas do tabuleiro*/
    for (int i = 0; i < linha; i++)
    {   /*primeira coluna contendo os numeros*/
        printf("%d", i + 1);
        /*colunas do tabuleiro*/
        for (int j = 0; j < coluna; j++)
        {   
            if ( /*condição cruz*/
                (i == 2 || j == 2)&&(i <= 4 && j <= 4))
            {tabuleiro[i][j] = 1;}

            else if( /*condição decaedro*/
                (i == 5 && (j >= 5 && j <= 9))||
                (j == 7 && (i >= 3 && i <= 7))||
                (j == 6 && (i >= 4 && i <= 6))||
                (j == 8 && (i >= 4 && i <= 6)))
            {tabuleiro[i][j] = 2;} 

            else if( /*condição piramide*/
                (i == 8 && (j >= 0 && j <= 4))||
                (i == 7 && (j >= 1 && j <= 3))||
                (j == 2 && (i >= 6 && i <= 8)))
            {tabuleiro[i][j] = 3;}
            
            else
            {   /*condição tabuleiro*/
                tabuleiro[i][j] = 0;
            }
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}