#include <stdio.h>

int main() {

    //criação das variáveis
    int populacao, turistico;
    float area, pib;
    double densidadepopul, pibpercapta;
    char cidade[20];
    char estado;
    char codigo[5];

    //mensagem inicial
    printf("Bem-vindo ao Super Trunfo! \nInsira as informações abaixo:\n");
    printf("--------------------------\n");

    //obtenção das inforções das cartas, inseridas pelo usuário
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite o código do estado (A-H): \n");
    scanf(" %c", &estado);

    printf("Digite o código da cidade (letra + 01-04): \n");
    scanf("%s", codigo);

    printf("Digite a população da cidade (valor total): \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km2): \n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade (em milhões de reais): \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turistico);

    //calculando a densidade populacional e o PIB per capta
    densidadepopul = populacao / area;
    pibpercapta = pib / populacao;

    //mostrando o resultado na tela para o usuário
    printf("-------- %s --------- \n", cidade);
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("População: %d habitantes \n", populacao);
    printf("Área: %.2f km2 \n", area);
    printf("PIB: %.3f milhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", turistico);
    printf("Densidade populacional: %.2lf habitantes/km2 \n", densidadepopul);
    printf("PIB per capta: %.3lf milhões/habitante \n", pibpercapta);
    printf("------------------------------------ \n");

    return 0;
}
