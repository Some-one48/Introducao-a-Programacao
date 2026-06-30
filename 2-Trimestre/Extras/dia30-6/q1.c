/*
    Faça um programa na linguagem C que calcule a área de 3 figuras geométricas
    diferentes: um quadrado, um triângulo e um círculo. O programa deve perguntar
    ao usuário qual figura ele quer calcular a área, e em seguida vai pedir as
    informações específicas da figura escolhida, conforme abaixo:

        *Se o usuário escolher um quadrado, o programa deve pedir o valor do lado.
        *Se o usuário escolher um triângulo, o programa deve pedir os valores de base e altura.
        *Se o usuário escolher um círculo, o programa deve pedir o valor do raio.
    Após calcular a área da figura, o programa deve mostrar a informação para o usuário
    com uma frase parecida com "A área do quadrado é 10.0", e perguntar se ele quer calcular
    outra figura. O programa só finaliza quando o usuário não quiser mais calcular áreas de figuras.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void header() {
    printf("------------------------------------\n");
    printf("\tCalculadora de Areas\n");
    printf("------------------------------------\n\n");
}

void programa(int answer, float info[2], int continuar){
    system("cls");
    header();
    printf("Qual figura deseja calcular?\n1 - Quadrado\n2 - Triangulo\n3 - Circulo\n\n");
    scanf("%d", &answer);

    system("cls");

    if (answer == 1){
        header();
        printf("Digite a medida do lado do quadrado: ");
        scanf("%f", &info[0]);
        printf("\nA area do quadrado eh %.1f", info[0]*info[0]);

        printf("\nDeseja continuar?(1-s/0-n)\n");
        scanf("%d", &continuar);

        if (continuar == 1){
            programa(answer, info, continuar);
        }else {
            printf("\nFinalizando o programa...");
        }
    }else if (answer == 2){
        header();
        printf("Digite a medida da base do triangulo: ");
        scanf("%f", &info[0]);
        printf("Agora, digite a medida da altura do triangulo: ");
        scanf("%f", &info[1]);
        printf("\nA area do triangulo eh %.1f\n", (info[0]*info[1])/2);

        printf("\nDeseja continuar?(1-s/0-n)\n");
        scanf("%d", &continuar);

        if (continuar == 1){
            programa(answer, info, continuar);
        }else {
            printf("\nFinalizando o programa...");
        }
    }else if (answer == 3){
        header();
        printf("Digite a medida do raio do circulo: ");
        scanf("%f", &info[0]);
        printf("\nA area do circulo eh %.1f\n", info[0]*info[0]*3.14);

        printf("\nDeseja continuar?(1-s/0-n)\n");
        scanf("%d", &continuar);

        if (continuar == 1){
            programa(answer, info, continuar);
        }else {
            printf("\nFinalizando o programa...");
        }
    }else {
        header();
        printf("\nERRO: Digite um valor valido (1 a 3)");
        programa (answer, info, continuar);
    }
}

int main(){
    int answer, continuar;
    float info[2];

    programa(answer, info, continuar);

    return 0;
}
