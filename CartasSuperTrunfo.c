#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Super Trunfo - Países!\n");
    printf("Cadastre sua carta abaixo:\n");
    printf("--------------------------- \n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turisticos;

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade);
    
    printf("Digite o código da cidade: \n");
    scanf(" %s", &codigo);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("R$ %f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", turisticos);

    printf("--------------------------- \n");
    printf("Cidade: %s \n", cidade);
    printf("Código: %s \n", codigo);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: R$%f \n", pib);
    printf("Número de Pontos Turísticos: %d", turisticos);
    printf("--------------------------- \n");

    return 0;
}
