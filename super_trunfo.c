#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

float divide(float x, float y);
int compara(float x, float y);
void imprime_comparacao(int x);
float super_poder_1, super_poder_2;

int main() 
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo.
    // A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).
   
    // Definindo as variáveis da carta 1
    char estado_01[2];
    char codigo_a01[4];
    char nome_cidade_a01[50];
    unsigned long int populacao_a01;
    float area_a01;
    float pib_a01;
    int nPontosTuristicos_a01;

    // Definindo as variáveis da carta 2
    char estado_02[2];
    char codigo_a02[4];
    char nome_cidade_a02[50];
    unsigned long int populacao_a02;
    float area_a02;
    float pib_a02;
    int nPontosTuristicos_a02;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastrando as cartas:
    printf("\nOla jogador, insira os dados da Carta 1\n");

    // Cadastrando a carta 1:
    printf("\n");
    printf("Digite a letra correspondente ao Estado da carta 1\n");
    scanf("%s", estado_01);
    printf("Digite corretamente o código da carta\n");
    scanf("%s", codigo_a01);
    printf("Digite o nome da cidade para carta 1.\n");
    scanf("%s", nome_cidade_a01);
    printf("Digite a população da cidade de %s\n", nome_cidade_a01);
    scanf("%lu", &populacao_a01);
    printf("Digite a área da cidade de %s\n", nome_cidade_a01);
    scanf("%f", &area_a01);
    printf("Digite o PIB da cidade de %s em bilhões de reais\n", nome_cidade_a01);
    scanf("%f", &pib_a01);
    printf("Digite o número de pontos turisticos da cidade de %s\n", nome_cidade_a01);
    scanf("%d", &nPontosTuristicos_a01);

    // Cadastrando a carta 2:
    printf("\nOla jogador, insira os dados da Carta 2\n");
    printf("\n");
    printf("Digite a letra correspondente ao Estado da carta 2\n");
    scanf("%s", estado_02);
    printf("Digite corretamente o código da carta\n");
    scanf("%s", codigo_a02);
    printf("Digite o nome da cidade para carta 2.\n");
    scanf("%s", nome_cidade_a02);
    printf("Digite a população da cidade de %s\n", nome_cidade_a02);
    scanf("%lu", &populacao_a02);
    printf("Digite a área da cidade de %s\n", nome_cidade_a02);
    scanf("%f", &area_a02);
    printf("Digite o PIB da cidade de %s em bilhões de reais\n", nome_cidade_a02);
    scanf("%f", &pib_a02);
    printf("Digite o número de pontos turisticos da cidade de %s\n", nome_cidade_a02);
    scanf("%d", &nPontosTuristicos_a02);

    //Pib per Capita e Densidade Populacional
    float perCapita_1 = divide(pib_a01, (float)populacao_a01);
    float densidade_1 = divide((float)populacao_a01, area_a01);

    float perCapita_2 = divide(pib_a02, (float)populacao_a02);
    float densidade_2 = divide((float)populacao_a02, area_a02);

    //Calculo Super Poder
    float inverso_densidade_1 = 1 / densidade_1;
    super_poder_1 = (float)populacao_a01 +  area_a01 + pib_a01 + (float)nPontosTuristicos_a01 + perCapita_1 + inverso_densidade_1;

    float inverso_densidade_2 = 1 / densidade_2;
    super_poder_2 = (float)populacao_a02 +  area_a02 + pib_a02 + (float)nPontosTuristicos_a02 + perCapita_2 + inverso_densidade_2;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\n");
    printf("Relação das Cartas Cadastradas:\n");

    // Imorimindo a carta A01
    printf("\n================================================\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado_01);
    printf("Código da Carta: %s\n", codigo_a01);
    printf("Nome da Cidade: %s\n", nome_cidade_a01);
    printf("População: %lu\n", populacao_a01);
    printf("Área: %.2f km²\n", area_a01);
    printf("PIB: %.2f bilhões de reais\n", pib_a01);
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos_a01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n", perCapita_1);
    printf("Super Poder: %.2f\n", super_poder_1);
    printf("==================================================\n");

    // Imorimindo a carta A02
    printf("\n================================================\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_02);
    printf("Código da Carta: %s\n", codigo_a02);
    printf("Nome da Cidade: %s\n", nome_cidade_a02);
    printf("População: %lu\n", populacao_a02);
    printf("Área: %.2f km²\n", area_a02);
    printf("PIB: %.2f bilhões de reais\n", pib_a02);
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos_a02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", perCapita_2);
    printf("Super Poder: %.2f\n", super_poder_2);
    printf("==================================================\n");


    // Comparando as cartas
    int resultado_populacao = compara((float)populacao_a01, (float)populacao_a02);
    int resultado_area = compara( area_a01, area_a02 );
    int resultado_pib = compara(pib_a01, pib_a02);
    int resultado_pontosTuristicos = compara((float)nPontosTuristicos_a01, (float)nPontosTuristicos_a02);
    int resultado_densidade = compara(densidade_1, densidade_2);
    int resultado_percapita = compara(perCapita_1, perCapita_2);
    int resultado_superPoder = compara(super_poder_1, super_poder_2);

    /* usado no tema 1
    // Imprimindo o resultado da comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("População: ");
    imprime_comparacao( resultado_populacao );
    printf("Área: ");
    imprime_comparacao( resultado_area );
    printf("PIB: ");
    imprime_comparacao( resultado_pib );
    printf("Pontos Turísticos: ");
    imprime_comparacao( resultado_pontosTuristicos );
    printf("Densidade Populacional: ");
    imprime_comparacao( resultado_densidade);
    printf("PIB per Capita: ");
    imprime_comparacao( resultado_percapita );
    printf("Super Poder: ");
    imprime_comparacao( resultado_superPoder );*/

    // Início desafio do tema 2

    // Atributo escolhido para comaração População (diretamente no código, não pela entrada do úsuario)

    printf("\nComparação de cartas (Atributo: População):\n");
    printf("\nCarta 1 - %s: %lu\n", nome_cidade_a01, populacao_a01);
    printf("Carta 2 - %s: %lu\n", nome_cidade_a02, populacao_a02);
    printf("Resultado: ");
    if (populacao_a01 > populacao_a02){
        printf("Carta 1 (%s) venceu!\n", nome_cidade_a01);
    }
    if (populacao_a01 == populacao_a02){
        printf("Empate!\n");
    }
    if (populacao_a01 < populacao_a02){
        printf("Carta 2 (%s) venceu!\n", nome_cidade_a02);
    }





}

float divide(float x, float y)
{
    float divisao = x / y;
    return divisao;
}

int compara(float x, float y)
{
    int retorno = 0;
    if (x > y)
        retorno = 1;

    if (x < y){
        retorno = 0;
    }else{
        retorno = 2;
    }  
    return retorno;
}

void imprime_comparacao(int x)
{
    if (x == 0)
        printf("Carta 2 venceu!");

    if (x == 1)
    printf("Carta 1 venceu!");
}