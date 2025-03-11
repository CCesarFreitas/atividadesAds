#include <stdio.h>

int main (){
char estado[20];
char cidade[20];
char codigoCarta[5];
int populacao;
float area;
double pib;
int pontosTuristicos;

printf("----------------------------------\n");
printf("Cadastro do Super Trunfo\n");
printf("----------------------------------\n");
printf("Escreva o nome do Estado: \n");
fgets(estado, sizeof(estado), stdin); //Lê a linha inteira, incluindo espaços em nomes compostos como Rio de Janeiro;
fflush(stdin); //limpeza do buffer de entrada de dados p/ não dar problema ao dar enter.
estado[strcspn(estado, "\n")] = '\0';  // Remove a quebra de linha final causada pelo fgets.

printf("----------------------------------\n");
printf("Cadastro do Super Trunfo\n");
printf("----------------------------------\n");
printf("Escreva o nome da Cidade: \n");
fgets(cidade, sizeof(cidade), stdin);//Lê a linha inteira, incluindo espaços em nomes compostos como Rio de Janeiro;
fflush(stdin);//limpeza do buffer de entrada de dados p/ não dar problema ao dar enter.
cidade[strcspn(cidade, "\n")] = '\0';  // Remove a quebra de linha final causada pelo fgets.

printf("----------------------------------\n");
printf("Cadastro do Super Trunfo\n");
printf("----------------------------------");
printf("Escreva o Código da Carta: \n");
fgets(codigoCarta, sizeof(codigoCarta), stdin);//Lê a linha inteira, incluindo espaços em nomes compostos como Rio de Janeiro;
fflush(stdin);//limpeza do buffer de entrada de dados p/ não dar problema ao dar enter.
codigoCarta[strcspn(codigoCarta, "\n")] = '\0';  // Remove a quebra de linha final causada pelo fgets.

printf("----------------------------------\n");
printf("Cadastro do Super Trunfo\n");
printf("----------------------------------");
printf("Escreva a população desta cidade: \n");
scanf("%d", &populacao);
fflush(stdin);

printf("----------------------------------\n");
printf("Cadastro do Super Trunfo\n");
printf("----------------------------------");
printf("Escreva a área desta cidade: \n");
scanf("%f", &area);
fflush(stdin);

printf("----------------------------------\n");
printf("Cadastro do Super Trunfo\n");
printf("----------------------------------");
printf("Escreva o PIB desta cidade (em bilhões): \n");
scanf("%lf", &pib);
fflush(stdin);

printf("----------------------------------\n");
printf("Cadastro do Super Trunfo\n");
printf("----------------------------------");
printf("Escreva a quantidade de Pontos Turísticos: \n");
scanf("%d", &pontosTuristicos);
fflush(stdin);

printf("----------------------------------\n");
printf("Código Carta Cadastrada: %s\n", codigoCarta);
printf("Estado: %s\n", estado);
printf("Cidade: %s\n", cidade);
printf("População: %d habitantes\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.lf bilhões\n", pib);
printf("Pontos Turísticos: %d\n", pontosTuristicos);
printf("----------------------------------\n");

return 0;
}
