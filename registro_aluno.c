#include <stdio.h>

int main(){

    //inicio variaveis
    int idade, matricula;
    float altura;
    char nome[50];

    //entrada
    printf("Digite sua Idade:\n");
    scanf("%d", &idade);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite seu nome:\n");
    scanf("%s", &nome);

    printf("Digite sua matricula:\n");
    scanf("%d", &matricula);

    //saida
    printf("Nome: %s - Matricula: %d\n", nome, matricula);

    printf("Altura: %f\n", altura);

    printf("Idade: %d\n", idade);

    return 0;
}