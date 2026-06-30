/*
    Faça um programa na linguagem C que tenta adivinhar um número que o usuário pensou.
    O programa deve pedir ao usuário para ele pensar em um número entre 1 e 10, mas
    sem digitar esse número. Quando o usuário informar ao programa que ele já escolheu
    um número (digitando a palavra "Sim", por exemplo), o programa vai tentar adivinhar
    qual foi o número chutando valores e perguntando ao usuário se o número escolhido é
    menor ou maior do que o valor que o programa "chutou".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void header() {
    printf("------------------------------------\n");
    printf("\tCalculadora de Areas\n");
    printf("------------------------------------\n\n");
}

int main(){
    char answer[3];
    int aux;
    printf("Pense em um numero inteiro de 1 a 10\n\n");

    printf("Esse numero eh maior do que 5? ");
    gets(answer);

    if (strcmp(answer, "sim") == 0 || strcmp(answer, "Sim") == 0){
        for (int i = 0; i < 5; i++){
            aux = 6 + i;
            printf("Esse numero eh %d? ", aux);
            gets(answer);
            if (strcmp(answer, "sim") == 0 || strcmp(answer, "Sim") == 0){
                printf("\nUhull!!");
                break;
            }
        }
    }else{
        for (int i = 0; i < 5; i++){
            aux = 5 - i;
            printf("Esse numero eh %d? ", aux);
            gets(answer);
            if (strcmp(answer, "sim") == 0 || strcmp(answer, "Sim") == 0){
                printf("\nUhull!!");
                break;
            }
        }
    }

    return 0;
}
