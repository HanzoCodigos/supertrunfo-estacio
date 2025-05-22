#include <stdio.h>
#include <windows.h>

int main()
{
    char carta[4], cidades[50], estado;
    int habitantes, turista, jogador;
    float area, pib;
    float resultadodenso, resultadopib;

    // Primeiro Cartao
    printf("\n--> Preencha sua Primera Carta: <--\n\n");

    printf("Seu Estado (Letra de 'A' a 'H'): ");
    scanf("%c", &estado);

    printf("Codigo da Carta: ");
    scanf("%s", carta);

    printf("Informe o nome da Cidade: ");
    scanf(" %[^\n]", cidades);

    printf("Informe a quantidade de Habitantes: ");
    scanf("%d", &habitantes);

    printf("Informe a Area Total: ");
    scanf("%f", &area);

    printf("Informe o PIB (R$): ");
    scanf("%f", &pib);

    printf("Quantos Pontos Turisticos: ");
    scanf("%d", &turista);

    // Cauculo
    resultadodenso = habitantes / area;
    resultadopib = (float)pib / habitantes;

    // Cauculo Super Poder Carta 1
    float resultadopoder, resultadodiv;

    resultadodiv = 1 / resultadodenso;
    resultadopoder = habitantes + area + pib + turista + resultadopib + resultadodiv;

    // Resultado 1. Cartao
    printf("\n\n- Carta 01 -\n\n");

    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", carta);
    printf("Nome da Cidade: %s\n", cidades);
    printf("Habitantes: %d\n", habitantes);
    printf("Area: %.3f Km\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", turista);
    printf("Densidade Populacional: %.1f Hab/Km\n", resultadodenso);
    printf("PIB per Capita: R$ %.3f\n", resultadopib);
    printf("Super Poder: %.2f", resultadopoder);

    char carta2[4], cidades2[50], estado2;
    int habitantes2, turista2;
    float area2, pib2;
    float resultadodenso2, resultadopib2;

    // Segundo Cartao
    printf("\n\n--> Preencha sua Segunda Carta: <--\n\n");

    printf("Seu Estado (Letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta: ");
    scanf("%s", carta2);

    printf("Informe o nome da Cidade: ");
    scanf(" %[^\n]", cidades2);

    printf("Informe a quantidade de Habitantes: ");
    scanf("%d", &habitantes2);

    printf("Informe a Area Total: ");
    scanf("%f", &area2);

    printf("Informe o PIB (R$): ");
    scanf("%f", &pib2);

    printf("Quantos Pontos Turisticos: ");
    scanf("%d", &turista2);

    // Cauculo
    resultadodenso2 = habitantes2 / area2;
    resultadopib2 = (float)pib2 / habitantes2;

    // Cauculo Super Poder Carta 2
    float resultadopoder2, resultadodiv2;

    resultadodiv2 = 1 / resultadodenso2;
    resultadopoder2 = habitantes2 + area2 + pib2 + turista2 + resultadopib2 + resultadodiv2;

    // Resultado 2. Cartao
    printf("\n\n- Carta 02 -\n\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidades2);
    printf("Habitantes: %d\n", habitantes2);
    printf("Area: %.3f Km\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", turista2);
    printf("Densidade Populacional: %.1f Hab/Km\n", resultadodenso2);
    printf("PIB per Capita: R$ %.3f\n", resultadopib2);
    printf("Super Poder: %.2f\n", resultadopoder2);

    // Escolhendo e comparando atributos!
    printf("\n\nEscolha o que comparar: \n");
    printf("\n1. Habitantes!\n");
    printf("2. Area!\n");
    printf("3. PIB!\n");
    printf("4. Pontos Turisticos!\n");
    printf("5. Densidade Popupacional\n");
    printf("\nEscolha o que quer comparar: ");
    scanf("%d", &jogador);

    switch (jogador)
    {
    case 1:
        printf("\n-> Voce escolheu comparar a Populacao! <-\n");
        printf("\nCidades comparadas: %s vs %s\n", cidades, cidades2);
        printf("Populacao: %d vs %d\n", habitantes, habitantes2);
        if (habitantes > habitantes2)
        {
            printf("\n%s GANHOU!\n", cidades);
        }
        else if (habitantes < habitantes2)
        {
            printf("\n%s GANHOU!\n", cidades2);
        }
        else {
            printf("\nEMPATOU!\n");
        }
        break;

    case 2:
        printf("\n-> Voce escolheu comparar a Area <-\n");
        printf("\nCidades comparadas: %s vs %s\n", cidades, cidades2);
        printf("Area Total: %.3f vs %.3f\n", area, area2);

        if (area > area2)
        {
            printf("\n%s GANHOU!\n", cidades);
        }
        else if (area < area2)
        {
            printf("\n%s GANHOU!\n", cidades2);
        }
        else {
            printf("\nEMPATOU!\n");
        }
        break;

    case 3:
        printf("\n-> Voce escolheu comparar o PIB <-\n");
        printf("\nCidades comparadas: %s vs %s\n", cidades, cidades2);
        printf("PIB: %.2f vs %.2f\n", pib, pib2);

        if (pib > pib2)
        {
            printf("\n%s GANHOU!\n", cidades);
        }
        else if (pib > pib2)
        {
            printf("\n%s GANHOU!\n", cidades2);
        }
        else {
            printf("\nEMPATOU!\n");
        }
        break;

    case 4:
        printf("\n-> Voce escolheu comparar os Pontos Turisticos <-\n");
        printf("\nCidades comparadas: %s vs %s\n", cidades, cidades2);
        printf("Pontos Turisticos: %d vs %d\n", turista, turista2);

        if (turista > turista2)
        {
            printf("\n%s GANHOU!\n", cidades);
        }
        else if (turista < turista2)
        {
            printf("\n%s GANHOU!\n", cidades2);
        }
        else
        {
            printf("\nEMPATOU!\n");
        }
        break;

    case 5:
        printf("\n-> Voce escolheu comparar a Densidade Populacional <-\n");
        printf("\nCidades comparadas: %s vs %s\n", cidades, cidades2);
        printf("Densidade Populacional: %.1f vs %.1f\n", resultadodenso, resultadodenso2);

        if (resultadodenso < resultadodenso2)
        {
            printf("\n%s GANHOU!\n", cidades);
        }
        else if (resultadodenso > resultadodenso2)
        {
            printf("\n%s GANHOU!\n", cidades2);
        }
        else
        {
            printf("\nEMPATOU!\n");
        }
        break;
    }
    
    Sleep(3000);

    // Cauculo Comparação das Cartas
    printf("\n\n- Comparacao das Cartas -\n\n");

        printf("Habitantes: (%d)\n", habitantes > habitantes2);
        printf("Area em Km: (%d)\n", area > area2);
        printf("PIB: (%d)\n", pib > pib2);
        printf("Pontos Turisticos: (%d)\n", turista > turista2);
        printf("Densidade populacional: (%d)\n", resultadodenso < resultadodenso2);
        printf("PIB Per Capita: (%d)\n", resultadopib > resultadopib2);
        printf("Super Poder: (%d)\n", resultadopoder > resultadopoder2);


// Verificação do Vencedor

void verificarvencedor()
{
    int vitoriacarta1 = 0;
    int vitoriacarta2 = 0;

    // Comparação dos atributos
    if (habitantes > habitantes2)
        vitoriacarta1++;
    else if (habitantes < habitantes2)
        vitoriacarta2++;

    if (area > area2)
        vitoriacarta1++;
    else if (area < area2)
        vitoriacarta2++;

    if (pib > pib2)
        vitoriacarta1++;
    else if (pib < pib2)
        vitoriacarta2++;

    if (turista > turista2)
        vitoriacarta1++;
    else if (turista < turista2)
        vitoriacarta2++;

    if (resultadodenso > resultadodenso2)
        vitoriacarta1++;
    else if (resultadodenso < resultadodenso2)
        vitoriacarta2++;

    if (resultadopib > resultadopib2)
        vitoriacarta1++;
    else if (resultadopib < resultadopib2)
        vitoriacarta2++;

    if (resultadopoder > resultadopoder2)
        vitoriacarta1++;
    else if (resultadopoder < resultadopoder2)
        vitoriacarta2++;

    // Mostrar resultados
    if (vitoriacarta1 > vitoriacarta2)
        printf("\n - A Carta 1 Venceu! -");
    else if (vitoriacarta1 < vitoriacarta2)
        printf("\n - A Carta 2 Venceu! -");
    else
        printf("\n - EMPATE! -");
}



    int 









    verificarvencedor();

    return 0;
}