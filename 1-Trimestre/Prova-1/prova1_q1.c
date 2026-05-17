/*
Faça um programa na linguagem C que receba como entrada 2 valores inteiros: o primeiro é o valor de horas,
e o segundo é o valor de minutos. O programa deve calcular o valor total passado em minutos.

Importante: Se o segundo valor digitado for maior que 60 minutos, mostre uma mensagem para o usuário
"Valor de minutos incorreto!".

Exemplo: Se o usuário digitar os valores 2 e 15, o programa deve mostrar o valor 135 ((2 * 60) + 15).
*/

#include <stdio.h>

// Cabeçalho
void header(){
    printf("--------------------------------------\n");
    printf("\tCalculadora de Minutos\n");
    printf("--------------------------------------\n\n");
}

int main(){
    // Variaveis
    int valor1, valor2;

    // Cabeçalho
    header();

    // Entrada
    printf("Digite \n* Horas: ");
    scanf("%d", &valor1);
    printf("* Minutos: ");
    scanf("%d", &valor2);

    // Saida
    if (valor2 > 60){
        printf("\nERRO: Valor de minutos incorreto!\n");
    }else {
        printf("\nValor Total (em minutos): %d\n", (valor1*60)+valor2);
    }

    return 0;
}
