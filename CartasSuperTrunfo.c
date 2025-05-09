#include <stdio.h>

#include <stdio.h>
//versao aventureiro
int main(){
	//                  DECLARACAO VARIAVEIS
	
	//declaracao variaveis carta1
		int populacao1, pontosTuristicos1;
		float area1, pib1; 
		char codigoCarta1[4];
		char nomeCidade1[20];
		char estado1;
		float pibPerCapita1; //nova variavel do nivel aventureio
		float densidadePopulacional1; // nova variavel nivel aventureiro
		
			
	//declaracao variaveis carta2
		int populacao2, pontosTuristicos2;
		float area2, pib2; 
		char codigoCarta2[4];
		char nomeCidade2[20];
		char estado2;
		float pibPerCapita2; //nova variavel do nivel aventureio
		float densidadePopulacional2; // nova variavel nivel aventureiro
	
	//leitura de dados carta 1
		printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
		scanf(" %c", &estado1);
		printf("Digite a letra do estado seguida de um n�mero de 01 a 04 (ex: A01, B03): ");
		scanf(" %s", codigoCarta1);
		printf("Digite o nome da cidade: ");
		scanf(" %s", nomeCidade1);
		printf("Digite o numero de habitantes da cidade: ");
		scanf(" %d", &populacao1);
		printf("Digite a area da cidade em quilometros quadrados: ");
		scanf(" %f", &area1);
		printf("Digite o PIB da cidade em milhoes de reais: ");
		scanf(" %f", &pib1);
	
	//carta 2	
	//leitura de dados carta 2
		printf("\nDigite uma letra de 'A' a 'H' (representando um dos oito estados): ");
		scanf(" %c", &estado2);
		printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): ");
		scanf(" %s", codigoCarta2);
		printf("Digite o nome da cidade: ");
		scanf(" %s", nomeCidade2);
		printf("Digite o numero de habitantes da cidade: ");
		scanf(" %d", &populacao2);
		printf("Digite a area da cidade em quilometros quadrados: ");
		scanf(" %f", &area2);
		printf("Digite o PIB da cidade em milhoes de reais: ");
		scanf(" %f", &pib2);
	

	
	// Impressao de dados carta 1
		printf("\nCarta A...");
		printf("\nEstado letra: %c", estado1);
		printf("\nCodigo da carta: %s", codigoCarta1);
		printf("\nNome da cidade: %s", nomeCidade1);
		printf("\nPopulacao: %d",populacao1);
		printf("\nArea da cidade em km qd: %.2f",area1);
		printf("\nPIB da cidade: %.2f",pib1);		
		pibPerCapita1 = pib1 / populacao1; // atribuindo o valor do pib per capita
		printf("\nPIB per capita: %.2f milhoes de reais por pessoa", pibPerCapita1);
		densidadePopulacional1 = populacao1 / area1; // atribuindo o valor da densidade populacional
		printf("\nDensidade populacional: %.2f hab/km qd", densidadePopulacional1);
		
		
	
	// Impressao de dados carta 2
		printf("\nCarta B...");
		printf("\nEstado letra: %c", estado2);
		printf("\nCodigo da carta: %s", codigoCarta2);
		printf("\nNome da cidade: %s", nomeCidade2);
		printf("\nPopulacao: %d",populacao2);
		printf("\nArea da cidade em km qd: %.2f",area2);
		printf("\nPIB da cidade: %.2f",pib2);
		pibPerCapita2 = pib2 / populacao2; // atribuindo o valor do pib per capita
		printf("\nPIB per capita: %.2f milhoes de reais por pessoa", pibPerCapita2);
		densidadePopulacional2 = populacao2 / area2; // atribuindo o valor da densidade populacional
		printf("\nDensidade populacional: %.2f hab/km qd", densidadePopulacional2);
		
	

	return 0;
}
