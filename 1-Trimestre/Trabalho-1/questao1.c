/*
ENUNCIADO:
Faça um programa na linguagem C que receba como entrada 3 valores reais: o preço de 2 produtos e um valor de desconto.
O programa deve mostrar o valor final da compra (soma do valor dos 2 produtos, subtraindo o desconto).

Exemplo: Se o usuário digitar os preços 10.50 e 5.00 e o desconto de 2.00, o programa deve mostrar o valor final
de 13.50 (10.50 + 5.00 - 2.00).
*/

#include <stdio.h>

void header(){
    printf("----------------------------\n");
    printf("\tCaixa Rapido\n");
    printf("----------------------------\n\n");
}

int main(){
    //Cabeçalho
    header();

    //Declaração de Variáveis
    float preco1, preco2, desconto;

    //Leitura dos dados
    printf("Digite o preco do 1o produto: ");
    scanf("%f", &preco1);

    printf("Digite o preco do 2o produto: ");
    scanf("%f", &preco2);

    printf("Digite o valor do desconto: ");
    scanf("%f", &desconto);

    //Saída
    printf("\nValor total da compra: %.2f\n", preco1+preco2-desconto);

    return 0;
}
