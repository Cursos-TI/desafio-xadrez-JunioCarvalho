#include <stdio.h>

int main(){

    //Movimento to Bispo cinco casas na diagonal para cima e à direita
    printf("###  Movimento Bispo  ### \n\n");
    int bispo = 1;

    while (bispo <= 5)
    {
        printf("Mova %d Para Cima, Mova %d Para a Direita \n", bispo, bispo);
        bispo++;
    }

    printf("\n");

    //Movimento Rainha 8 casas para a esqueda
    printf("###  Movimento Rainha  ### \n");
    int rainha = 1;

    do
    {
    printf("Mova %d Para a Esquerda \n", rainha);
    rainha++;
    } while (rainha <= 8);

    printf("\n");
    

    //Movimento Torre 5 casas para frente
    printf("###  Movimento Torre  ### \n");
    int torre;

    for (torre = 1; torre <= 5; torre++)
    {
    printf("Mova %d Para Frente \n", torre);
    }
    
    printf("\n");
        //Utilização de um Loop aninhado para a resolução do exercicio
    printf("###  Movimento Cavalo  ### \n");
    int esquerda = 1;

    while (esquerda--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Mova para Baixo \n");
        }
        printf("Mova para esquerda \n");
        
    }
    


    return 0;
}