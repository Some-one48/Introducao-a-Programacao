/*
Faça um programa na linguagem C que receba 3 valores numéricos, e verifique se os 3 valores
formam os lados de um triângulo.

Para que 3 números formem um triângulo, cada número deve ser menor do que a soma dos outros dois.
*/

#include <stdio.h>

// Cabeçalho
void header(){
    printf("-----------------------------------------\n");
    printf("\tVerificador de Triangulos\n");
    printf("-----------------------------------------\n\n");
}

int main(){
    // Variaveis de entrada
    int lado1, lado2, lado3;

    // Cabecalho
    header();

    // Entrada
    printf("Digite o valor dos lados: \n* ");
    scanf("%d", &lado1);

    printf("* ");
    scanf("%d", &lado2);

    printf("* ");
    scanf("%d", &lado3);

    // Variaveis para a verificacao
    int soma12 = lado1+lado2;
    int soma13 = lado1+lado3;
    int soma23 = lado2+lado3;

    // Saida
    if (lado1 < soma23 && lado2 < soma13 && lado3 < soma12){
       printf("\nEh possivel formar um triangulo com os lados %d, %d e %d\n", lado1, lado2, lado3);
    }else {
        printf("\nNAO eh possivel formar um triangulo com os lados %d, %d e %d\n", lado1, lado2, lado3);
    }

    return 0;
}
