#include <stdio.h>

int main()
{
    char Estado1, Estado2;
    char Codigo_da_Carta1[4], Nome_da_cidade1[30], Codigo_da_Carta2[4], Nome_da_cidade2[30];
    int populacao1, NumerodePontosturisticos1, populacao2, NumerodePontosturisticos2;
    float area1, PIB1, area2, PIB2;
    
    printf("Insira os dados da Carta 1 \n\n");

    printf("Qual o estado? \n");
    scanf(" %c", &Estado1);

    printf("Qual o Codigo da Carta? \n");
    scanf("%s", Codigo_da_Carta1);

    printf("Qual o Nome da cidade? \n");
    getchar(); // remove ENTER pendente
    scanf("%29[^\n]", Nome_da_cidade1);

    printf("Qual o tamanho da População? \n");
    scanf("%d", &populacao1);

    printf("Qual a area em Km? \n");
    scanf("%f", &area1);

    printf("Qual o seu PIB? \n");
    scanf("%f", &PIB1);

    printf("Quantos pontos turisticos a cidade possui? \n");
    scanf("%d", &NumerodePontosturisticos1);


    printf("\nInsira os dados da Carta 2 \n\n");

    printf("Qual o estado? \n");
    scanf(" %c", &Estado2);

    printf("Qual o Codigo da Carta? \n");
    scanf("%s", Codigo_da_Carta2);

    printf("Qual o Nome da cidade? \n");
    getchar(); // remove ENTER pendente
    scanf("%29[^\n]", Nome_da_cidade2);

    printf("Qual o tamanho da População? \n");
    scanf("%d", &populacao2);

    printf("Qual a area em Km? \n");
    scanf("%f", &area2);

    printf("Qual o seu PIB? \n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos a cidade possui? \n");
    scanf("%d", &NumerodePontosturisticos2);
    
    
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo_da_Carta1);
    printf("Nome da cidade: %s\n", Nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosturisticos1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo_da_Carta2);
    printf("Nome da cidade: %s\n", Nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosturisticos2);

    return 0;
}