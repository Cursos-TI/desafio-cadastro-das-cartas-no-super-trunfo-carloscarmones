#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Carlos

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    //carta 01
    
        // Variáveis 1:
        char Estado1;
        char codigo1[4];
        char nomeCidade1[50];
        int populacao1;
        float area1;
        float pib1;
        int pontosturisticos1;

    // Carta 02:

        // Variáveis 2:
        char estado2;
        char codigo2[4];
        char nomeCidade2[50];
        int populacao2;
        float area2;
        float pib2;
        int pontosturisticos2;


    // Entrada de dados carta 1
    
        printf("Carta 1: \n");

        printf("Digite o estado 1 (A a H):");
        scanf(" %c", &Estado1); // espaço antes do %c para ignorar caracteres anteriores

        printf("Digite o codigo 1 (Ex: A01):");
        scanf("%s", &codigo1);

        printf("Digite o nome da Cidade 1:");
        scanf(" %[^\n]", nomeCidade1); // lê string com espaços

        printf("Digite a população 1:");
        scanf("%f", &populacao1);

        printf("Digite a área da  cidade  1 (em Km² A01):\n");
        scanf("%f", &area1);

        printf("Digite o PIB 1 (em bilhões):\n");
        scanf("%f", &pib1);
     
        printf("Digite o número de pontos turísticos  1:\n");
        scanf("%d", &pontosturisticos1);



    
    // Entrada de dados carta 2

        printf("\nCarta 02: \n");


        printf("Digite o estado 2 (A a H): \n");
        scanf(" %c", &estado2); // idem carta 1

    
        printf("Digite o codigo 2 (Ex: A01): \n");
        scanf("%s", codigo2);

        printf("Digite o nome da Cidade 2: \n");
        scanf(" %[^\n]", nomeCidade2); // lê string com espaços

        printf("Digite a população 2: \n");
        scanf("%f", &populacao2);

        printf("Digite a área da  cidade 2 (em Km² A01): \n");
        scanf("%f", &area2);

        printf("Digite o PIB 2 (em bilhões):\n");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos 2:");
        scanf("%d", &pontosturisticos2);


    //Saida formatada de dados
        printf("\n=== Dados das Cartas Cadastradas ===\n");


        printf("\nCarta 1\n");
        printf("Estado 1:%c\n", &Estado1);
        printf("Codigo1:%c\n", codigo1);
        printf("Nome da Cidade 1:%s\n", nomeCidade1);
        printf("População 1:%f\n", populacao1);
        printf("Área da Cidade 1:%c\n", area1);
        printf("PIB 1:%c\n", pib1);
        printf("Número de Pontos Turisticos 1:%d\n", pontosturisticos1);


        printf("\nCarta 2\n");
        printf("Estado 2:%c\n", &estado2);
        printf("Codigo 2:%c\n", codigo2);
        printf("Nome da Cidade 2:%s\n", nomeCidade2);
        printf("População 2:%f\n", populacao2);
        printf("Área da Cidade 2:%c\n", area2);
        printf("PIB 2:%c\n", pib2);
        printf("Número de Pontos Turisticos 2:%d\n", pontosturisticos2);




    return 0;
}
