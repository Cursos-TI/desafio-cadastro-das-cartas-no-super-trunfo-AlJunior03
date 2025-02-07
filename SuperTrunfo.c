#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

char Estado; // Estado da cidade (A - H)
int Cidade; // Número da cidade (1, 2, 3, 4)
int Populacao; 
float Area;
float PIB;
int Pontos_turisticos;

// Cadastro das informaçoes das cartas

printf("Estado (A-H): \n");
scanf(" %c", &Estado);

printf("Cidade (1-4): \n");
scanf("%d", &Cidade);

printf("População: \n");
scanf("%d", &Populacao);

printf("Area: \n");
scanf("%f", &Area);

printf("PIB: \n");
scanf("%f", &PIB);

printf("Pontos_turisticos: \n");
scanf("%d",  &Pontos_turisticos);

// Vizualizacao das informacoes inseridas

printf("Estado: %c\n" , Estado);
printf("Cidade: %d\n" , Cidade);
printf("População: %d\n" , Populacao),
printf("Area: %f\n" , Area);
printf("PIB: %f\n" , PIB);
printf("Pontos_turisticos: %d\n" , Pontos_turisticos);






return 0;

}