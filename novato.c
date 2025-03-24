#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char Estado1[15] = "Bahia";
    char Codigodacarta1[4] = "1";
    char Cidade1[30] = "Salvador";
    int Populacao1 = 200065;
    float area_em_km1 = 266599;
    float PIB1 = 63354.445; // Em milhões
    int Pontosturisticos1 = 15;

    // Declaração de variáveis para a segunda carta
    char Estado2[30] = "Rio de Janeiro";
    char Codigodacarta2[4] = "2";
    char Cidade2[30] = "Rio de Janeiro";
    int Populacao2 = 36655699;
    float area_em_km2 = 6331.444877;
    float PIB2 = 96622.233;
    int Pontosturisticos2 = 30;

    // Entrada e saida da primeira carta
    printf("Desafio novato!\n");
    printf("Carta 1\n");
    printf("Digite o Estado1:\n");
    scanf("%s", Estado1);
    printf("Digite o codigo da carta:\n");
    scanf("%s", Codigodacarta1);
    printf("Digite a cidade1:\n");
    scanf("%s", Cidade1);
    printf("Digite a populacao1:\n");
    scanf("%d", &Populacao1);
    printf("Digite area_em_km:\n");
    scanf("%f", &area_em_km1);
    printf("Digite o PIB1:\n ");
    scanf("%f", &PIB1);
    printf("Digite os Pontos turísticos:\n");
    scanf("%d", &Pontosturisticos1);
    

    // Entrada e saida da segunda carta
    printf("Desafio novato!\n");
    printf("Carta 2\n");
    printf("Digite o Estado2:\n");
    scanf("%s", Estado2);
    printf("Digite o codigo da carta:\n");
    scanf("%s", Codigodacarta2);
    printf("Digite a cidade2:\n");
    scanf("%s", Cidade2);
    printf("Digite a populacao2:\n");
    scanf("%d", &Populacao2);
    printf("Digite area_em_km:\n");
    scanf("%f", &area_em_km1);
    printf("Digite o PIB2:\n ");
    scanf("%f", &PIB2);
    printf("Digite os Pontos turísticos:\n");
    scanf("%d", &Pontosturisticos2);
    return 0;
}