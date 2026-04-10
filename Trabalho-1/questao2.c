#include <stdio.h>

int main(){
    //Variáveis
    int alunos;

    //Leitura 
    printf("Quantos alunos ha na turma? ");
    scanf("%d", &alunos);

    //Condicionais
    if(alunos <= 10){
        printf("Cade a turma?\n");
    }else if(alunos > 10 && alunos < 30){
        printf("Vamos aguardar mais um pouco\n");
    }else if(alunos >= 30){
        printf("Show! Turma cheia!\n");
    }

    return 0;
}