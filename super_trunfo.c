#include <stdio.h>

// Definição da struct Carta
struct Carta
{
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

// Função para cadastrar uma carta
void cadastrarCarta(struct Carta *carta, int numero)
{
    printf("Carta %d:\n", numero);
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta->estado);
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", carta->codigo);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta->cidade);
    printf("Digite a Populacao: ");
    scanf("%d", &carta->populacao);
    printf("Digite a Area (em km²): ");
    scanf("%f", &carta->area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta->pib);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta->pontos_turisticos);
    printf("\n");
}

// Função para exibir uma carta
void exibirCarta(struct Carta carta, int numero)
{
    printf("Carta %d:\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.cidade);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta.pontos_turisticos);
    printf("\n");
}

int main()
{
    struct Carta carta1, carta2;

    // Cadastro
    cadastrarCarta(&carta1, 1);
    cadastrarCarta(&carta2, 2);

    // Exibição
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
