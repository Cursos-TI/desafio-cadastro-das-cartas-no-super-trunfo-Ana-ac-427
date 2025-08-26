#include <stdio.h>

int main() {

    printf("=====================================\n");
    printf("        BEM-VINDO AO SUPER TRUNFO\n");
    printf("=====================================\n");
    printf("Neste jogo, voce vai cadastrar 2 cartas\n");
    printf("com informacoes sobre cidades brasileiras.\n");
    printf("Depois, vamos comparar seus atributos!\n");
    printf("-------------------------------------\n\n");
    
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    printf("Digite o Estado da Carta 1 (apenas 1 letra A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade da Carta 1: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populacao da Carta 1 (somente numeros inteiros, sem pontos ou virgulas): ");
    scanf("%lu", &populacao1);

    printf("Digite a Area da Carta 1 (km2) (use ponto decimal, ex: 1521.11): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1 (bilhoes) (use ponto decimal, ex: 699.28): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);
    
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    printf("\nDigite o Estado da Carta 2 (apenas 1 letra A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade da Carta 2: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao da Carta 2 (somente numeros inteiros, sem pontos ou virgulas): ");
    scanf("%lu", &populacao2);

    printf("Digite a Area da Carta 2 (km2) (use ponto decimal, ex: 1200.25): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (bilhoes) (use ponto decimal, ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    printf("\n=====================================\n");
    printf("         RESULTADO DAS CARTAS         \n");
    printf("=====================================\n");

    printf("Populacao: Carta %d venceu\n", (populacao1 > populacao2) ? 1 : 2);
    printf("Area: Carta %d venceu\n", (area1 > area2) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", (pib1 > pib2) ? 1 : 2);
    printf("Pontos Turisticos: Carta %d venceu\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (densidade1 < densidade2) ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", (superPoder1 > superPoder2) ? 1 : 2);

    printf("\n=====================================\n");
    printf("        FIM DE JOGO - OBRIGADO!       \n");
    printf("=====================================\n");

	printf("\nPressione Enter para sair...");
	
	getchar();
	getchar();

    return 0;
}
