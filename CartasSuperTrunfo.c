#include <stdio.h>

int main() {

    //criação das variáveis das cartas 1 e 2
    int populacao1, turistico1, populacao2, turistico2;
    float area1, pib1, area2, pib2;
    double densidadePopulacional1, pibPerCapta1, densidadePopulacional2, pibPerCapta2;
    char cidade1[20];
    char cidade2[20];
    char estado1;
    char estado2;
    char codigo1[5];
    char codigo2[5];

    //mensagem inicial ao usuário
    printf("   Bem-vindo ao Super Trunfo! \n");
    printf("--------------------------------\n");

    //obtenção das inforções da primeira carta, inseridas pelo usuário:
    printf("Insira abaixo as informações sobre a primeira carta!\n");
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade1);
    printf("Digite o código do estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade (letra + 01-04): ");
    scanf("%s", codigo1);
    printf("Digite a população da cidade (valor total): ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (em km2): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (em milhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &turistico1);

    //obtendo as informações da segunda carta, inserida pelo usuário:
    printf("----------------\n");
    printf("Agora insira as informações da segunda carta!\n");
    printf("Digite o nome segunda cidade: ");
    scanf("%s", cidade2);
    printf("Digite o código do estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade (letra + 01-04): ");
    scanf("%s", codigo2);
    printf("Digite a população da cidade (valor total): ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em milhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico2);

    //calculando a densidade populacional e o PIB per capta da cidade 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapta1 = (pib1 * 1000000) / populacao1;

    //calculando a densidade populacional e o PIB per capta da cidade 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapta2 = (pib2 * 1000000) / populacao2;

    //mostrando as informações da primeira carta ao usuário:
    printf("----------- %s ------------ \n", cidade1);
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("População: %d habitantes \n", populacao1);
    printf("Área: %.2f km2 \n", area1);
    printf("PIB: %.3f milhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n", turistico1);
    printf("Densidade populacional: %.2lf habitantes/km2 \n", densidadePopulacional1);
    printf("PIB per capta: %.3lf reais/habitante \n", pibPerCapta1);
    printf("---------------------------------------------- \n");

    //mostrando as informações da segunda carta ao usuário
    printf("----------- %s ------------ \n", cidade2);
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %.2f km2 \n", area2);
    printf("PIB: %.3f milhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", turistico2);
    printf("Densidade populacional: %.2lf habitantes/km2 \n", densidadePopulacional2);
    printf("PIB per capta: %.3lf reais/habitante \n", pibPerCapta2);
    printf("----------------------------------------------- \n \n");

    //mensagem inicial para a comparação das cartas
    printf("xxxxxxxxxxxxxxxx BATALHA DE CARTAS xxxxxxxxxxxxxxxx\n");
    printf("Agora vamos comparar as cartas e decidir uma vencedora com base nas propriedades de cada uma!\n");
    printf("REGRAS:\n");
    printf("Se o resultado for 1 = a carta %s ganha!\n", cidade1);
    printf("Se o resultado for 0 = a carta %s ganha!\n", cidade2);
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    //fazendo as comparações entre as cartas
    printf("----------------- \n");
    printf("POPULAÇÃO: %s (%d habitantes) X %s (%d habitantes) = %d \n", cidade1, populacao1, cidade2, populacao2, populacao1 > populacao2);
    printf("----------------- \n");
    printf("ÁREA: %s (%f km2) X %s (%f km2) = %d \n", cidade1, area1, cidade2, area2, area1 > area2);
    printf("----------------- \n");
    printf("----------------- \n");
    printf("PIB: %s (%f milhões) X %s (%f milhões) = %d \n", cidade1, pib1, cidade2, pib2, pib1 > pib2);
    printf("----------------- \n");
    printf("NÚMERO DE PONTOS TURÍSTICOS: %s (%d pontos) X %s (%d pontos) = %d \n", cidade1, turistico1, cidade2, turistico2, turistico1 > turistico2);
    printf("----------------- \n");
    printf("DENSIDADE POPULACIONAL: %s (%.2f habitantes/km2) X %s (%.2f habitantes/km2) = %d \n", cidade1, densidadePopulacional1, cidade2, densidadePopulacional2, densidadePopulacional1 < densidadePopulacional2);
    printf("----------------- \n");
    printf("PIB PER CAPTA: %s (%.3f reais/habitante) X %s (%.3f reais/habitantes) = %d \n", cidade1, pibPerCapta1, cidade2, pibPerCapta2, pibPerCapta1 > pibPerCapta2);
    printf("----------------- \n");

    //cálculo do Super Poder
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)turistico1 + pibPerCapta1 + (area1 / populacao1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)turistico2 + pibPerCapta2 + (area2 / populacao2);

    //exibindo o ganhador do super poder
    printf("--- SUPER PODER! --- \n");
    printf("Ganha quem tiver a maior soma de todas as propriedades! \n");
    printf("Super poder %s = %f \n", cidade1, superPoder1);
    printf("Super poder %s = %f \n", cidade2, superPoder2);
    printf("---------------------\n");
    printf("E o vencedor entre %s e %s é... = %d! \n", cidade1, cidade2, superPoder1 > superPoder2);
    printf("PARABÉNS!");

    return 0;   
}
