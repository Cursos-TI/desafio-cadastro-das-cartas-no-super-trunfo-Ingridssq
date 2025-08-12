#include <stdio.h>

int main(){

char estado1, estado2;
char codigo1[20], codigo2[20];
char cidade1[20], cidade2[20];
int populacao1;
int populacao2;
int Turistico1;
int Turistico2;
float area1, area2, PIB1, PIB2;

printf("dados da carta 1 \n");

printf("digite seu estado: ");
scanf("%c", &estado1);

printf("digite seu codigo: ");
scanf("%s", &codigo1);

printf("digite sua cidade: ");
scanf("%s", &cidade1);

printf("Populacao: ");
scanf("%d", &populacao1);

printf("digite sua area: ");
scanf("%f", &area1);

printf("digite o PIB: ");
scanf("%f", &PIB1);

printf("digite o numero de pontos turisticos: ");
scanf("%d", &Turistico1);




printf("dados da carta 2 \n");

printf("digite seu estado: ");
scanf(" %c", &estado2);

printf("digite seu codigo: ");
scanf("%s", &codigo2);

printf("digite sua cidade: ");
scanf("%s", &cidade2);

printf("Populacao: ");
scanf("%d", &populacao2);

printf("digite sua area: ");
scanf("%f", &area2);

printf("digite o PIB: ");
scanf("%f", &PIB2);

printf("digite o numero de pontos turisticos: ");
scanf("%d", &Turistico2);


printf("carta 1 \n");

printf("Estado: %c \n", estado1);
printf("Codigo: %s \n", codigo1);
printf("Nome da Cidade: %s \n", cidade1);
printf("Populacao: %d \n", populacao1);
printf("Área: %f \n", area1);
printf("PIB: %f \n", PIB1);
printf("Número de Pontos Turísticos: %d \n", Turistico1);



printf("carta 2 \n");

printf("Estado: %c \n", estado2);
printf("Codigo: %s \n", codigo2);
printf("Nome da Cidade: %s \n", cidade2);
printf("Populacao: %d \n", populacao2);
printf("Área: %f \n", area2);
printf("PIB: %f \n", PIB2);
printf("Número de Pontos Turísticos: %d \n", Turistico2);


return 0;

}
