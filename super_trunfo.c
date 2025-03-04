#include <stdio.h>

float divide(float x, float y); // Função para cálculo da densidade populacional
int compara(float x, float y); // Função para comparação dos atributos
void imprime_comparacao(int x); // Função para imprimir o resultado da comparação

// Definição de variáveis globais
float super_poder_1, super_poder_2;
char nome_cidade_a01[50];
char nome_cidade_a02[50];

int main() 
{
    // Definindo as variáveis da carta 1
    char estado_01[2];
    char codigo_a01[4];
    unsigned long int populacao_a01;
    float area_a01;
    float pib_a01;
    int nPontosTuristicos_a01;

    // Definindo as variáveis da carta 2
    char estado_02[2];
    char codigo_a02[4];
    unsigned long int populacao_a02;
    float area_a02;
    float pib_a02;
    int nPontosTuristicos_a02;

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

    //Cálculo do Pib per Capita e Densidade Populacional
    float perCapita_1 = divide(pib_a01, (float)populacao_a01);
    float densidade_1 = divide((float)populacao_a01, area_a01);

    float perCapita_2 = divide(pib_a02, (float)populacao_a02);
    float densidade_2 = divide((float)populacao_a02, area_a02);

    //Calculo do Super Poder
    float inverso_densidade_1 = 1 / densidade_1;
    super_poder_1 = (float)populacao_a01 +  area_a01 + pib_a01 + (float)nPontosTuristicos_a01 + perCapita_1 + inverso_densidade_1;
    float inverso_densidade_2 = 1 / densidade_2;
    super_poder_2 = (float)populacao_a02 +  area_a02 + pib_a02 + (float)nPontosTuristicos_a02 + perCapita_2 + inverso_densidade_2;


    // Exibição dos Dados das Cartas:
    printf("\n\n");
    printf("Relação das Cartas Cadastradas:\n");

    // Imorimindo a carta 1
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

    // Imorimindo a carta 2
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


    // Váriáveis com os resultados da comparação dos atributos
    int resultado_populacao = compara((float)populacao_a01, (float)populacao_a02);
    int resultado_area = compara( area_a01, area_a02 );
    int resultado_pib = compara(pib_a01, pib_a02);
    int resultado_pontosTuristicos = compara((float)nPontosTuristicos_a01, (float)nPontosTuristicos_a02);
    int resultado_densidade = compara(densidade_2, densidade_1);
    int resultado_percapita = compara(perCapita_1, perCapita_2);
    int resultado_superPoder = compara(super_poder_1, super_poder_2);

    // Menu de escolha do atributo para comparação
    printf("Escolha um atributo:\n");
    printf("1. Populacão\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    int escolhaJogador;
    scanf("%d", &escolhaJogador);
    
    // Imprimindo a saída final de comparação
    printf("\n%s X %s\n", nome_cidade_a01, nome_cidade_a02);
    printf("Atributo escolhido: ");
    switch (escolhaJogador)
    {
    case 1:
        printf("População\n");
        break;
    case 2:
        printf("Área\n");
        break;
    case 3:
        printf("PIB\n");
        break;
    case 4:
        printf("Número de Pontos Turísticos\n");
        break;
    case 5:
        printf("Densidade demográfica\n");
        break;
    default:
        printf("Opcao invalida.\n");
        break;
    }

    if (escolhaJogador == 1){
        printf("População %s: %lu\nPopulação %s: %lu\n", nome_cidade_a01, populacao_a01, nome_cidade_a02, populacao_a02);
    }else if(escolhaJogador == 2){
        printf("Área %s: %.2f\nÁrea %s: %.2f\n", nome_cidade_a01, area_a01, nome_cidade_a02, area_a02);
    }else if(escolhaJogador == 3){
        printf("PIB %s: %.2f\nPIB %s: %.2f\n", nome_cidade_a01, pib_a01, nome_cidade_a02, pib_a02);
    }else if(escolhaJogador == 4){
        printf("Número de pontos turísticos %s: %d\nNúmero de pontos turísticos %s: %d\n", 
            nome_cidade_a01, nPontosTuristicos_a01, nome_cidade_a02, nPontosTuristicos_a02);
    }else if(escolhaJogador == 5){
        printf("Densidade demográfica %s: %.2f\nDensidade demográfica %s: %.2f\n", nome_cidade_a01, densidade_1, nome_cidade_a02, densidade_2);
    }else{
        printf("Opção inválida");
    }

    switch (escolhaJogador)
    {
    case 1:
        imprime_comparacao(resultado_populacao);
        break;
    case 2:
        imprime_comparacao(resultado_area);
        break;
    case 3:
        imprime_comparacao(resultado_pib);
        break;
    case 4:
        imprime_comparacao(resultado_pontosTuristicos);
        break;
    case 5:
        imprime_comparacao(resultado_densidade);
        break;
    default:
        printf("Opcao invalida.\n");
        break;
    }
}

// Função retorna o resultado da divisão
float divide(float x, float y)
{
    float divisao = x / y;
    return divisao;
}

// Função usada para comparação dos atributos
int compara(float x, float y)
{
    int retorno = 0;
    if (x > y){
        retorno = 1;
    }else if (x < y){
        retorno = 0;
    }else{
        retorno = 2;
    }  
    return retorno;
}

// Função imprime a carta vencedora
void imprime_comparacao(int x)
{
    if (x == 0){
        printf("Carta 2 (%s) venceu!\n", nome_cidade_a02);
    }else if (x == 1){
        printf("Carta 1 (%s) venceu!\n", nome_cidade_a01);
    }else{
        printf("Empate!\n");
    }
        
}