#include <stdio.h>

int main() {    
    
    char estado_carta_1[50];
    char codigo_carta_1[50];
    char nome_cidade_carta_1[50];
    int populacao_carta_1;
    float area_carta_1;
    float pib_carta_1;
    int pontos_turisticos_carta_1;

    char estado_carta_2[50];
    char codigo_carta_2[50];
    char nome_cidade_carta_2[50];
    int populacao_carta_2;
    float area_carta_2;
    float pib_carta_2;
    int pontos_turisticos_carta_2;

    printf("Adicione a carta 1\n");
    printf("Estado: ");
    scanf("%s",&estado_carta_1);
    printf("Código: ");
    scanf("%s",&codigo_carta_1);
    getchar();
    printf("Nome da cidade: ");
    fgets(nome_cidade_carta_1,50,stdin);
    printf("População: ");
    scanf("%i",&populacao_carta_1);
    printf("Área: ");
    scanf("%f",&area_carta_1);
    printf("PIB: ");
    scanf("%f",&pib_carta_1);
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&pontos_turisticos_carta_1);
    printf("\n");

    printf("Adicione a carta 2\n");
    printf("Estado: ");
    scanf("%s",&estado_carta_2);
    printf("Código: ");
    scanf("%s",&codigo_carta_2);
    printf("Nome da cidade: ");
    getchar();
    fgets(nome_cidade_carta_2,50,stdin);
    printf("População: ");
    scanf("%i",&populacao_carta_2);
    printf("Área: ");
    scanf("%f",&area_carta_2);
    printf("PIB: ");
    scanf("%f",&pib_carta_2);
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&pontos_turisticos_carta_2);

    nome_cidade_carta_1[strcspn(nome_cidade_carta_1, "\n")] = '\0';
    printf("\n----Carta1: \n");
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\n",estado_carta_1,codigo_carta_1,nome_cidade_carta_1,populacao_carta_1);
    printf("Área: %f\nPIB: %f\nNúmero de Pontos Turísticos:%i\n",area_carta_1,pib_carta_1,pontos_turisticos_carta_1);
    printf("Densidade populacional: %f\n",populacao_carta_1/area_carta_1);
    printf("PIB per Capita: %f\n",pib_carta_1/populacao_carta_1);

    nome_cidade_carta_2[strcspn(nome_cidade_carta_2, "\n")] = '\0';
    printf("\n----Carta2: \n");
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\n",estado_carta_2,codigo_carta_2,nome_cidade_carta_2,populacao_carta_2);
    printf("Área: %f\nPIB: %f\nNúmero de Pontos Turísticos:%i\n",area_carta_2,pib_carta_2,pontos_turisticos_carta_2);
    printf("Densidade populacional: %f\n",populacao_carta_1/area_carta_2);
    printf("PIB per Capita: %f\n",pib_carta_2/populacao_carta_2);
    


    return 0;
}
