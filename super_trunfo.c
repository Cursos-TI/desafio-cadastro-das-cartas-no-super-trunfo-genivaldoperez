#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

float divide(float x, float y);

int main() 
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo.
    // A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).
   
    // Definindo as variáveis da carta 1
    char estado_a = 'A';
    char codigo_a01[4] = "A01";
    char nome_cidade_a01[50];
    int populacao_a01;
    float area_a01;
    float pib_a01;
    int nPontosTuristicos_a01;

    // Definindo as variáveis da carta 2
    char codigo_a02[4] = "A02";
    char nome_cidade_a02[50];
    int populacao_a02;
    float area_a02;
    float pib_a02;
    int nPontosTuristicos_a02;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastrando as cartas das cidades do Estado A:
    printf("Ola jogador, insira os dados da Carta 1\n");

    // Cadastrando a carta 1: Cidade 01 do Estado A:
    printf("\n");
    printf("Digite o nome da cidade 01 do Estado A.\n");
    scanf("%s", nome_cidade_a01);
    printf("Digite a população da cidade de %s\n", nome_cidade_a01);
    scanf("%d", &populacao_a01);
    printf("Digite a área da cidade de %s\n", nome_cidade_a01);
    scanf("%f", &area_a01);
    printf("Digite o PIB da cidade de %s\n", nome_cidade_a01);
    scanf("%f", &pib_a01);
    printf("Digite o número de pontos turisticos da cidade de %s\n", nome_cidade_a01);
    scanf("%d", &nPontosTuristicos_a01);

    // Cadastrando a carta 2: Cidade 02 do Estado A:
    printf("\n");
    printf("Digite o nome da cidade 02 do Estado A.\n");
    scanf("%s", nome_cidade_a02);
    printf("Digite a população da cidade de %s\n", nome_cidade_a02);
    scanf("%d", &populacao_a02);
    printf("Digite a área da cidade de %s\n", nome_cidade_a02);
    scanf("%f", &area_a02);
    printf("Digite o PIB da cidade de %s\n", nome_cidade_a02);
    scanf("%f", &pib_a02);
    printf("Digite o número de pontos turisticos da cidade de %s\n", nome_cidade_a02);
    scanf("%d", &nPontosTuristicos_a02);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\n");
    printf("Relação das Cartas Cadastradas:\n");

    // Imorimindo a carta A01
    printf("\n================================================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_a);
    printf("Código da Carta: %s\n", codigo_a01);
    printf("Nome da Cidade: %s\n", nome_cidade_a01);
    printf("População: %d\n", populacao_a01);
    printf("Área: %.2f km²\n", area_a01);
    printf("PIB: %.2f de reais\n", pib_a01);
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos_a01);
    printf("Densidade Populacional: %.2f hab/km²\n", divide((float)populacao_a01, area_a01));
    printf("PIB per Capita: %.2f reais\n", divide(pib_a01, (float)populacao_a01));
    printf("==================================================\n");

    // Imorimindo a carta A02
    printf("\n================================================\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_a);
    printf("Código da Carta: %s\n", codigo_a02);
    printf("Nome da Cidade: %s\n", nome_cidade_a02);
    printf("População: %d\n", populacao_a02);
    printf("Área: %.2f km²\n", area_a02);
    printf("PIB: %.2f de reais\n", pib_a02);
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos_a02);
    printf("Densidade Populacional: %.2f hab/km²\n", divide((float)populacao_a02, area_a02));
    printf("PIB per Capita: %.2f reais\n", divide(pib_a02, (float)populacao_a02));
    printf("==================================================\n");
}

float divide(float x, float y)
{
    float divisao = x / y;
    return divisao;
}