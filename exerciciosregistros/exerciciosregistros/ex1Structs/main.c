#include <stdio.h>
#include <stdlib.h>
#include <string.h> //dados tipo texto
#include <locale.h> //usar regras gramaticais da LP

#define TAM 50

struct tipo_pessoa  //criando um novo tipo de dado
{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa; //renomeio struct tipo pessoa para apenas tipo_pessoa

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //criando e inicializando
    tipo_pessoa pes = {0,0.0, "Teste"}; //3 dados dentro da variavel tipo_pessoa, int float e char

    printf("�nicio:\n");
    printf("pes.idade: %d\n", pes.idade); //tento recuperar, imprimir 0, pes.idade � campo, imprimo o que foi inicializado
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //atribuindo valores aos campos
    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto"); //campo vetor tipo char, uso biblioteca string, fazer atribui��o

    //agora imprimo
    printf("\nAlterando os campos via c�digo:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //solicitando inser��es via teclado, ao inves de ter via c�digo direto, altero com info que o usuario colocou
    printf("\nInsira um n�mero inteiro:\n");
    scanf("%d", &pes.idade);
    printf("Insira um n�mero real:\n");
    scanf("%f", &pes.peso);
    fflush(stdin); //float
    printf("Insira uma palavra:\n");
    scanf("%s", &pes.nome);

    printf("\nAlterando com dados do usu�rio:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
    return 0;
}
