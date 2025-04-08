#include <stdio.h>

    int main(){
        printf("Bem vindo ao Jogo Super Trunfo de ESTADOS!\n Você deverá, escolher um estado do Brasil e sua cidade, e preencher as informações a respeito dele.\n");
        
        // Define variáveis da Primeira Carta
        char estado1[20];
        char codigo1[20];
        char cidade1[20];
        int populacao1;
        float area1;
        float pib1;
        int pontosturisticos1;

        //Comandos de entrada e saída da Primeira Carta
        printf("Digite, por favor, a sigla do seu estado: \n");
        scanf("%s", estado1);
    
        printf("Digite, por favor, o nome de sua cidade: \n");
        scanf("%s", cidade1);

        printf("População: \n");
        scanf("%d", &populacao1);

        printf("Área da cidade: \n");
        scanf("%f", &area1);

        printf("PIB da cidade: \n");
        scanf("%f", &pib1);

        printf("Pontos Turísticos para a cidade: \n");
        scanf("%d", &pontosturisticos1);
        
        printf("Escolha uma Letra de 'A' a 'H' para a sua cidade e em seguida um número  de '01' a '04': \n");
        scanf("%s", codigo1);

        printf("\nEstado: %s - Cidade: %s\nPopulação: %d\nÁrea da Cidade: %f\nPIB da Cidade: %f\nPontos Turísticos: %d\nCÓDIGO DE SUA CIDADE: %s\n", estado1, cidade1, populacao1, area1, pib1, pontosturisticos1, codigo1);

        // Define variáveis da Segunda Carta
        char estado2[20];
        char codigo2[20];
        char cidade2[20];
        int populacao2;
        float area2;
        float pib2;
        int pontosturisticos2;

        //Comandos de entrada e saída da Segunda Carta
        printf("\nAgora vamos fazer a segunda carta do seu jogo:\nDigite, por favor, a sigla do seu estado: \n");
        scanf("%s", estado2);

        printf("Digite, por favor, o nome de sua cidade: \n");
        scanf("%s", cidade2);

        printf("População: \n");
        scanf("%d", &populacao2);

        printf("Área da cidade: \n");
        scanf("%f", &area2);

        printf("PIB da cidade: \n");
        scanf("%f", &pib2);

        printf("Pontos Turísticos para a cidade: \n");
        scanf("%d", &pontosturisticos2);
        
        printf("Escolha uma Letra de 'A' a 'H' para a sua cidade e em seguida um número  de '01' a '04': \n");
        scanf("%s", codigo2);

        printf("\nEstado: %s - Cidade: %s\nPopulação: %d\nÁrea da Cidade: %f\nPIB da Cidade: %f\nPontos Turísticos: %d\nCÓDIGO DE SUA CIDADE: %s\n", estado2, cidade2, populacao2, area2, pib2, pontosturisticos2, codigo2);
}