#include <stdio.h>
#include <string.h>

int main(){
    // Variáveis da carta 1
    char Estado1;
    char Codigo1[4];
    char NomeCidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;
    float DensidadePopulacional1;
    float PIBperCapita1;

    // Variáveis da Carta 2
    char Estado2;
    char Codigo2[4];
    char NomeCidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;
    float DensidadePopulacional2;
    float PIBperCapita2;

    
    // == Entrada de dados Carta 1 ==
    // Letra que representa o Estado
    printf("\n === Cadastro Carta 1 - Super Trunfo === \n");
    printf("Digite uma letra de A-H que represente o Estado: \n");
    scanf(" %c", &Estado1);
    
    // Código da Carta
    printf("Digite um código da carta de 01-04 com a letra que representa o Estado, exemplo (A01, B02): \n");
    scanf("%s", &Codigo1);
    getchar();

    // Nome da Cidade
    printf("Digite o nome da Cidade do Estado: \n");
    fgets(NomeCidade1, 50, stdin);
    NomeCidade1[strcspn(NomeCidade1, "\n")] = '\0';

    // Populaçao
    printf("Digite o número de habitantes da Cidade: \n");
    scanf("%d", &Populacao1);

    // Área km²
    printf("Digite a area da cidade (km²): \n");
    scanf("%f", &Area1);

    // PIB
    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &PIB1);

    // Pontos Turísticos
    printf("Digite o número de pontos turísticos da Cidade: \n");
    scanf("%d", &PontosTuristicos1);

    // Densidade Populacional - Cálculo
    DensidadePopulacional1 = (float)(Populacao1 / Area1);

    // PIB per Capita - Cálculo
    PIBperCapita1 = (float)(PIB1 *1e9) / (Populacao1);
    getchar();

    
    // == Entrada de dados Carta 2 ==
    // Letra que representa o Estado
    printf("\n === Cadastro Carta 2 - Super Trunfo === \n");
    printf("Digite uma letra de A-H que represente o Estado: \n");
    scanf(" %c", &Estado2);
    
    // Código da Carta 
    printf("Digite um código da carta de 01-04 com a letra que representa o Estado, exemplo (A01, B02): \n");
    scanf("%s", &Codigo2);
    getchar();

    // Nome da Cidade
    printf("Digite o nome da Cidade do Estado: \n");
    fgets(NomeCidade2, 50, stdin);
    NomeCidade2[strcspn(NomeCidade2, "\n")] = '\0';

    // Populaçao
    printf("Digite o número de habitantes da Cidade: \n");
    scanf("%d", &Populacao2);

    // Área km²
    printf("Digite a area da cidade (km²): \n");
    scanf("%f", &Area2);

    // PIB
    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &PIB2);

    // Pontos Turísticos
    printf("Digite o número de pontos turísticos da Cidade: \n");
    scanf("%d", &PontosTuristicos2);

    // Densidade Populacional - Cálculo
    DensidadePopulacional2 = (float)(Populacao2 / Area2);

    // PIB per Capita - Cálculo
    PIBperCapita2 = (float)(PIB2 * 1e9) / (Populacao2);


    // Exibiçao de dados Carta1
    printf("\n=== SUPER-TRUNFO ===\n");
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);

    // Exibiçao de dados Carta2
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n\n", PIBperCapita2);

    
    // Comparações (NÍVEL MESTRE) 
    // Super Poder das cartas
    float SuperPoderCarta1 = (float)Populacao1 + Area1 + (PIB1 * 1e9f) +
                        (float)PontosTuristicos1 + PIBperCapita1 +
                        (1.0f / DensidadePopulacional1);

    float SuperPoderCarta2 = (float)Populacao2 + Area2 + (PIB2 * 1e9f) +
                        (float)PontosTuristicos2 + PIBperCapita2 +
                        (1.0f / DensidadePopulacional2);

    printf("O Super Poder da Carta 1 é: %.2f\n", SuperPoderCarta1);
    printf("O Super Poder da Carta 2 é: %.2f\n", SuperPoderCarta2);

    
    // Comparações gerando resultado 1 ou 0
    int ComparacaPopulacao = (Populacao1 > Populacao2); // maior vence
    int ComparacaoArea = (Area1 > Area2); // maior vence
    int ComparacaoPIB = (PIB1 > PIB2); // maior vence 
    int ComparacaoPontosTuristicos = (PontosTuristicos1 > PontosTuristicos2); // maior vence
    int ComparacaoDensidadePopulacional = (DensidadePopulacional1 < DensidadePopulacional2); // menor vence!
    int ComparacaoPIBPerCapita = (PIBperCapita1 > PIBperCapita2); // maior vence
    int ComparacaoSuperPoder = (SuperPoderCarta1 > SuperPoderCarta2); // maior vence

    // Comparações das Cartas
    printf("\n=== COMPARACAO DE CARTAS ===\n");
    
    if (ComparacaPopulacao == 1) // Caso o resultado for 1, sera verdadeiro e Carta 1 vence
        printf("Populacao: A Carta 1 venceu.\n");
    else // Caso o resultado for 0, sera falso e Carta 2 vence
        printf("Populacao: A Carta 2 venceu.\n");

    if (ComparacaoArea == 1) // Caso o resultado for 1, sera verdadeiro e Carta 1 vence
        printf("Area: A Carta 1 venceu.\n");
    else // Caso o resultado for 0, sera falso e Carta 2 vence
        printf("Area: A Carta 2 venceu.\n");

    if (ComparacaoPIB == 1) // Caso o resultado for 1, sera verdadeiro e Carta 1 vence
        printf("PIB: A Carta 1 venceu.\n");
    else // Caso o resultado for 0, sera falso e Carta 2 vence
        printf("PIB: A Carta 2 venceu.\n");

    if (ComparacaoPontosTuristicos == 1) // Caso o resultado for 1, sera verdadeiro e Carta 1 vence
        printf("Pontos Turisticos: A Carta 1 venceu.\n");
    else // Caso o resultado for 0, sera falso e Carta 2 vence
        printf("Pontos Turisticos: A Carta 2 venceu.\n");

    if (ComparacaoDensidadePopulacional == 1) // Caso o resultado for 1, sera verdadeiro e Carta 1 vence
        printf("Densidade Populacional: A Carta 1 venceu.\n");
    else // Caso o resultado for 0, sera falso e Carta 2 vence
        printf("Densidade Populacional: A Carta 2 venceu.\n");

    if (ComparacaoPIBPerCapita == 1) // Caso o resultado for 1, sera verdadeiro e Carta 1 vence
        printf("PIB per Capita: A Carta 1 venceu.\n");
    else // Caso o resultado for 0, sera falso e Carta 2 vence
        printf("PIB per Capita: A Carta 2 venceu.\n");

    if (ComparacaoSuperPoder == 1) // Caso o resultado for 1, sera verdadeiro e Carta 1 vence
        printf("Super Poder: A Carta 1 venceu.\n");
    else // Caso o resultado for 0, sera falso e Carta 2 vence
        printf("Super Poder: A Carta 2 venceu.\n");

    // Finaliza o código
    return 0;
}
