/*
ENUNCIADO:
Faça um programa na linguagem C que receba como entrada um valor inteiro que representa a quantidade de alunos dentro
de uma sala. O programa deve mostrar uma das mensagens abaixo:

    * Se o valor digitado for menor ou igual a 10, o programa deve mostrar a frase "Cade a turma?".
    * Se o valor digitado for maior que 10 e menor que 30, o programa deve mostrar a frase "Vamos aguardar mais um pouco.".
    * Se o valor digitado for maior ou igual a 30, o programa deve mostrar a frase "Show! Turma cheia!".
*/

#include <stdio.h>

void header(){
    printf("------------------------------------\n");
    printf("\tVerificacao de Turma\n");
    printf("------------------------------------\n\n");
}

int main(){
    //Cabeçalho
    header();

    //Variáveis
    int alunos;

    //Leitura
    printf("Quantos alunos ha na turma? ");
    scanf("%d", &alunos);

    //Saída
    if(alunos <= 10){
        printf("Cade a turma?\n");
    }else if(alunos > 10 && alunos < 30){
        printf("Vamos aguardar mais um pouco\n");
    }else if(alunos >= 30){
        printf("Show! Turma cheia!\n");
    }

    return 0;
}
