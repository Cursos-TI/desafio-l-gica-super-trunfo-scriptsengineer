#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
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
    population_density_01 = (float) population_01 / area_01;
    gdp_per_percapit_01 = pib_01 / (float) population_01;

    // Calculando valores de Densidade Populacional e PIB per Capita da segunda cidade
    population_density_02 = (float) population_02 / area_02;
    gdp_per_percapit_02 = pib_02 / (float) population_02;

    double superpower_01 = population_01 + area_01 + pib_01 + number_of_tourist_attractions_01 + (1/population_density_01) + gdp_per_percapit_01;
    double superpower_02 = population_01 + area_01 + pib_01 + number_of_tourist_attractions_01 + (1/population_density_01) + gdp_per_percapit_01;

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

    printf("-------------\n");
    printf("Comparação de cartas (Atributo: População):\n");

    printf("Carta 1 - %s (%c): %lu", city_name_01, state_01, population_01);
    printf("Carta 2 - %s (%c): %lu", city_name_02, state_02, population_02);

    if (population_01 > population_02) {
        printf("Resultado: Carta 1 (%s) venceu!", city_name_01);
    } else {
        printf("Resultado: Carta 1 (%s) venceu!", city_name_02);
    }

    return 0;
}
