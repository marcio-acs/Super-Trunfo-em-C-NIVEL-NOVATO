#include <stdio.h>

int main(){
    // declaração das variavéis
    int numero_Carta;
    char estado;
    char codigo[3];
    char nome_cidade[15];
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;

    printf("Digite o número da carta: ");
    scanf("%d", &numero_Carta);

    printf("Digite a letra do Estado: ");
    scanf("%s", estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos);

    printf("Carta: %d", numero_Carta);
    printf("Estado: %s", estado);
    printf("Código: %s", codigo);
    printf("Nome da cidade: %s", nome_cidade);
    printf("População: %d", populacao);
    printf("Área: %f km²", area);
    printf("PIB: %f bilhôes de reais", pib);
    printf("Número de pontos turísticos: %d", numero_pontos_turisticos);
    
    return 0;
}
