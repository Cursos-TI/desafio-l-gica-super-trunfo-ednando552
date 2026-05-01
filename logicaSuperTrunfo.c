#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    printf("***Bem-vindo ao jogo de Super Trunfo!***\n");
    printf("Hoje vamos comparar duas cartas de cidades brasileiras: São Paulo e Rio de Janeiro.\n");
    printf("Cada carta tem atributos como população, área, PIB, pontos turísticos, densidade demográfica e PIB per capita.\n");
    printf("Vamos descobrir qual carta tem o maior super poder com base nesses atributos!");
    printf("Escolha uma opção: \n")
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
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
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    printf("Atributo População Carta 1 - São Paulo (SP): %lu.%03lu.%03lu\n" "Atributo População Carta 2 - Rio de Janeiro (RJ): %lu.%03lu.%03lu\n", populacao1 / 1000000, (populacao1 % 1000000) / 1000, populacao1 % 1000, populacao2 / 1000000, (populacao2 % 1000000) / 1000, populacao2 % 1000);
    if (populacao1 > populacao2) {
        printf("Carta 1(São Paulo) venceu!\n\n");
     } else printf("Carta 2(Rio de Janeiro) venceu!\n\n");
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
