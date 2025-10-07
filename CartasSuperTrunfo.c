#include <stdio.h>
#include <string.h>

int main(){
    // Variáveis da carta 1 definida com seus valores
    char Estado1 = 'A';
    char Codigo1[4] = "A01";
    char NomeCidade1[50] = "São Paulo";
    unsigned long int Populacao1 = 12300000;
    float Area1 = 1521.11;
    float PIB1 = 699.3;
    int PontosTuristicos1 = 50;
    // Cálculos para saber a densidade populacional, PIB per capita e a soma e todos os atributos para o super poder
    float DensidadePopulacional1 = (float) Populacao1 / Area1;
    float PIBperCapita1 = (float)(PIB1 * 1e9) / (Populacao1);
    float SuperPoderCarta1 = (float)Populacao1 + Area1 + (PIB1 * 1e9f) +
                        (float)PontosTuristicos1 + PIBperCapita1 +
                        (1.0f / DensidadePopulacional1);

    // Variáveis da Carta 2 definida com seus valores
    char Estado2 = 'B';
    char Codigo2[4] = "B02";
    char NomeCidade2[50] = "Rio de Janeiro";
    unsigned long int Populacao2 = 6748000;
    float Area2 = 1182.3;
    float PIB2 = 377.2;
    int PontosTuristicos2 = 30;
    // Cálculos para saber a densidade populacional, PIB per capita e a soma e todos os atributos para o super poder
    float DensidadePopulacional2 = (float) Populacao2 / Area2;
    float PIBperCapita2 = (float)(PIB2 * 1e9) / (Populacao2);
    float SuperPoderCarta2 = (float)Populacao2 + Area2 + (PIB2 * 1e9f) +
                        (float)PontosTuristicos2 + PIBperCapita2 +
                        (1.0f / DensidadePopulacional2);

    // Parte do codigo onde o usuário dava o valor e ficava gravado em cada variável da Carta 1
    // == Entrada de dados Carta 1 ==
    // Letra que representa o Estado
    //printf("\n === Cadastro Carta 1 - Super Trunfo === \n");
    //printf("Digite uma letra de A-H que represente o Estado: \n");
    //scanf(" %c", &Estado1);
    
    // Código da Carta
    //printf("Digite um código da carta de 01-04 com a letra que representa o Estado, exemplo (A01, B02): \n");
    //scanf("%s", &Codigo1);
    //getchar();

    // Nome da Cidade
    //printf("Digite o nome da Cidade do Estado: \n");
    //fgets(NomeCidade1, 50, stdin);
    //NomeCidade1[strcspn(NomeCidade1, "\n")] = '\0';

    // Populaçao
    //printf("Digite o número de habitantes da Cidade: \n");
    //scanf("%lu", &Populacao1);

    // Área km²
    //printf("Digite a area da cidade (km²): \n");
    //scanf("%f", &Area1);

    // PIB
    //printf("Digite o PIB da cidade (em bilhões): \n");
    //scanf("%f", &PIB1);

    // Pontos Turísticos
    //printf("Digite o número de pontos turísticos da Cidade: \n");
    //scanf("%d", &PontosTuristicos1);

    // Densidade Populacional - Cálculo
    //DensidadePopulacional1 = (float) Populacao1 / Area1;

    // PIB per Capita - Cálculo
    //PIBperCapita1 = (float)(PIB1 *1e9) / (Populacao1);
    //getchar();

    // Parte do codigo onde o usuário dava o valor e ficava gravado em cada variável da Carta 2
    // == Entrada de dados Carta 2 ==
    // Letra que representa o Estado
    //printf("\n === Cadastro Carta 2 - Super Trunfo === \n");
    //printf("Digite uma letra de A-H que represente o Estado: \n");
    //scanf(" %c", &Estado2);
    
    // Código da Carta 
    //printf("Digite um código da carta de 01-04 com a letra que representa o Estado, exemplo (A01, B02): \n");
    //scanf("%s", &Codigo2);
    //getchar();

    // Nome da Cidade
    //printf("Digite o nome da Cidade do Estado: \n");
    //fgets(NomeCidade2, 50, stdin);
    //NomeCidade2[strcspn(NomeCidade2, "\n")] = '\0';

    // Populaçao
    //printf("Digite o número de habitantes da Cidade: \n");
    //scanf("%lu", &Populacao2);

    // Área km²
    //printf("Digite a area da cidade (km²): \n");
    //scanf("%f", &Area2);

    // PIB
    //printf("Digite o PIB da cidade (em bilhões): \n");
    //scanf("%f", &PIB2);

    // Pontos Turísticos
    //printf("Digite o número de pontos turísticos da Cidade: \n");
    //scanf("%d", &PontosTuristicos2);

    // Densidade Populacional - Cálculo
    //DensidadePopulacional2 = (float) Populacao2 / Area2;

    // PIB per Capita - Cálculo
    //PIBperCapita2 = (float)(PIB2 * 1e9) / (Populacao2);

    // Parte do código onde mostra todas as informações da carta 1 na tela, de acordo com cada tipo de variável escolhida no inicio do código
    // Exibiçao de dados Carta1
    printf("\n=== SUPER-TRUNFO ===\n");
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);
    printf("O Super Poder da Carta 1 é: %.2f\n", SuperPoderCarta1);

    // Parte do código onde mostra todas as informações da carta 2 na tela, de acordo com cada tipo de variável escolhida no inicio do código
    // Exibiçao de dados Carta2
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    printf("O Super Poder da Carta 2 é: %.2f\n", SuperPoderCarta2);

    // Antiga parte do código onde realizava o cálculo do Super Poder
    // Comparações (NÍVEL MESTRE)
    // Super Poder das cartas
    //float SuperPoderCarta1 = (float)Populacao1 + Area1 + (PIB1 * 1e9f) +
                        //(float)PontosTuristicos1 + PIBperCapita1 +
                        //(1.0f / DensidadePopulacional1);

    //float SuperPoderCarta2 = (float)Populacao2 + Area2 + (PIB2 * 1e9f) +
                        //(float)PontosTuristicos2 + PIBperCapita2 +
                        //(1.0f / DensidadePopulacional2);

    //printf("O Super Poder da Carta 1 é: %.2f\n", SuperPoderCarta1);
    //printf("O Super Poder da Carta 2 é: %.2f\n", SuperPoderCarta2);

    // Parte do código onde comparava cada atributo da carta 1 vs carta 2
    // Comparando se o resultado de uma Variável é Maior que a outra Variável
    //int ComparacaPopulacao = (Populacao1 > Populacao2); // Se for maior = 1 (Verdadeiro), se for menor = 0 (Falso) MAIOR VENCE!
    //int ComparacaoArea = (Area1 > Area2); // Se for maior = 1 (Verdadeiro), se for menor = 0 (Falso) MAIOR VENCE!
    //int ComparacaoPIB = (PIB1 > PIB2); // Se for maior = 1 (Verdadeiro), se for menor = 0 (Falso) MAIOR VENCE!
    //int ComparacaoPontosTuristicos = (PontosTuristicos1 > PontosTuristicos2); // Se for maior = 1 (Verdadeiro), se for menor = 0 (Falso) MAIOR VENCE
    //int ComparacaoDensidadePopulacional = (DensidadePopulacional1 < DensidadePopulacional2); // Se for maior = 1 (Verdadeiro), se for menor = 0 (Falso) MENOR VENCE!
    //int ComparacaoPIBPerCapita = (PIBperCapita1 > PIBperCapita2); // Se for maior = 1 (Verdadeiro), se for menor = 0 (Falso) MAIOR VENCE!
    //int ComparacaoSuperPoder = (SuperPoderCarta1 > SuperPoderCarta2); // Se for maior = 1 (Verdadeiro), se for menor = 0 (Falso) MAIOR VENCE!

    // 
    // Comparações das Cartas
    //printf("\n=== COMPARACAO DE CARTAS ===\n");
    // Se o resultado for igual a 1, sera verdadeiro e Carta 1 vence
    // Se o resultado for diferente de 1, sera falso e Carta 2 vence
    //if (ComparacaPopulacao == 1) {
        //printf("Populacao: A Carta 1 (%s) venceu.\n", NomeCidade1);
    //}else {
        //printf("Populacao: A Carta 2 (%s) venceu.\n", NomeCidade2);
    //}

    // Se o resultado for igual a 1, sera verdadeiro e Carta 1 vence
    // Se o resultado for diferente de 1, sera falso e Carta 2 vence
    //if (ComparacaoArea == 1) {
        //printf("Area: A Carta 1 (%s) venceu.\n", NomeCidade1);
    //} else {
        //printf("Area: A Carta 2 (%s) venceu.\n", NomeCidade2);
    //}

    // Se o resultado for igual a 1, sera verdadeiro e Carta 1 vence
    // Se o resultado for diferente de 1, sera falso e Carta 2 vence
    //if (ComparacaoPIB == 1) {
        //printf("PIB: A Carta 1 (%s) venceu.\n", NomeCidade1);
    //} else {
        //printf("PIB: A Carta 2 (%s) venceu.\n", NomeCidade2);
    //}

    // Se o resultado for igual a 1, sera verdadeiro e Carta 1 vence
    // Se o resultado for diferente de 1, sera falso e Carta 2 vence
    //if (ComparacaoPontosTuristicos == 1) {
        //printf("Pontos Turisticos: A Carta 1 (%s) venceu.\n", NomeCidade1);
    //} else {
        //printf("Pontos Turisticos: A Carta 2 (%s) venceu.\n", NomeCidade2);
    //}

    // Se o resultado for igual a 1, sera verdadeiro e Carta 1 vence
    // Se o resultado for diferente de 1, sera falso e Carta 2 vence
    //if (ComparacaoDensidadePopulacional == 1) {
        //printf("Densidade Populacional: A Carta 1 (%s) venceu.\n", NomeCidade1);
    //} else {
        //printf("Densidade Populacional: A Carta 2 (%s) venceu.\n", NomeCidade2);
    //}

    // Se o resultado for igual a 1, sera verdadeiro e Carta 1 vence
    // Se o resultado for diferente de 1, sera falso e Carta 2 vence
    //if (ComparacaoPIBPerCapita == 1) {
        //printf("PIB per Capita: A Carta 1 (%s) venceu.\n", NomeCidade1);
    //} else {
        //printf("PIB per Capita: A Carta 2 (%s) venceu.\n", NomeCidade2);
    //}

    // Se o resultado for igual a 1, sera verdadeiro e Carta 1 vence
    // Se o resultado for diferente de 1, sera falso e Carta 2 vence
    //if (ComparacaoSuperPoder == 1) {
        //printf("Super Poder: A Carta 1 (%s) venceu.\n", NomeCidade1);
    //} else {
        //printf("Super Poder: A Carta 2 (%s) venceu.\n", NomeCidade2);
    //}

    // Parte do código onde usava o Menu com switch e case no modo aventureiro
    // Uso de switch e case
    // Variavel Opção e os valores de 1 ao 7 com opções para o usuário escolher na parte do scanf
    //int opcao;

    //printf("\n=== Escolha qual atributo deseja comparar ===\n");
    //printf("1 - Populacao\n");
    //printf("2 - Area\n");
    //printf("3 - PIB (em bilhoes)\n");
    //printf("4 - Pontos Turisticos\n");
    //printf("5 - Densidade Demografica (Menor vence)\n");
    //printf("6 - PIB per Capita\n");
    //printf("7 - Super Poder\n");
    //printf("Escolha uma opcao: ");
    //scanf("%d", &opcao);
    
    // Aqui mostra o resultado de acordo com o numero escolhido pelo o usuário, com o valor de cada atributo corretamente
    //printf("\n=== RESULTADO ===\n");

    //switch (opcao) {
        //case 1: // População (Maior vence)
            //printf("Atributo: Populacao\n");
            //printf("Carta 1 - %s: %lu habitantes\n", NomeCidade1, Populacao1);
            //printf("Carta 2 - %s: %lu habitantes\n", NomeCidade2, Populacao2);

            //if (Populacao1 > Populacao2) {
                //printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidade1);
            //} else if (Populacao2 > Populacao1) {
                //printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidade2);
            //} else {
                //printf("Empate!\n");
            //}
            //break;

        //case 2: // Área (Maior vence)
            //printf("Atributo: Area (km²)\n");
            //printf("Carta 1 - %s: %.2f km²\n", NomeCidade1, Area1);
            //printf("Carta 2 - %s: %.2f km²\n", NomeCidade2, Area2);

            //if (Area1 > Area2) {
                //printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidade1);
            //} else if (Area2 > Area1) {
                //printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidade2);
            //} else {
                //printf("Empate!\n");
            //}
            //break;

        //case 3: // PIB em bilhões (Maior vence)
            //printf("Atributo: PIB (bilhoes de reais)\n");
            //printf("Carta 1 - %s: %.2f bilhoes\n", NomeCidade1, PIB1);
            //printf("Carta 2 - %s: %.2f bilhoes\n", NomeCidade2, PIB2);

            //if (PIB1 > PIB2) {
                //printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidade1);
            //} else if (PIB2 > PIB1) {
                //printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidade2);
            //} else {
                //printf("Empate!\n");
            //}
            //break;

        //case 4: // Pontos turísticos (Maior vence)
            //printf("Atributo: Pontos Turisticos\n");
            //printf("Carta 1 - %s: %d pontos\n", NomeCidade1, PontosTuristicos1);
            //printf("Carta 2 - %s: %d pontos\n", NomeCidade2, PontosTuristicos2);

            //if (PontosTuristicos1 > PontosTuristicos2) {
                //printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidade1);
            //} else if (PontosTuristicos2 > PontosTuristicos1) {
                //printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidade2);
            //} else {
                //printf("Empate!\n");
            //}
            //break;

        //case 5: // Densidade (Menor vence)
            //printf("Atributo: Densidade Demografica (hab/km²)\n");
            //printf("Carta 1 - %s: %.2f hab/km²\n", NomeCidade1, DensidadePopulacional1);
            //printf("Carta 2 - %s: %.2f hab/km²\n", NomeCidade2, DensidadePopulacional2);

            //if (DensidadePopulacional1 < DensidadePopulacional2) {
                //printf("Resultado: Carta 1 (%s) venceu! (Menor densidade)\n", NomeCidade1);
            //} else if (DensidadePopulacional2 < DensidadePopulacional1) {
                //printf("Resultado: Carta 2 (%s) venceu! (Menor densidade)\n", NomeCidade2);
            //} else {
                //printf("Empate!\n");
            //}
            //break;

        //case 6: // PIB per capita (Maior vence)
            //printf("Atributo: PIB per Capita (reais)\n");
            //printf("Carta 1 - %s: %.2f reais\n", NomeCidade1, PIBperCapita1);
            //printf("Carta 2 - %s: %.2f reais\n", NomeCidade2, PIBperCapita2);

            //if (PIBperCapita1 > PIBperCapita2) {
                //printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidade1);
            //} else if (PIBperCapita2 > PIBperCapita1) {
                //printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidade2);
            //} else {
                //printf("Empate!\n");
            //}
            //break;

        //case 7: // Super Poder (Maior vence)
            //printf("Atributo: Super Poder\n"); 
            //printf("Carta 1 - %s: %.2f\n", NomeCidade1, SuperPoderCarta1);
            //printf("Carta 2 - %s: %.2f\n", NomeCidade2, SuperPoderCarta2);

            //if (SuperPoderCarta1 > SuperPoderCarta2) {
                //printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidade1);
            //} else if (SuperPoderCarta2 > SuperPoderCarta1) {
                //printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidade2);
            //} else {
                //printf("Empate!\n");
            //}
            //break;

        //default:
            //printf("Opcao invalida. Tente novamente.\n");
    //}
    int atributo1, atributo2;
    int resultado1, resultado2;

    // Inicio do jogo
    // Primeiro atributo
    printf("\n=== JOGO SUPER TRUNFO ===\n");
    printf("Escolha o primeiro atributo para comparar de (1 a 7):\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Digite o numero do atributo: \n");
    scanf("%d", &atributo1);

    switch(atributo1) {
        case 1:
            printf("Atributo escolhido: Populacao\n\n");
            resultado1 = Populacao1 > Populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Atributo escolhido: Area\n\n");
            resultado1 = Area1 > Area2 ? 1 : 0;
            break;
        case 3:
            printf("Atributo escolhido: PIB\n\n");
            resultado1 = PIB1 > PIB2 ? 1 : 0;
            break;
        case 4:
            printf("Atributo escolhido: Pontos Turisticos\n\n");
            resultado1 = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            printf("Atributo escolhido: Densidade Demografica\n\n");
            resultado1 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
            break;
        case 6:
            printf("Atributo escolhido: PIB per Capita\n\n");
            resultado1 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;
            break;
        case 7:
            printf("Atributo escolhido: Super Poder\n\n");
            resultado1 = SuperPoderCarta1 > SuperPoderCarta2 ? 1 : 0;
            break;
        default:
            printf("Atributo inválido. Tente novamente.\n\n");
            return 1;
    }
    // Segundo atributo
    printf("Escolha o segundo atributo para comparar diferente do primeiro:\n");
    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turísticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demográfica\n");
    if (atributo1 != 6) printf("6 - PIB per Capita\n");
    if (atributo1 != 7) printf("7 - Super Poder\n");
    printf("Digite o numero do segundo atributo: \n");
    scanf("%d", &atributo2);
    
    // Verifica se o segundo atributo é igual ao primeiro
    if (atributo2 == atributo1) {
        printf("Você escolheu o mesmo atributo duas vezes!\n");
        printf("Escolherei automaticamente o próximo atributo disponível.\n");
        atributo2 = (atributo1 == 7) ? 1 : atributo1 + 1;
    }
    
    switch(atributo2) {
        case 1:
            printf("Atributo escolhido: Populacao\n\n");
            resultado2 = Populacao1 > Populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Atributo escolhido: Area\n\n");
            resultado2 = Area1 > Area2 ? 1 : 0;
            break;
        case 3:
            printf("Atributo escolhido: PIB\n\n");
            resultado2 = PIB1 > PIB2 ? 1 : 0;
            break;
        case 4:
            printf("Atributo escolhido: Pontos Turisticos\n\n");
            resultado2 = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            printf("Atributo escolhido: Densidade Demografica\n\n");
            resultado2 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
            break;
        case 6:
            printf("Atributo escolhido: PIB per Capita\n\n");
            resultado2 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;
            break;
        case 7:
            printf("Atributo escolhido: Super Poder\n\n");
            resultado2 = SuperPoderCarta1 > SuperPoderCarta2 ? 1 : 0;
            break;
        default:
            printf("Atributo inválido. Tente novamente.\n\n");
            return 1;
        }
    // Convertendo o número do atributo para o nome correspondente
    char nomeAtributo1[50];
    char nomeAtributo2[50];
    
    // identificar o nome do primeiro atributo
    if (atributo1 == 1) {
        strcpy(nomeAtributo1, "Populacao");
    } else if (atributo1 == 2) {
        strcpy(nomeAtributo1, "Area");
    } else if (atributo1 == 3) {
        strcpy(nomeAtributo1, "PIB (bilhoes)");
    } else if (atributo1 == 4) {
        strcpy(nomeAtributo1, "Pontos Turisticos");
    } else if (atributo1 == 5) {
        strcpy(nomeAtributo1, "Densidade Demografica");
    } else if (atributo1 == 6) {
        strcpy(nomeAtributo1, "PIB per Capita");
    } else if (atributo1 == 7) {
        strcpy(nomeAtributo1, "Super Poder");
    }

    // identificar o nome do segundo atributo
    if (atributo2 == 1){
        strcpy(nomeAtributo2, "Populacao");
    } else if (atributo2 == 2) {
        strcpy(nomeAtributo2, "Area");
    } else if (atributo2 == 3) {
        strcpy(nomeAtributo2, "PIB (bilhoes)");
    } else if (atributo2 == 4) {
        strcpy(nomeAtributo2, "Pontos Turisticos");
    } else if (atributo2 == 5) {
        strcpy(nomeAtributo2, "Densidade Demografica");
    } else if (atributo2 == 6) {
        strcpy(nomeAtributo2, "PIB per Capita");
    } else if (atributo2 == 7) {
        strcpy(nomeAtributo2, "Super Poder");
    }
        
    // Resultado final
    int PontosCarta1, PontosCarta2;
    PontosCarta1 = resultado1 + resultado2;
    PontosCarta2 = 2 - PontosCarta1;

    printf("\n=== RESULTADO FINAL ===\n");
    printf("%s vs %s \n", NomeCidade1, NomeCidade2);
    printf("Primeiro Atributo: (%s), Segundo Atributo: (%s)\n", nomeAtributo1, nomeAtributo2);
    
    // Valores do primeiro atributo (formatação por tipo)
    switch (atributo1) {
        case 1: // População (unsigned long)
            printf("%s: %lu vs %lu\n", nomeAtributo1, Populacao1, Populacao2);
            break;
        case 2: // Área (float)
            printf("%s: %.2f vs %.2f\n", nomeAtributo1, Area1, Area2);
            break;
        case 3: // PIB (float - bilhões)
            printf("%s: %.2f vs %.2f\n", nomeAtributo1, PIB1, PIB2);
            break;
        case 4: // Pontos turísticos (int)
            printf("%s: %d vs %d\n", nomeAtributo1, PontosTuristicos1, PontosTuristicos2);
            break;
        case 5: // Densidade (float)
            printf("%s: %.2f vs %.2f\n", nomeAtributo1, DensidadePopulacional1, DensidadePopulacional2);
            break;
        case 6: // PIB per Capita (float)
            printf("%s: %.2f vs %.2f\n", nomeAtributo1, PIBperCapita1, PIBperCapita2);
            break;
        case 7: // Super Poder (float)
            printf("%s: %.2f vs %.2f\n", nomeAtributo1, SuperPoderCarta1, SuperPoderCarta2);
            break;
    }

    // Valores do segundo atributo (formatação por tipo)
    switch (atributo2) {
        case 1:
            printf("%s: %lu vs %lu\n", nomeAtributo2, Populacao1, Populacao2);
            break;
        case 2:
            printf("%s: %.2f vs %.2f\n", nomeAtributo2, Area1, Area2);
            break;
        case 3:
            printf("%s: %.2f vs %.2f\n", nomeAtributo2, PIB1, PIB2);
            break;
        case 4:
            printf("%s: %d vs %d\n", nomeAtributo2, PontosTuristicos1, PontosTuristicos2);
            break;
        case 5:
            printf("%s: %.2f vs %.2f\n", nomeAtributo2, DensidadePopulacional1, DensidadePopulacional2);
            break;
        case 6:
            printf("%s: %.2f vs %.2f\n", nomeAtributo2, PIBperCapita1, PIBperCapita2);
            break;
        case 7:
            printf("%s: %.2f vs %.2f\n", nomeAtributo2, SuperPoderCarta1, SuperPoderCarta2);
            break;
    }
    printf("Pontos carta 1: %d Pontos\n", PontosCarta1);
    printf("Pontos carta 2: %d Pontos\n", PontosCarta2);

    // Determina o vencedor geral com base nos resultados dos dois atributos
    if (resultado1 && resultado2) {
        printf("A Carta 1: %s venceu em ambos os atributos!\n", NomeCidade1);
    } else if (resultado1 != resultado2) {
        printf("Empate! Ambas as cartas venceram 1 atributo cada uma!\n");
    } else {
        printf("A Carta 2: %s venceu em ambos os atributos!\n", NomeCidade2);
    }

    printf("Obrigado por jogar o Super Trunfo!\n");
    printf("Criado por Lucas Bastos - Trabalho Faculdade Estácio\n");

    // Finaliza o código
    return 0;
}
