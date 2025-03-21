#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[50]; //tamanho do nome
};
typedef struct tipo_pessoa tipo_pessoa; //renomeio

int main()
{
    setlocale(LC_ALL,"Portuguese");

    tipo_pessoa lista[TAM]; // é um vetor a lista, tamanho igual a TAM=3, 3 posições, 3 campos por posição, 3 pessoas
    int i;

    for(i=0; i<TAM; i++)
    {
        printf("Insira os dados (%d):\n", i+1); //%d pra saber de quem esta falando
        puts("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome); //scanf aprimorado, leva em conta o tam da string nome, ler ate 50 caracteres
        fflush(stdin);

        puts("Idade: ");
        scanf("%d", &lista[i].idade); //lista indice i
        fflush(stdin);

        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);

    }
    system("cls"); //limpa tela preta

    puts("Seus dados:\n"); //dados q o usuario digitou
    for(i=0; i<TAM; i++)
    {
        printf("----- Pessoa %d --------\n", i+1); //conteudo da primeira, segunda e terceira pessoa
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %.2f\n", lista[i].peso);
    }
    printf("----------------\n");
    return 0;
}
