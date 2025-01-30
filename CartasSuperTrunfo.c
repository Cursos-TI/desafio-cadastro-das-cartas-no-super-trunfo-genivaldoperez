#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.


    // A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).
    // Definindo as variáveis da carta código A01
    char estado_a = 'A';
    char codigo_a01[4] = "A01";
    char nome_cidade_a01[50];
    int populacao_a01;
    float area_a01;
    float pib_a01;
    int nPontosTuristicos_a01;

    // Definindo as variáveis da carta código A02
    char codigo_a02[4] = "A02";
    char nome_cidade_a02[50];
    int populacao_a02;
    float area_a02;
    float pib_a02;
    int nPontosTuristicos_a02;

    // Definindo as variáveis da carta código A03
    char codigo_a03[4]  = "A03";
    char nome_cidade_a03[50];
    int populacao_a03;
    float area_a03;
    float pib_a03;
    int nPontosTuristicos_a03;

    // Definindo as variáveis da carta código A04
    char codigo_a04[4]  = "A04";
    char nome_cidade_a04[50];
    int populacao_a04;
    float area_a04;
    float pib_a04;
    int nPontosTuristicos_a04;

     // Definindo as variáveis da carta código B01
    char estado_b = 'B';
    char codigo_b01[4] = "B01";
    char nome_cidade_b01[50];
    int populacao_b01;
    float area_b01;
    float pib_b01;
    int nPontosTuristicos_b01;

    // Definindo as variáveis da carta código B02
    char codigo_b02[4] = "B02";
    char nome_cidade_b02[50];
    int populacao_b02;
    float area_b02;
    float pib_b02;
    int nPontosTuristicos_b02;

    // Definindo as variáveis da carta código B03
    char codigo_b03[4]  = "B03";
    char nome_cidade_b03[50];
    int populacao_b03;
    float area_b03;
    float pib_b03;
    int nPontosTuristicos_b03;

    // Definindo as variáveis da carta código B04
    char codigo_b04[4]  = "B04";
    char nome_cidade_b04[50];
    int populacao_b04;
    float area_b04;
    float pib_b04;
    int nPontosTuristicos_b04;

     // Definindo as variáveis da carta código C01
    char estado_c = 'C';
    char codigo_c01[4] = "C01";
    char nome_cidade_c01[50];
    int populacao_c01;
    float area_c01;
    float pib_c01;
    int nPontosTuristicos_c01;

    // Definindo as variáveis da carta código C02
    char codigo_c02[4] = "C02";
    char nome_cidade_c02[50];
    int populacao_c02;
    float area_c02;
    float pib_c02;
    int nPontosTuristicos_c02;

    // Definindo as variáveis da carta código C03
    char codigo_c03[4]  = "C03";
    char nome_cidade_c03[50];
    int populacao_c03;
    float area_c03;
    float pib_c03;
    int nPontosTuristicos_c03;

    // Definindo as variáveis da carta código C04
    char codigo_c04[4]  = "C04";
    char nome_cidade_c04[50];
    int populacao_c04;
    float area_c04;
    float pib_c04;
    int nPontosTuristicos_c04;




    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastrando as cartas das cidades do Estado A:
    printf("Ola jogador, agora iremos cadatrar as cartas para as cidades do Estado A\n");

    // Cadastrando a Cidade 01 do Estado A:
    printf("\n");
    printf("Digite o nome da cidade 01 do Estado A.\n");
    fgets(nome_cidade_a01, 50, stdin);
    printf("Digite a população da cidade de %s\n", nome_cidade_a01);
    scanf("%d", &populacao_a01);
    printf("Digite a área da cidade de %s\n", nome_cidade_a01);
    scanf("%f", &area_a01);
    printf("Digite o PIB da cidade de %s\n", nome_cidade_a01);
    scanf("%f", &pib_a01);
    printf("Digite o número de pontos turisticos da cidade de %s\n", nome_cidade_a01);
    scanf("%d", &nPontosTuristicos_a01);

    // Cadastrando a Cidade 02 do Estado A:
    printf("\n");
    printf("Digite o nome da cidade 02 do Estado A.\n");
    fgets(nome_cidade_a02, 50, stdin);
    printf("Digite a população da cidade de %s\n", nome_cidade_a02);
    scanf("%d", &populacao_a02);
    printf("Digite a área da cidade de %s\n", nome_cidade_a02);
    scanf("%f", &area_a02);
    printf("Digite o PIB da cidade de %s\n", nome_cidade_a02);
    scanf("%f", &pib_a02);
    printf("Digite o número de pontos turisticos da cidade de %s\n", nome_cidade_a02);
    scanf("%d", &nPontosTuristicos_a02);

    // Cadastrando a Cidade 03 do Estado A:
    printf("\n");
    printf("Digite o nome da cidade 03 do Estado A.\n");
    fgets(nome_cidade_a03, 50, stdin);
    printf("Digite a população da cidade de %s\n", nome_cidade_a03);
    scanf("%d", &populacao_a03);
    printf("Digite a área da cidade de %s\n", nome_cidade_a03);
    scanf("%f", &area_a03);
    printf("Digite o PIB da cidade de %s\n", nome_cidade_a03);
    scanf("%f", &pib_a03);
    printf("Digite o número de pontos turisticos da cidade de %s\n", nome_cidade_a03);
    scanf("%d", &nPontosTuristicos_a03);

    // Cadastrando a Cidade 04 do Estado A:
    printf("\n");
    printf("Digite o nome da cidade 04 do Estado A.\n");
    fgets(nome_cidade_a04, 50, stdin);
    printf("Digite a população da cidade de %s\n", nome_cidade_a04);
    scanf("%d", &populacao_a04);
    printf("Digite a área da cidade de %s\n", nome_cidade_a04);
    scanf("%f", &area_a04);
    printf("Digite o PIB da cidade de %s\n", nome_cidade_a04);
    scanf("%f", &pib_a04);
    printf("Digite o número de pontos turisticos da cidade de %s\n", nome_cidade_a04);
    scanf("%d", &nPontosTuristicos_a04);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\n");
    printf("Relação das Cartas Cadastradas:\n");

    // Imorimindo a carta A01
    printf("\n================================================\n");
    printf("Estado: %c\n", estado_a);
    printf("Código da Carta: %s\n", codigo_a01);
    printf("Nome da Cidade: %s", nome_cidade_a01);
    printf("População: %d\n", populacao_a01);
    printf("Área: %f\n", area_a01);
    printf("PIB: %f\n", pib_a01);
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos_a01);
     printf("================================================\n");

    // Imorimindo a carta A02
      printf("\n================================================\n");
    printf("Estado: %c\n", estado_a);
    printf("Código da Carta: %s\n", codigo_a02);
    printf("Nome da Cidade: %s", nome_cidade_a02);
    printf("População: %d\n", populacao_a02);
    printf("Área: %f\n", area_a02);
    printf("PIB: %f\n", pib_a02);
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos_a02);
     printf("================================================\n");


    return 0;
}
