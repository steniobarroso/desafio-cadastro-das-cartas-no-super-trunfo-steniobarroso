#include <stdio.h>

int main() {
    char estado_carta_1[30];
    char codigo_carta_1[10];
    char nome_cidade_carta_1[30];
    int populacao_carta_1;
    float area_carta_1;
    float pib_carta_1;
    int pontos_turisticos_carta_1;

    char estado_carta_2[30];
    char codigo_carta_2[10];
    char nome_cidade_carta_2[30];
    int populacao_carta_2;
    float area_carta_2;
    float pib_carta_2;
    int pontos_turisticos_carta_2;

    printf("Estado: ");
    scanf("%s",&estado_carta_1);
    printf("Código: ");
    scanf("%s",&codigo_carta_1);
    printf("Nome da cidade: ");
    scanf("%s",&nome_cidade_carta_1);
    printf("População: ");
    scanf("%i",&populacao_carta_1);
    printf("Área: ");
    scanf("%f",&area_carta_1);
    printf("PIB: ");
    scanf("%f",&pib_carta_1);
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&pontos_turisticos_carta_1);

    
    printf("\n\n----Carta1: \n");
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\n",estado_carta_1,codigo_carta_1,nome_cidade_carta_1,populacao_carta_1);
    printf("Área: %f\nPIB: %f\nNúmero de Pontos Turísticos:%i\n\n",area_carta_1,pib_carta_1,pontos_turisticos_carta_1);

   
    printf("Estado: ");
    scanf("%s",&estado_carta_2);
    printf("Código: ");
    scanf("%s",&codigo_carta_2);
    printf("Nome da cidade: ");
    scanf("%s",&nome_cidade_carta_2);
    printf("População: ");
    scanf("%i",&populacao_carta_2);
    printf("Área: ");
    scanf("%f",&area_carta_2);
    printf("PIB: ");
    scanf("%f",&pib_carta_2);
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&pontos_turisticos_carta_2);

    printf("\n\n----Carta2: \n");
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\n",estado_carta_2,codigo_carta_2,nome_cidade_carta_2,populacao_carta_2);
    printf("Área: %f\nPIB: %f\nNúmero de Pontos Turísticos:%i\n",area_carta_2,pib_carta_2,pontos_turisticos_carta_2);
    

    return 0;
}
