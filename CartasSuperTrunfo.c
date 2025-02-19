#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    int pop1, turisticos1, pop2, turisticos2;
    char estado1[1], codigo1[3], nome1[20], estado2[1], codigo2[3], nome2[20];
    float area1, pib1, area2, pib2;   


    printf ("Digite o estado da primeira carta: \n");
    scanf ("%s", &estado1);

    printf ("Digite o código da primeira carta: \n");
    scanf ("%s", &codigo1);

    printf ("Digite o nome da cidade da primeira carta: \n");
    scanf ("%s", &nome1);

    printf ("Digite a população da primeira carta: \n");
    scanf("%d", &pop1);

    printf ("Digite a área em KM2 da primeira carta: \n");
    scanf ("%f", &area1);

    printf ("Digite o valor do PIB da primeira carta: \n");
    scanf ("%f", &pib1);

    printf ("Digite o número de pontos turisticos da primeira carta: \n");
    scanf ("%d", &turisticos1);



    printf ("Digite o estado da segunda carta: \n");
    scanf ("%s", &estado2);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", &nome2);

    printf("Digite a população da segunda carta: \n");
    scanf("%d", &pop2);

    printf("Digite a área em KM2 da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &turisticos2);













    return 0;
}
