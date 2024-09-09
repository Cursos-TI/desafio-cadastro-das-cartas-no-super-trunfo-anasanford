#include <stdio.h>

int main() {
    // mensagem inicial
    printf("Super Trunfo - Países!\n");
    printf("Cadastre sua carta abaixo:\n");
    printf("--------------------------- \n");

    // criando as variáveis:
    char estado;
    char codigo[3];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int turisticos;

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o código do estado (de A a H): \n");
    scanf(" %c", &estado);
    
    printf("Digite o código da cidade (letra + 01 a 04): \n");
    scanf(" %s", &codigo);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade (em km²): \n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turisticos);

    // exibindo os resultados:
    printf("--------------------------- \n");
    printf("Cidade: %s \n", cidade);
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d \n", turisticos);
    printf("--------------------------- \n");

    return 0;
}
