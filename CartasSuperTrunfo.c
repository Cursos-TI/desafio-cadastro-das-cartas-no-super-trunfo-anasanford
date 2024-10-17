#include <stdio.h>

int main() {
    //criação das variáveis das cartas 1 e 2
    int populacao1, turistico1, populacao2, turistico2, selecao, atributo;
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
    printf("------ Menu Inicial ---------\n");
    printf("1. Iniciar Nova Partida\n");
    printf("2. Regras do Jogo\n");
    printf("3. Sair do Jogo\n");
    printf("Escolha uma das opções acima: ");
    scanf("%d", &selecao);

    switch (selecao)
    {
    case 1:
        /* início de uma partida */
        //obtenção das informações da primeira carta, inseridas pelo usuário:
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

        //obtendo as informações da segunda carta, inseridas pelo usuário:
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
        printf(" \n----------- %s ------------ \n", cidade1);
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
        printf("Vamos comparar os atributos das cartas para ver qual é a vencedora em cada categoria!\n");
        printf("Escolha um dos atributos abaixo: \n");
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Pontos Turisticos \n");
        printf("5. Densidade demográfica \n");
        printf("6. PIB per capta \n");
        printf("Atributo para comparação: ");
        scanf("%d", &atributo);

        switch (atributo)
        {
        case 1:
            //comparando as populações
            if (populacao1 > populacao2) {
                printf("POPULAÇÃO => %s ganhou!\n", cidade1);
            } else {
                printf("POPULAÇÃO => %s ganhou!\n", cidade2);
            };
        break;
        case 2:
            //comparando a área
            if (area1 > area2) {
                printf("ÁREA => %s ganhou!\n", cidade1);
            } else {
                printf("ÁREA => %s ganhou!\n", cidade2);
            };
        break;
        case 3:
            //comparando o PIB
            if (pib1 > pib2) {
                printf("PIB => %s ganhou!\n", cidade1);
            } else {
                printf("PIB => %s ganhou!\n", cidade2);
            };
        break;
        case 4:
            //comparando o número de pontos turísticos
            if (turistico1 > turistico2) {
                printf("PONTOS TURÍSTICOS => %s ganhou!\n", cidade1);
            } else {
                printf("PONTOS TURÍSTICOS => %s ganhou!\n", cidade2);
            };
        break;
        case 5:
            //comparando a densidade populacional
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("DENSIDADE POPULACIONAL => %s ganhou!\n", cidade1);
            } else {
                printf("DENSIDADE POPULACIONAL => %s ganhou!\n", cidade2);
            };
        break;
        case 6:
            //comparando o pib per capta
            if (pibPerCapta1 > pibPerCapta2) {
                printf("PIB PER CAPTA => %s ganhou!\n", cidade1);
            } else {
                printf("PIB PER CAPTA => %s ganhou!\n", cidade2);
            };
        break;
        default:
            print("Opção inválida!");
        break;
        }
    break;
    case 2: 
        /*ver as regras*/
        printf("--- REGRAS: ---\n");
        printf("O jogador deve inserir os dados de todas as cartas...");
    break;
    case 3:
        /*sair do jogo*/
        printf("Saindo do jogo...\n");
        printf("Até a próxima ;)");
    break;
    default:
        printf("Opção inválida!");
        break;
    }

    //criando variáveis e fazendo o cálculo do Super Poder
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)turistico1 + pibPerCapta1 + (area1 / populacao1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)turistico2 + pibPerCapta2 + (area2 / populacao2);

    //exibindo o ganhador do super poder
    printf("--- SUPER PODER! --- \n");
    printf("Ganha quem tiver a maior soma de todas as propriedades! \n");
    printf("Super poder %s = %.3f pontos\n", cidade1, superPoder1);
    printf("Super poder %s = %.3f pontos\n", cidade2, superPoder2);
    printf("---------------------\n");
    if (superPoder1 > superPoder2) {
        printf("E o vencedor entre %s e %s é... %s!\n", cidade1, cidade2, cidade1);
    } else {
        printf("E o vencedor entre %s e %s é... %s!\n", cidade1, cidade2, cidade2);
    }
    printf("PARABÉNS! \n");

    return 0;   
}
