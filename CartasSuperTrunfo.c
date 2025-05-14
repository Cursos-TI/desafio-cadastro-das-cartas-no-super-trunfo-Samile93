#include <stdio.h>

int main (){
    char estado[3], codigo_da_carta[4], nome_da_cidade[50];
    int populacao, numeros_de_pontos_turisticos;
    float area, pib;

    printf("Qual seu estado? \n");
    scanf("%s", &estado);

    printf("Qual o código da carta? \n");
    scanf("%s", &codigo_da_carta);

    printf ("Qual o nome da cidade? \n");
    scanf ("%s", &nome_da_cidade);

    printf ("Qual a população da cidade? \n");
    scanf ("%d", &populacao);

    printf ("Quantos números de pontos turísticos? \n");
    scanf ("%d", &numeros_de_pontos_turisticos);

    printf ("Qual a área total (em km²)? \n");
    scanf ("%f", &area);

    printf ("Qual o pib do estado (em milhôes)? \n");
    scanf ("%f", &pib);

    printf ("Estado: %s \nCodigo da carta: %s \nNome da cidade: %s\n", estado, codigo_da_carta, nome_da_cidade);
    printf ("População: %d \nNúmeros de pontos turísticos: %d \n", populacao, numeros_de_pontos_turisticos);
    printf ("Área: %.2f km² \nPib: %.10f milhões \n", area, pib);

    return 0;
}
