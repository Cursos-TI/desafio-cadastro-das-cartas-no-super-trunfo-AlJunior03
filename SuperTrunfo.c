#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

char Estado; // Estado da cidade (A - H)
int Cidade; // Número da cidade (1, 2, 3, 4)
int População; 
float Area;
float PIB;
int Nºturisticos;

// Cadastro das informaçoes das cartas

printf("Estado (A-H): \n");
scanf(" %c", &Estado);
printf("Estado: %c\n" , Estado);

printf("Cidade (1-4): \n");
scanf("%d", &Cidade);
printf("Cidade: %d\n" , Cidade);

printf("População: \n");
scanf("%d", &População);
printf("População: %d\n" , População),

printf("Area: \n");
scanf("%f", &Area);
printf("Area: %f\n" , Area);

printf("PIB: \n");
scanf("%f", &PIB);
printf("PIB: %f\n" , PIB);

printf("Nº de pontos turisticos: \n");
scanf("%d",  &Nºturisticos);
printf("Nºturisticos: %c\n" , Nºturisticos);









return 0;

}