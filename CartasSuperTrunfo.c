#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Variaveis carta 1
    char estado1;
    char cartaCodigo1[20];
    char nomeCidadade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variaveis carta 2
    char estado2;
    char cartaCodigo2[20];
    char nomeCidadade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    // população/area
    // pib/população

    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("🃏 Bem vindo ao Super Trunfo em C \n");
    printf("Primeiro, vamos cadastrar sua primeira carta.\n");
    printf("Digite somente uma letra de 'A' a 'H' do estado:\n");
    
    scanf("%c", &estado1);

    printf("Certo, agora digite o codigo da carta. ex:(A01, B03):\n");
    
    scanf("%s", cartaCodigo1);
    getchar(); //Limpa o buffer
    printf("Digite o nome da cidade:\n");
   
    fgets(nomeCidadade1, sizeof(nomeCidadade1), stdin); //captura um buffer do tamano da variavel digitada no console
    nomeCidadade1[strcspn(nomeCidadade1, "\n")] = 0;

    printf("Digite a população:\n");

    scanf("%i", &populacao1);

    printf("Digite a área em km²:\n");

    scanf("%f", &area1);

    printf("Digite o PIB:\n");

    scanf("%f", &pib1);

    printf("Por ultimo o número de pontos turisticos:\n");

    scanf("%i", &pontosTuristicos1);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("---------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo da carta: %s\n", cartaCodigo1);
    printf("Nome da Cidade: %s\n", nomeCidadade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", (float) populacao1 / area1);
    printf("PIB per Capita: %.2f\n", (float) pib1*1e9 / populacao1);
    printf("---------------------------\n");
    
    // Carta 2
    printf("Digite somente uma letra de 'A' a 'H' do estado:\n");
    
    scanf(" %c", &estado2);

    printf("Certo, agora digite o codigo da carta. ex:(A01, B03):\n");
    
    scanf("%s", cartaCodigo2);
    getchar(); //Limpa o buffer
    printf("Digite o nome da cidade:\n");
   
    fgets(nomeCidadade2, sizeof(nomeCidadade2), stdin); //captura um buffer do tamano da variavel digitada no console
    nomeCidadade2[strcspn(nomeCidadade2, "\n")] = 0;

    printf("Digite a população:\n");

    scanf("%i", &populacao2);

    printf("Digite a área em km²:\n");

    scanf("%f", &area2);

    printf("Digite o PIB:\n");

    scanf("%f", &pib2);

    printf("Por ultimo o número de pontos turisticos:\n");

    scanf("%i", &pontosTuristicos2);


    printf("---------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo da carta: %s\n", cartaCodigo2);
    printf("Nome da Cidade: %s\n", nomeCidadade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", (float) populacao2 / area2);
    printf("PIB per Capita: %.2f\n", (float) pib2*1e9 / populacao2);
    printf("---------------------------\n");

    return 0;
}
