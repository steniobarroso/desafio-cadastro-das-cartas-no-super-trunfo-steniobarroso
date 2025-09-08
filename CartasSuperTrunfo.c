#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado[30];
    char codigo[10];
    char nome_cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Estado: ");
    scanf("%s",&estado);
    printf("Código: ");
    scanf("%s",&codigo);
    printf("Nome da cidade: ");
    scanf("%s",&nome_cidade);
    printf("População: ");
    scanf("%i",&populacao);
    printf("Área: ");
    scanf("%f",&area);
    printf("PIB: ");
    scanf("%f",&pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%s",&pontos_turisticos);

    printf("\n\nEstado: %s\nCódigo: %s\nNome da cidade%s\nPopulação: %i\n",estado,codigo,nome_cidade,populacao);
    printf("Área: %f\nPIB: %f\nNúmero de Pontos Turísticos:%i\n",area,pib,pontos_turisticos);
    

    return 0;
}
