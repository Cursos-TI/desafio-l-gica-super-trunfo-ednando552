#include <stdio.h>
#include <stdlib.h>



int main () {
    //Dados das cartas
    //Carta 1//
    char nome1 [20] = "A";
    char codigodacarta1 [4] = "A01";
    char cidade1 [20] = "São Paulo";
    unsigned long int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosturisticos1 = 50;
    float densidade1 = populacao1/area1;
    float pibpercapita1 = pib1*1000000000/populacao1; // O PIB é dado em bilhões, para isso multipliquei por 1 bilhão para obter o valor em reais
    float superpoder1 = (populacao1 + area1 + pib1 + pontosturisticos1 + densidade1 + pibpercapita1) / 6; // Média dos atributos para determinar o super poder da carta
    printf("\n");    
    
    //Carta 2//
    char nome2 [20] = "B";
    char codigodacarta2 [4] = "B02";
    char cidade2 [20] = "Rio de Janeiro";
    unsigned long int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosturisticos2 = 30;
    float densidade2 = populacao2/area2;
    float pibpercapita2 = pib2*1000000000/populacao2; // O PIB é dado em bilhões, para isso multipliquei por 1 bilhão para obter o valor em reais
    float superpoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 + densidade2 + pibpercapita2) / 6; // Média dos atributos para determinar o super poder da carta
    printf("\n");

    int menu, atributo, opcao;

    //Menu do Jogo
    printf("***Bem-vindo ao jogo de Super Trunfo!***\n");
    printf("Escolha uma opção!\n");
    printf("1. Jogar\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair\n");
    printf("Digite sua escolha (1-3): ");
    scanf("%d", &menu);

    if (menu == 1) { //Jogar o jogo escolhendo uma carta
        printf("Escolha uma carta para comparar:\n");
        printf("1. Carta 1 - %s\n", cidade1);
        printf("2. Carta 2 - %s\n", cidade2);
        printf("Digite sua opção (1-2): ");
        scanf("%d", &opcao);
        // Verifica a escolha da carta e exibe a mensagem correspondente
        if(opcao == 1) {
            printf("Você escolheu a Carta 1 - %s!\n", cidade1);
        } else if (opcao == 2) {
            printf("Você escolheu a Carta 2 - %s!\n", cidade2);
        } else {
            printf("Opção inválida! Por favor, escolha 1 ou 2 para a carta.\n");
        }
            if(opcao == 1 || opcao == 2) {   //Escolha dos atributos para comparar as cartas
                printf("Vamos comparar os atributos das cartas!\n");
                printf("Escolha um atributo para comparar:\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
                printf("5. Densidade Demográfica\n");
                printf("6. PIB per capita\n");
                printf("7. Super Poder\n");
                printf("Digite sua escolha (1-7): ");
                scanf("%d", &atributo);
                switch (atributo) { //Comparação dos atributos escolhidos e exibição do resultado
                    case 1:
                    if (populacao1 > populacao2) {
                        printf("A Carta 1 %s tem a maior população no valor de %lu contra %s que tem %lu pessoas!\n", cidade1, populacao1, cidade2, populacao2);
                    } else if (populacao1 < populacao2) {
                        printf("A Carta 2 %s tem a maior população no valor de %lu contra %s que tem %lu pessoas!\n", cidade2, populacao2, cidade1, populacao1);
                    }
                    break;
                    case 2:
                    if (area1 > area2) {
                        printf("A Carta 1 %s tem a maior valor de área cerca de %f contra %s que tem %f!\n", cidade1, area1, cidade2, area2);
                    } else if (area1 < area2) {
                        printf("A Carta 2 %s tem a maior área cerca de %f contra %s que tem %f!\n", cidade2, area2, cidade1, area1);
                    } else {
                        printf("As duas cartas tem a mesma área de %f!\n", area1);
                    }
                    break;
                    case 3:
                    if (pib1 > pib2) {
                        printf("A Carta 1 %s tem o maior PIB cerca de %f contra %s que tem %f!\n", cidade1, pib1, cidade2, pib2);
                    } else if (pib1 < pib2) {
                        printf("A Carta 2 %s tem o maior PIB cerca de %f contra %s que tem %f!\n", cidade2, pib2, cidade1, pib1);
                    } else {
                        printf("As duas cartas tem o mesmo PIB de %f!\n", pib1);
                    }
                    break;
                    case 4:
                    if (pontosturisticos1 > pontosturisticos2) {
                        printf("A Carta 1 %s tem mais pontos turísticos cerca de %d contra %s que tem %d!\n", cidade1, pontosturisticos1, cidade2, pontosturisticos2);
                    } else if (pontosturisticos1 < pontosturisticos2) {
                        printf("A Carta 2 %s tem mais pontos turísticos cerca de %d contra %s que tem %d!\n", cidade2, pontosturisticos2, cidade1, pontosturisticos1);
                    } else {
                        printf("As duas cartas tem o mesmo número de pontos turísticos de %d!\n", pontosturisticos1);
                    }
                    break;
                    case 5:
                    if (densidade1 > densidade2) {
                        printf("A Carta 1 %s tem a maior densidade demográfica, cerca de %f, ou seja, contra você perdeu essa rodada!\n", cidade1, densidade1);
                    } else if (densidade1 < densidade2) {
                        printf("A Carta 2 %s tem a maior densidade demográfica, cerca de %f, ou seja, você ganhou essa rodada!\n", cidade2, densidade2);
                    } else {
                        printf("As duas cartas tem a mesma densidade demográfica de %f!\n", densidade1);
                    }
                    break;
                    case 6:
                    if (pibpercapita1 > pibpercapita2) {
                        printf("A Carta 1 %s tem o maior PIB per capita, cerca de %f sobre %s que tem %f!\n", cidade1, pibpercapita1, cidade2, pibpercapita2);
                    } else if (pibpercapita1 < pibpercapita2) {
                        printf("A Carta 2 %s tem o maior PIB per capita, cerca de %f sobre %s que tem %f!\n", cidade2, pibpercapita2, cidade1, pibpercapita1);
                    } else {
                        printf("As duas cartas tem o mesmo PIB per capita de %f!\n", pibpercapita1);
                    }
                    break;
                    case 7:
                    if (superpoder1 > superpoder2) {
                        printf("A Carta 1 %s tem o maior super poder, cerca de %.2f sobre %s que tem %.2f!\n", cidade1, superpoder1, cidade2, superpoder2);
                    } else if (superpoder1 < superpoder2) {
                        printf("A Carta 2 %s tem o maior super poder, cerca de %.2f sobre %s que tem %.2f!\n", cidade2, superpoder2, cidade1, superpoder1);
                    } else {
                        printf("As duas cartas tem o mesmo super poder de %.2f!\n", superpoder1);
                    }
                    break;
                    default:
                    printf("Opção inválida! Por favor, escolha um número entre 1 e 7.\n");
                }

            } else {
                printf("Opção inválida! Por favor, escolha 1 ou 2 para a carta.\n");
            }
    } else if (menu == 2) { // Regras do jogo
            printf("Regras do jogo:\n");
        printf("1. Cada jogador escolhe uma carta para comparar seus atributos.\n");
        printf("2. O jogador escolhe um atributo para comparar entre as duas cartas.\n");
        printf("3. O jogador com o maior valor no atributo escolhido vence a rodada.\n");
        printf("4. Se o atributo escolhido for a densidade demográfica, o jogador com o menor valor vence a rodada.\n");
    } else if (menu == 3) { // Sair do jogo
        printf("Obrigado por jogar! Até a próxima!\n");
    } else {
        printf("Opção inválida! Por favor, escolha um número entre 1 e 3.\n");
    }
    return 0;
    }
