#include <stdio.h>

void header(){
    printf("---------------------------------------\n");
    printf("\tQual Inteiro eh Maior?\n");
    printf("---------------------------------------\n\n");
}

int main(){
    header();

    int valor1, valor2, valor3;

    // Leitura
    printf("Digite 3 inteiros:\n* ");
    scanf("%d", &valor1);
    printf("* ");
    scanf("%d", &valor2);
    printf("* ");
    scanf("%d", &valor3);

    system("cls");

    // Saída
    header();
    printf("Dentre (%d, %d, %d), o maior eh ", valor1, valor2, valor3);
    if (valor1 > valor2 && valor1 > valor3){
        printf("%d\n", valor1);
    }else if (valor2 > valor1 && valor2 > valor3){
        printf("%d\n", valor2);
    }else {
        printf("%d\n", valor3);
    }

    return 0;
}