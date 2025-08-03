#include<stdio.h>
#include<locale.h>

#define bilhoes 1000000000.00

int main(){
	setlocale(LC_ALL, "Portuguese");//Usando para corrigir erros de saídas com os acento e liberar o uso de virgulas no número decimal
	int codigo_carta1=0, codigo_carta2=0; //Variavel que receberá os códigos 01 a 04
	unsigned long int populacao1=0, populacao2=0; //Variavel que receberá os dados de população
	int pontos_turisticos1=0, pontos_turisticos2=0; //Variavel que receberá a quantidade de pontos turisticos
	float area1=0, area2=0; //Variavel que receberá as informações de area
	float PIB1=0, PIB2=0; //Variavel que receberá os valores de PIB
	float densidade1=0, densidade2=0; //Variavel que receberá os valores da densidade populacional
	float PIB_per_cap1=0, PIB_per_cap2=0; //Variavel que receberá os valores de PIB per capita
	float super_poder1=0, super_poder2=0; //Variavel que receberá os valores do super poder
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
	scanf(" %lu", &populacao1);
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
	scanf(" %lu", &populacao2);
	printf("Informe a Area (em km²): ");
	scanf(" %f", &area2);
	printf("Informe quantos bilhões de reais tem de PIB: ");
	scanf(" %f", &PIB2);
	printf("Informe o numero de pontos turisticos: ");
	scanf(" %d", &pontos_turisticos2);

	//Calculo dos valores das cartas
	densidade1=(float)populacao1/area1;
	PIB_per_cap1=((PIB1*bilhoes)/(float)populacao1);

	densidade2=(float)populacao2/area2;
	PIB_per_cap2=((PIB2*bilhoes)/(float)populacao2);
	
	super_poder1=(float)(populacao1+area1+(PIB1*bilhoes)+pontos_turisticos1+PIB_per_cap1+(1/densidade1));
	super_poder2=(float)(populacao2+area2+(PIB2*bilhoes)+pontos_turisticos2+PIB_per_cap2+(1/densidade2));

	//Exibição dos dados das cartas
	printf("\nCarta 1: \n");
	printf("Estado: %c\n", estado1);
	printf("Codigo: %c0%d\n", estado1, codigo_carta1);
	printf("Nome da Cidade: %s\n", nome_cidade1);
	printf("Populacao: %lu\n", populacao1);
	printf("Area: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", PIB1);
	printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
	printf("Densidade populacional: %.2f hab/km²\n", densidade1);
	printf("PIB per capita: %.2f reais\n", PIB_per_cap1);
	printf("O super poder dessa carta é de: %.2f\n\n", super_poder1);

	printf("\nCarta 2: \n");
	printf("Estado: %c\n", estado2);
	printf("Codigo: %c0%d\n", estado2, codigo_carta2);
	printf("Nome da Cidade: %s\n", nome_cidade2);
	printf("Populacao: %lu\n", populacao2);
	printf("Area: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", PIB2);
	printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
	printf("Densidade populacional: %.2f hab/km²\n", densidade2);
	printf("PIB per capita: %.2f reais\n", PIB_per_cap2);
	printf("O super poder dessa carta é de: %.2f\n\n", super_poder2);
	
	//Comparações dos valores
	printf("Comparação das cartas:\n");
	printf("Caso o valor seja um (1), a carta vencedora será a primeira. Caso zero (0), a segunda.\n");
	printf("População: %d\n", populacao1 > populacao2);
	printf("Área: %d\n", area1 > area2);
	printf("PIB: %d\n", (PIB1 * bilhoes) > (PIB2 * bilhoes));
	printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
	printf("Densidade Populacional: %d\n", densidade1 < densidade2);
	printf("PIB per capita: %d\n", PIB_per_cap1 > PIB_per_cap2);
	printf("Super Poder: %d\n", super_poder1 > super_poder2);
	
	return 0;
}
