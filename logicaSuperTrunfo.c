#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Dados das cartas
    // Carta 1
    char nome1[20] = "A";
    char cidade1[20] = "São Paulo";
    unsigned long int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosturisticos1 = 50;
    float densidade1 = populacao1 / area1;
    float pibpercapita1 = pib1 * 1000000000 / populacao1;
    float superpoder1 = (populacao1 + area1 + pib1 + pontosturisticos1 + densidade1 + pibpercapita1) / 6;

    // Carta 2
    char nome2[20] = "B";
    char cidade2[20] = "Rio de Janeiro";
    unsigned long int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosturisticos2 = 30;
    float densidade2 = populacao2 / area2;
    float pibpercapita2 = pib2 * 1000000000 / populacao2;
    float superpoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 + densidade2 + pibpercapita2) / 6;

    char primeiroAtributo, segundoAtributo;
    float valor1_atributo1, valor1_atributo2;
    float valor2_atributo1, valor2_atributo2;

    printf("*** Bem-vindo ao jogo de Super Trunfo! ***\n\n");

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    printf("A. População\nB. Área\nC. PIB\nD. Densidade demográfica\nE. Pontos Turísticos\nF. PIB per Capita\nG. Super Poder\n");
    scanf(" %c", &primeiroAtributo);

    // Switch para armazenar valores da primeira escolha
    switch (primeiroAtributo) {
        case 'A': 
        case 'a':
            printf("Você escolheu População!\n");
            valor1_atributo1 = populacao1; valor2_atributo1 = populacao2;
            break;
        case 'B': 
        case 'b':
            printf("Você escolheu Área!\n");
            valor1_atributo1 = area1; valor2_atributo1 = area2;
            break;
        case 'C': 
        case 'c':
            printf("Você escolheu PIB!\n");
            valor1_atributo1 = pib1; valor2_atributo1 = pib2;
            break;
        case 'D': 
        case 'd':
            printf("Você escolheu Densidade Demográfica!\n");
            valor1_atributo1 = densidade1; valor2_atributo1 = densidade2;
            break;
        case 'E': 
        case 'e':
            printf("Você escolheu Pontos Turísticos!\n");
            valor1_atributo1 = pontosturisticos1; valor2_atributo1 = pontosturisticos2;
            break;
        case 'F': 
        case 'f':
            printf("Você escolheu PIB per Capita!\n");
            valor1_atributo1 = pibpercapita1; valor2_atributo1 = pibpercapita2;
            break;
        case 'G': 
        case 'g':
            printf("Você escolheu Super Poder!\n");
            valor1_atributo1 = superpoder1; valor2_atributo1 = superpoder2;
            break;
        default:
            printf("Opção inválida. Encerrando...\n");
            return 0;
    }

    // Escolha do segundo atributo
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");

    // Mostra somente os atributos que não foram escolhidos de primeira, achei melhor assim.
    if(primeiroAtributo != 'A' && primeiroAtributo != 'a') {
    printf("A. População\n");
    }
    if(primeiroAtributo != 'B' && primeiroAtributo != 'b') {
    printf("B. Área\n");
    }
    if(primeiroAtributo != 'C' && primeiroAtributo != 'c') {
    printf("C. PIB\n");
    }
    if(primeiroAtributo != 'D' && primeiroAtributo != 'd') {
    printf("D. Densidade demográfica\n");
    }
    if(primeiroAtributo != 'E' && primeiroAtributo != 'e') {
    printf("E. Pontos Turísticos\n");
    }
    if(primeiroAtributo != 'F' && primeiroAtributo != 'f') {
    printf("F. PIB per Capita\n");
    }
    if(primeiroAtributo != 'G' && primeiroAtributo != 'g') {
    printf("G. Super Poder\n");
    }

    scanf(" %c", &segundoAtributo);

    // Switch para armazenar valores da segunda escolha
    switch (segundoAtributo) {
        case 'A': 
        case 'a':
            valor1_atributo2 = populacao1; valor2_atributo2 = populacao2;
            break;
        case 'B': 
        case 'b':
            valor1_atributo2 = area1; valor2_atributo2 = area2;
            break;
        case 'C': 
        case 'c':
            valor1_atributo2 = pib1; valor2_atributo2 = pib2;
            break;
        case 'D': 
        case 'd':
            valor1_atributo2 = densidade1; valor2_atributo2 = densidade2;
            break;
        case 'E': 
        case 'e':
            valor1_atributo2 = pontosturisticos1; valor2_atributo2 = pontosturisticos2;
            break;
        case 'F': 
        case 'f':
            valor1_atributo2 = pibpercapita1; valor2_atributo2 = pibpercapita2;
            break;
        case 'G': 
        case 'g':
            valor1_atributo2 = superpoder1; valor2_atributo2 = superpoder2;
            break;
        default:
            printf("Opção inválida. Encerrando...\n");
            return 0;
    }

    // Tratamento da densidade para definir um vencedor   
    //Atribuindo o valor zero, o sistema entende que mesmo sendo a densidade demografica maior, 
    //isso não é uma vantagem, portanto acaba sendo valor falso e assim quem tem densidade maior perde.
    int resultado1 = 0, resultado2 = 0;

    // Atributo 1
    if (primeiroAtributo == 'D' || primeiroAtributo == 'd') {
    resultado1 = (valor1_atributo1 < valor2_atributo1);
    } else {
    resultado1 = (valor1_atributo1 > valor2_atributo1);
    }
    // Atributo 2
    if (segundoAtributo == 'D' || segundoAtributo == 'd') {
    resultado2 = (valor1_atributo2 < valor2_atributo2);
    } else {
    resultado2 = (valor1_atributo2 > valor2_atributo2);
    }
    
    //Aqui encerra a Densidade, grazadeus.

    // Soma dos atributos
    float soma1 = valor1_atributo1 + valor1_atributo2;
    float soma2 = valor2_atributo1 + valor2_atributo2;

    // Exibição do resultado
    printf("\n***** RESULTADO *****\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Atributo 1: %.2f\n", valor1_atributo1);
    printf("Atributo 2: %.2f\n", valor1_atributo2);
    printf("Soma: %.1f\n\n", soma1);

    printf("Carta 2: %s\n", cidade2);
    printf("Atributo 1: %.2f\n", valor2_atributo1);
    printf("Atributo 2: %.2f\n", valor2_atributo2);
    printf("Soma: %.1f\n\n", soma2);

    if (soma1 > soma2) {
    printf("Vencedor: %s\n", cidade1);
    } else if (soma2 > soma1) {
    printf("Vencedor: %s\n", cidade2);
    } else {
    printf("Empate!\n");
    }

    return 0;
}