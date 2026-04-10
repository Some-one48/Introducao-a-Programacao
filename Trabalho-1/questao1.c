#include <stdio.h>

void welcome(){
    printf("--------------------------\n");
    printf("\tBem-vindo!\n");
    printf("--------------------------\n\n");
}

int main(){
    //Cabeçalho
    welcome();

    //Declaração de Variáveis
    float preco1, preco2, desconto;
    //Leitura dos dados
    printf("Digite o preco do primeiro produto: ");
    scanf("%f", &preco1);
    printf("Digite o preco do segundo produto: ");
    scanf("%f", &preco2);
    printf("Digite o valor do desconto: ");
    scanf("%f", &desconto);

    //Saída
    printf("\nValor total da compra: %.2f\n", preco1+preco2-desconto);

    return 0;
}