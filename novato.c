#include <stdio.h>
int main() {
    //Declaração de variaveis  para a primeira carta
    
    char Estado[15];
    char Codigodacarta[4];
    char Cidade[15];
    int Populacao;
    float area_em_km;
    float PIB; 
    int Pontosturisticos;

    // Declaração de dados da primeira carta
    printf("Desafio novato!\n");
    printf("Carta 1\n");
    printf("Digite o Estado:\n");
    scanf("%s", Estado);
    printf("Digite o codigo da carta:\n");
    scanf("%s", Codigodacarta);
    printf("Digite a cidade:\n");
    scanf("%s", Cidade);
    printf("Digite a populacao:\n");
    scanf("%d", &Populacao);
    printf("Digite area_em_km:\n");
    scanf("%f", &area_em_km);
    printf("Digite o PIB:\n ");
    scanf("%f", &PIB);
    printf("Digite os Pontos turisticos:\n");
    scanf("%d", &Pontosturisticos);

    //Declaração de variaveis  para a segunda carta
    char Estado[30];
    char Codigodacarta[3];
    char Cidade[30];
    int Populacao;
    float area_em_km;
    float PIB; 
    int Pontosturisticos;

    // Declaração de dados da primeira carta
    printf("Segunda Carta !\n");
    printf("Carta 2\n");
    printf("Digite o Estado:\n");
    scanf("%s", Estado);
    printf("Digite o codigo da carta:\n");
    scanf("%s", Codigodacarta);
    printf("Digite a cidade:\n");
    scanf("%s", Cidade);
    printf("Digite a populacao:\n");
    scanf("%d", &Populacao);
    printf("Digite area_em_km:\n");
    scanf("%f", &area_em_km);
    printf("Digite o PIB:\n ");
    scanf("%f", &PIB);
    printf("Digite os Pontos turisticos:\n");
    scanf("%d", &Pontosturisticos);

    return 0;

}
