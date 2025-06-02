#include <stdio.h>  // Para usar printf e scanf
#include <string.h> // Para usar strcspn

int main() {
    // Declaração das variáveis
    char estado1[19], estado2[19];   // Nome do estado
    char codigo1[3], codigo2[3];  // Código da carta
    char cidade1[40], cidade2[40];  // Nome da cidade
    unsigned long int populacao1, populacao2;  // População da cidade
    float area1, area2;  // Área da cidade
    float PIB1, PIB2;  // PIB da cidade
    int pontosT1, pontosT2;  // Número de Pontos Turísticos
    float dp1,dp2;  // Densidade Populacional
    float PIB_C1, PIB_C2;  // PIB per Capita
    float SuperPoder1, SuperPoder2; // soma dos valores
    int resultado1, resultado2; // Variáveis para armazenar o resultado

    // Início do programa

    printf("CADASTRO DA PRIMEIRA CARTA:\n"); 

    printf("Nome do Estado: ");
    fgets(estado1, 40, stdin); // Lê o nome do estado
    estado1[strcspn(estado1, "\n")] = 0; // Remove o '\n' do final da string

    printf("Código da carta:");
    scanf("%s", codigo1); // Lê o código da carta

    while (getchar() != '\n'); // Limpa o buffer de entrada e retira o "Enter"
    printf("Nome da cidade: ");
    fgets(cidade1, 40, stdin);  // Lê o nome da cidade
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove o '\n' do final da string

    printf("População (somente números):");
    scanf("%lu", &populacao1);  // Lê a população da cidade

    printf("Área da cidade (somente números):");
    scanf("%f", &area1);  // Lê a área da cidade

    printf("PIB da cidade (somente números):");
    scanf("%f" , &PIB1);  // Lê o PIB da cidade

    printf("N° de Pontos Turísticos: ");
    scanf("%d" , &pontosT1);  // Lê o número de pontos turísticos

    printf("\n");  // Pula uma linha para melhor formatação
    printf("\n");
    printf("Dados da primeira Carta Salvos!\n");
    printf("\n");
    printf("---------------FIM DO CADASTRO DA PRIMEIRA CARTA---------------\n");
    printf("\n");
    printf("\n");
    printf("---------------INÍCIO DO CADASTRO DA SEGUNDA CARTA---------------\n");
    printf("\n");
    printf("CADASTRO DA SEGUNDA CARTA:\n");

    while (getchar() != '\n'); // Limpa o buffer de entrada e retira o "Enter"
    printf("Nome do Estado: ");
    fgets(estado2, 40, stdin);  // Lê o nome do estado
    estado2[strcspn(estado2, "\n")] = 0; // Remove o '\n' do final da string

    printf("Código da carta:");
    scanf("%s", codigo2);   // Lê o código da carta

    while (getchar() != '\n'); // Limpa o buffer de entrada e retira o "Enter"
    printf("Nome da cidade: ");
    fgets(cidade2, 40, stdin);  // Lê o nome da cidade
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove o '\n' do final da string

    printf("População (somente números):");
    scanf("%lu", &populacao2);  // Lê a população da cidade

    printf("Área da cidade (somente números):");
    scanf("%f", &area2);  // Lê a área da cidade

    printf("PIB da cidade (somente números):");
    scanf("%f" , &PIB2);  // Lê o PIB da cidade

    printf("N° de Pontos Turísticos: ");
    scanf("%d" , &pontosT2);  // Lê o número de pontos turísticos

    printf("\n");
    printf("\n");
    printf("Dados da segunda Carta Salvos!\n");
    printf("\n");
    printf("---------------FIM DO CADASTRO---------------\n");
    printf("\n");

    // Calculo da Densidade Populacional
    dp1 = (float)populacao1 / area1;
    dp2 = (float)populacao2 / area2;

    // Calculo do PIB per Capita
    PIB_C1 = PIB1 / (float)populacao1;
    PIB_C2 = PIB2 / (float)populacao2;

    // Super Poder: soma dos atributos numéricos + inverso da densidade populacional
    SuperPoder1 = (float)populacao1 + area1 + PIB1 + (float)pontosT1 + PIB_C1 + (1.0f / dp1);
    SuperPoder2 = (float)populacao2 + area2 + PIB2 + (float)pontosT2 + PIB_C2 + (1.0f / dp2);

    printf("---------------INÍCIO DO JOGO---------------\n");
    printf("\n");
    printf("\n");

    printf("PRIMEIRA CARTA:\n");

    printf("Estado: %s Rio\n", estado1);  // Exibe o nome do estado
    printf("Código: %s \n", codigo1);  // Exibe o código da carta
    printf("Cidade: %s \n", cidade1);  // Exibe o nome da cidade
    printf("População: %lu \n", populacao1);  // Exibe a população da cidade
    printf("Área: %.2f \n", area1);  // Exibe a área da cidade
    printf("PIB: %.2f \n", PIB1);  // Exibe o PIB da cidade
    printf("Pontos Turisticos: %d \n", pontosT1);  // Exibe o número de pontos turísticos
    printf("Densidade Populacional: %.2f hab/km² \n" , dp1);  // Exibe a densidade populacional
    printf("PIB per Capita: R$%.2f \n" , PIB_C1);  // Exibe o PIB per capita

    printf("\n");
    printf("------------------------------------------\n");
    printf("\n");
    printf("SEGUNDA CARTA:\n");

    printf("Estado: %s Rio\n", estado2);  // Exibe o nome do estado
    printf("Código: %s \n", codigo2);  // Exibe o código da carta
    printf("Cidade: %s \n", cidade2);  // Exibe o nome da cidade
    printf("População: %lu \n", populacao2);  // Exibe a população da cidade
    printf("Área: %.2f \n", area2);  // Exibe a área da cidade
    printf("PIB: %.2f \n", PIB2);  // Exibe o PIB da cidade
    printf("Pontos Turisticos: %d \n", pontosT2);  // Exibe o número de pontos turísticos
    printf("Densidade Populacional: %.2f hab/km² \n" , dp2);  // Exibe a densidade populacional
    printf("PIB per Capita: R$%.2f \n" , PIB_C2);  // Exibe o PIB per capita

    printf("\n");
    printf("------------------------------------------\n");
    printf("\n");

    // Verifica qual carta é a vencedora
    printf("\nComparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2) ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosT1 > pontosT2) ? 1 : 2, (pontosT1 > pontosT2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (dp1 < dp2) ? 1 : 2, (dp1 < dp2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PIB_C1 > PIB_C2) ? 1 : 2, (PIB_C1 > PIB_C2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 > SuperPoder2) ? 1 : 2, (SuperPoder1 > SuperPoder2) ? 1 : 0);

    printf("------------------------------------------\n");
    printf("\n");

    // Variáveis para contar vitórias
    int vitorias1 = 0, vitorias2 = 0;

    // Comparação de População
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
        vitorias1++;
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
        vitorias2++;
    } else {
        printf("Resultado: Empate!\n\n");
    }

    // Comparação de Área
    printf("Comparação de cartas (Atributo: Área):\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
        vitorias1++;
    } else if (area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
        vitorias2++;
    } else {
        printf("Resultado: Empate!\n\n");
    }

    // Comparação de PIB
    printf("Comparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, PIB1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, PIB2);
    if (PIB1 > PIB2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
        vitorias1++;
    } else if (PIB2 > PIB1) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
        vitorias2++;
    } else {
        printf("Resultado: Empate!\n\n");
    }

    // Comparação de Pontos Turísticos
    printf("Comparação de cartas (Atributo: Pontos Turísticos):\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontosT1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontosT2);
    if (pontosT1 > pontosT2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
        vitorias1++;
    } else if (pontosT2 > pontosT1) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
        vitorias2++;
    } else {
        printf("Resultado: Empate!\n\n");
    }

    // Comparação de Densidade Populacional (menor vence)
    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, dp1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, dp2);
    if (dp1 < dp2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
        vitorias1++;
    } else if (dp2 < dp1) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
        vitorias2++;
    } else {
        printf("Resultado: Empate!\n\n");
    }

    // Comparação de PIB per Capita
    printf("Comparação de cartas (Atributo: PIB per Capita):\n");
    printf("Carta 1 - %s (%s): R$%.2f\n", cidade1, estado1, PIB_C1);
    printf("Carta 2 - %s (%s): R$%.2f\n", cidade2, estado2, PIB_C2);
    if (PIB_C1 > PIB_C2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
        vitorias1++;
    } else if (PIB_C2 > PIB_C1) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
        vitorias2++;
    } else {
        printf("Resultado: Empate!\n\n");
    }

    // Exibe o placar final
    printf("============================================\n");
    printf("PLACAR FINAL:\n");
    printf("Carta 1 (%s): %d vitórias\n", cidade1, vitorias1);
    printf("Carta 2 (%s): %d vitórias\n", cidade2, vitorias2);

    if (vitorias1 > vitorias2) {
        printf("VENCEDORA GERAL: Carta 1 (%s)!\n", cidade1);
    } else if (vitorias2 > vitorias1) {
        printf("VENCEDORA GERAL: Carta 2 (%s)!\n", cidade2);
    } else {
        printf("RESULTADO FINAL: Empate!\n");
    }

    int atributo1 = 0, atributo2 = 0;
    int valido = 0;

    // Menu para escolha do primeiro atributo
    do {
        printf("===== MENU DE COMPARAÇÃO - PRIMEIRO ATRIBUTO =====\n");
        printf("Escolha o primeiro atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Digite o número da opção desejada: ");
        scanf("%d", &atributo1);

        valido = (atributo1 >= 1 && atributo1 <= 5);
        if (!valido) printf("Opção inválida! Tente novamente.\n");
    } while (!valido);

    // Menu dinâmico para escolha do segundo atributo
    do {
        printf("\n===== MENU DE COMPARAÇÃO - SEGUNDO ATRIBUTO =====\n");
        printf("Escolha o segundo atributo para comparar (diferente do primeiro):\n");
        for (int i = 1; i <= 5; i++) {
            if (i == atributo1) continue;
            switch(i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
        printf("Digite o número da opção desejada: ");
        scanf("%d", &atributo2);

        valido = (atributo2 >= 1 && atributo2 <= 5 && atributo2 != atributo1);
        if (!valido) printf("Opção inválida! Tente novamente.\n");
    } while (!valido);

    // Função auxiliar para obter o valor do atributo
    float valorAtributo(int atributo, int carta) {
        switch(atributo) {
            case 1: return carta == 1 ? (float)populacao1 : (float)populacao2;
            case 2: return carta == 1 ? area1 : area2;
            case 3: return carta == 1 ? PIB1 : PIB2;
            case 4: return carta == 1 ? (float)pontosT1 : (float)pontosT2;
            case 5: return carta == 1 ? dp1 : dp2;
            default: return 0;
        }
    }

    // Função auxiliar para imprimir o nome do atributo
    void nomeAtributo(int atributo) {
        switch(atributo) {
            case 1: printf("População"); break;
            case 2: printf("Área"); break;
            case 3: printf("PIB"); break;
            case 4: printf("Pontos Turísticos"); break;
            case 5: printf("Densidade Demográfica"); break;
        }
    }

    // Comparação dos atributos individualmente
    float v1_a1 = valorAtributo(atributo1, 1);
    float v2_a1 = valorAtributo(atributo1, 2);
    float v1_a2 = valorAtributo(atributo2, 1);
    float v2_a2 = valorAtributo(atributo2, 2);

    printf("\n===== RESULTADO DAS COMPARAÇÕES =====\n");
    printf("Carta 1: %s (%s)\n", cidade1, estado1);
    printf("Carta 2: %s (%s)\n\n", cidade2, estado2);

    // Primeiro atributo
    printf("Atributo 1: ");
    nomeAtributo(atributo1);
    printf("\n");
    printf("%s: %.2f\n", cidade1, v1_a1);
    printf("%s: %.2f\n", cidade2, v2_a1);

    int vencedor1;
    if (atributo1 == 5) { // Densidade Demográfica (menor vence)
        vencedor1 = (v1_a1 < v2_a1) ? 1 : (v2_a1 < v1_a1) ? 2 : 0;
    } else {
        vencedor1 = (v1_a1 > v2_a1) ? 1 : (v2_a1 > v1_a1) ? 2 : 0;
    }
    if (vencedor1 == 1)
        printf("Vencedor no atributo 1: %s\n\n", cidade1);
    else if (vencedor1 == 2)
        printf("Vencedor no atributo 1: %s\n\n", cidade2);
    else
        printf("Empate no atributo 1!\n\n");

    // Segundo atributo
    printf("Atributo 2: ");
    nomeAtributo(atributo2);
    printf("\n");
    printf("%s: %.2f\n", cidade1, v1_a2);
    printf("%s: %.2f\n", cidade2, v2_a2);

    int vencedor2;
    if (atributo2 == 5) { // Densidade Demográfica (menor vence)
        vencedor2 = (v1_a2 < v2_a2) ? 1 : (v2_a2 < v1_a2) ? 2 : 0;
    } else {
        vencedor2 = (v1_a2 > v2_a2) ? 1 : (v2_a2 > v1_a2) ? 2 : 0;
    }
    if (vencedor2 == 1)
        printf("Vencedor no atributo 2: %s\n\n", cidade1);
    else if (vencedor2 == 2)
        printf("Vencedor no atributo 2: %s\n\n", cidade2);
    else
        printf("Empate no atributo 2!\n\n");

    // Soma dos atributos
    float soma1 = v1_a1 + v1_a2;
    float soma2 = v2_a1 + v2_a2;

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    // Resultado final
    if (soma1 > soma2)
        printf("VENCEDORA DA RODADA: %s!\n", cidade1);
    else if (soma2 > soma1)
        printf("VENCEDORA DA RODADA: %s!\n", cidade2);
    else
        printf("Empate!\n");

    return 0;

}