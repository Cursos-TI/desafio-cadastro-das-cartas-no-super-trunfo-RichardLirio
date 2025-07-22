#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char cartaCodigo[20];
    char nomeCidadade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("🃏 Bem vindo ao Super Trunfo em C \n");
    printf("Primeiro, vamos cadastrar sua primeira carta.\n");
    printf("Digite somente uma letra de 'A' a 'H' do estado:");
    
    scanf(" %c", &estado);

    printf("Certo, agora digite o codigo da carta. ex:(A01, B03):\n");
    
    scanf("%s", &cartaCodigo);
    getchar(); //Limpa o buffer
    printf("Digite o nome da cidade:\n");
   
    fgets(nomeCidadade, sizeof(nomeCidadade), stdin); //captura um buffer do tamano da variavel digitada no console
    nomeCidadade[strcspn(nomeCidadade, "\n")] = 0;

    printf("Digite a população:\n");

    scanf("%i", &populacao);

    printf("Digite a área em km²:\n");

    scanf("%f", &area);

    printf("Digite o PIB:\n");

    scanf("%f", &pib);

    printf("Por ultimo o número de pontos turisticos:\n");

    scanf("%i", &pontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("---------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Codigo da carta: %s\n", cartaCodigo);
    printf("Nome da Cidade: %s\n", nomeCidadade);
    printf("População: %i\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos);
    printf("---------------------------\n");
    
    // Carta 2
    printf("Digite somente uma letra de 'A' a 'H' do estado:");
    
    scanf(" %c", &estado);

    printf("Certo, agora digite o codigo da carta. ex:(A01, B03):\n");
    
    scanf("%s", &cartaCodigo);
    getchar(); //Limpa o buffer
    printf("Digite o nome da cidade:\n");
   
    fgets(nomeCidadade, sizeof(nomeCidadade), stdin); //captura um buffer do tamano da variavel digitada no console
    nomeCidadade[strcspn(nomeCidadade, "\n")] = 0;

    printf("Digite a população:\n");

    scanf("%i", &populacao);

    printf("Digite a área em km²:\n");

    scanf("%f", &area);

    printf("Digite o PIB:\n");

    scanf("%f", &pib);

    printf("Por ultimo o número de pontos turisticos:\n");

    scanf("%i", &pontosTuristicos);


    printf("---------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado);
    printf("Codigo da carta: %s\n", cartaCodigo);
    printf("Nome da Cidade: %s\n", nomeCidadade);
    printf("População: %i\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos);
    printf("---------------------------\n");

    return 0;
}
