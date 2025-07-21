#include<stdio.h>

int main(){
	int codigo_carta1=0, codigo_carta2=0; //Variavel que receberá os códigos 01 a 04
	int populacao1=0, populacao2=0; //Variavel que receberá os dados de população
	int pontos_turisticos1=0, pontos_turisticos2=0; //Variavel que receberá a quantidade de pontos turisticos
	float area1=0, area2=0; //Variavel que receberá as informações de area
	float PIB1=0, PIB2=0; //Variavel que receberá os valores de PIB
    float densidade1=0, densidade2=0; //Variavel que receberá os valores da densidade populacional
    float PIB_per_cap1=0, PIB_per_cap2=0; //Variavel que receberá os valores de PIB per capita
	char estado1, estado2; //Variavel que receberá os códigos de Estado de A ate H
	char nome_cidade1[20], nome_cidade2[20]; //Variavel que receberá os nomes das cidades
	
	//Entrada de dados da carta 1 
	printf("Carta 01. \n");
	printf("Informe o Estado escolhendo de A ate H: ");
	scanf(" %c", &estado1); //Os espaços antes das % é para evitar que apertos acidentais do enter quebre a execução do programa 
	printf("Informe o Codigo da carta 01 a 04: ");
	scanf(" %d", &codigo_carta1);	
	printf("Informe o Nome da Cidade(Palavra unica): ");
	scanf(" %s", nome_cidade1);	
	printf("Informe a Populacao: ");
	scanf(" %d", &populacao1);
	printf("Informe a Area (em km²): ");
	scanf(" %f", &area1);
	printf("Informe quantos bilhões de reais tem de PIB: ");
	scanf(" %f", &PIB1);
	printf("Informe o numero de pontos turisticos: ");
	scanf(" %d", &pontos_turisticos1);

	//Entrada de dados da carta 2
	printf("\nCarta 02. \n");
	printf("Informe o Estado escolhendo de A ate H: ");
	scanf(" %c", &estado2);
	printf("Informe o Codigo da carta 01 a 04: ");
	scanf(" %d", &codigo_carta2);	
	printf("Informe o Nome da Cidade(Palavra unica): ");
	scanf(" %s", nome_cidade2);	
	printf("Informe a Populacao: ");
	scanf(" %d", &populacao2);
	printf("Informe a Area (em km²): ");
	scanf(" %f", &area2);
	printf("Informe quantos bilhões de reais tem de PIB: ");
	scanf(" %f", &PIB2);
	printf("Informe o numero de pontos turisticos: ");
	scanf(" %d", &pontos_turisticos2);

    //Calculo dos valores das cartas
    densidade1=(populacao1/area1);
    PIB_per_cap1=(PIB1/populacao1);

    densidade2=(populacao2/area2);
    PIB_per_cap2=(PIB2/populacao2);

	//Exibição dos dados das cartas
	
  //Carta 01
	printf("\nCarta 1: \n");
	printf("Estado: %c\n", estado1);
	printf("Codigo: %c0%d\n", estado1, codigo_carta1);
	printf("Nome da Cidade: %s\n", nome_cidade1);
	printf("Populacao: %d\n", populacao1);
	printf("Area: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", PIB1);
	printf("Numero de pontos turisticos: %d\n\n", pontos_turisticos1);
    printf("Desidade populacional: %.2f hab/km²", densidade1);
    printf("PIB per capita: %.2f reais", PIB_per_cap1);

	
  //Carta 02
	printf("\nCarta 2: \n");
	printf("Estado: %c\n", estado2);
	printf("Codigo: %c0%d\n", estado2, codigo_carta2);
	printf("Nome da Cidade: %s\n", nome_cidade2);
	printf("Populacao: %d\n", populacao2);
	printf("Area: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", PIB2);
	printf("Numero de pontos turisticos: %d\n\n", pontos_turisticos2);
    printf("Desidade populacional: %.2f hab/km²", densidade2);
    printf("PIB per capita: %.2f reais", PIB_per_cap2);
	
	return 0;
}
