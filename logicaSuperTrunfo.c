#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    short int option;

    char state_01;
    char city_code_01[5];
    char city_name_01[20];
    unsigned long int population_01 = 0;
    float area_01 = 0.0;
    float pib_01 = 0.0;
    int number_of_tourist_attractions_01 = 0;
    float population_density_01 = 0.0;
    float gdp_per_percapit_01 = 0.0;

    // Dados da segunda cidade
    char state_02;
    char city_code_02[5];
    char city_name_02[20];
    unsigned long int population_02 = 0;
    float area_02 = 0;
    float pib_02 = 0;
    int number_of_tourist_attractions_02 = 0;
    float population_density_02 = 0.0;
    float gdp_per_percapit_02 = 0.0;

    // Leitura dos dados da primeira cidade
    printf("---------------------------------------\n");
    printf("= Digite os dados da primeira cidade =\n");
    printf("Digite o estado da cidade:");
    scanf(" %c", &state_01);
    printf("Digite o código da cidade:");
    scanf("%s", city_code_01);
    printf("Digite o nome da cidade:");
    scanf("%s", city_name_01);
    printf("Digite a população da cidade:");
    scanf("%lu", &population_01);
    printf("Digite a area da cidade:");
    scanf("%f", &area_01);
    printf("Digite o pib da cidade:");
    scanf("%f", &pib_01);
    printf("Digite o número de pontos turisticos da cidade:");
    scanf("%i", &number_of_tourist_attractions_01);

    // Leitura dos dados da segunda cidade
    printf("---------------------------------------\n");
    printf("= Digite os dados da segunda cidade =\n");
    printf("Digite o estado da cidade:");
    scanf(" %c", &state_02);
    printf("Digite o código da cidade:");
    scanf("%s", city_code_02);
    printf("Digite o nome da cidade:");
    scanf("%s", city_name_02);
    printf("Digite a população da cidade:");
    scanf("%lu", &population_02);
    printf("Digite a area da cidade:");
    scanf("%f", &area_02);
    printf("Digite o pib da cidade:");
    scanf("%f", &pib_02);
    printf("Digite o número de pontos turisticos da cidade:");
    scanf("%i", &number_of_tourist_attractions_02);

    // Calculando valores de Densidade Populacional e PIB per Capita da primeira cidade
    population_density_01 = (float)population_01 / area_01;
    gdp_per_percapit_01 = pib_01 / (float)population_01;

    // Calculando valores de Densidade Populacional e PIB per Capita da segunda cidade
    population_density_02 = (float)population_02 / area_02;
    gdp_per_percapit_02 = pib_02 / (float)population_02;

    double superpower_01 = population_01 + area_01 + pib_01 + number_of_tourist_attractions_01 + (1 / population_density_01) + gdp_per_percapit_01;
    double superpower_02 = population_01 + area_01 + pib_01 + number_of_tourist_attractions_01 + (1 / population_density_01) + gdp_per_percapit_01;

    // Exibindo informaçãoes da primeira cidade
    printf("---------------------------------------\n");
    printf("Exibindo dados da cidade código [%s]\n", city_code_01);
    printf("\tEstado: %c\n", state_01);
    printf("\tNome: %s\n", city_name_01);
    printf("\tPopulação: %lu\n", population_01);
    printf("\tArea: %.2f\n", area_01);
    printf("\tPIB: %.2f\n", pib_01);
    printf("\tNúmero de pontos turisticos: %i\n", number_of_tourist_attractions_01);
    printf("\tDensidade Populacional: %.2f\n", population_density_01);
    printf("\tPIB per Capita: %.2f\n", gdp_per_percapit_01);

    // Exibindo informaçãoes da segunda cidade
    printf("-------------\n");
    printf("Exibindo dados da cidade código [%s]\n", city_code_02);
    printf("\tEstado: %c\n", state_02);
    printf("\tNome: %s\n", city_name_02);
    printf("\tPopulação: %lu\n", population_02);
    printf("\tArea: %.2f\n", area_02);
    printf("\tPIB: %.2f\n", pib_02);
    printf("\tNúmero de pontos turisticos: %i\n", number_of_tourist_attractions_02);
    printf("\tDensidade Populacional: %.2f\n", population_density_02);
    printf("\tPIB per Capita: %.2f\n", gdp_per_percapit_02);

    // Exibindo o menu
    printf("-------------\n");
    printf("Escolha o atributo para comparação das cartas:\n");
    printf("1. Nome do estado (Apenas exibir)\n");
    printf("2. População\n");
    printf("3. Area\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turisticos\n");
    printf("6. Densidade Populacional\n");
    printf("Digite a opção:");
    scanf("%hu", &option);

    short result = 0;

    printf("-------------\n");

    switch (option)
    {
    case 1:
        printf("Exibindo informação de cartas (Atributo: Nome do estado):\n");
        printf("\tCarta 1 - %s (%c)", city_name_01, state_01);
        printf("\tCarta 2 - %s (%c)", city_name_02, state_02);
        break;
    case 2:
        printf("Comparação de cartas (Atributo: População):\n");
        printf("\tCarta 1 - %s (%c): %lu\n", city_name_01, state_01, population_01);
        printf("\tCarta 2 - %s (%c): %lu\n", city_name_02, state_02, population_02);
        if (population_01 > population_02)
        {
            result = 1;
        }
        else if (population_01 < population_02)
        {
            result = 2;
        }
        else
        {
            result = 0;
        }
        break;
    case 3:
        printf("Comparação de cartas (Atributo: Area):\n");
        printf("\tCarta 1 - %s (%c): %.2f\n", city_name_01, state_01, area_01);
        printf("\tCarta 2 - %s (%c): %.2f\n", city_name_02, state_02, area_02);
        if (area_01 > area_02)
        {
            result = 1;
        }
        else if (area_01 < area_02)
        {
            result = 2;
        }
        else
        {
            result = 0;
        }
        break;
    case 4:
        printf("Comparação de cartas (Atributo: PIB):\n");
        printf("\tCarta 1 - %s (%c): %.2f\n", city_name_01, state_01, pib_01);
        printf("\tCarta 2 - %s (%c): %.2f\n", city_name_02, state_02, pib_02);
        if (pib_01 > pib_02)
        {
            result = 1;
        }
        else if (pib_01 < pib_02)
        {
            result = 2;
        }
        else
        {
            result = 0;
        }
        break;
    case 5:
        printf("Comparação de cartas (Atributo: Número de pontos turisticos):\n");
        printf("\tCarta 1 - %s (%c): %i\n", city_name_01, state_01, number_of_tourist_attractions_01);
        printf("\tCarta 2 - %s (%c): %i\n", city_name_02, state_02, number_of_tourist_attractions_02);
        if (number_of_tourist_attractions_01 > number_of_tourist_attractions_02)
        {
            result = 1;
        }
        else if (number_of_tourist_attractions_01 < number_of_tourist_attractions_02)
        {
            result = 2;
        }
        else
        {
            result = 0;
        }
        break;
    case 6:
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
        printf("\tCarta 1 - %s (%c): %.2f\n", city_name_01, state_01, population_density_01);
        printf("\tCarta 2 - %s (%c): %.2f\n", city_name_02, state_02, population_density_02);
        if (population_density_01 < population_density_02)
        {
            result = 1;
        }
        else if (population_density_01 > population_density_02)
        {
            result = 2;
        }
        else
        {
            result = 0;
        }
        break;

    default:
        printf("Opção invalida escolhida!");
        break;
    }

    if (option != 1)
    {
        switch (result)
        {
        case 0:
            printf("\tResultado: Empate!");
            break;
        case 1:
            printf("\tResultado: Carta 1 (%s) venceu!\n", city_name_01);
            break;
        case 2:
            printf("\tResultado: Carta 1 (%s) venceu!\n", city_name_01);

        default:
            break;
        }
    }

    return 0;
}
