#include <stdio.h>

void header(){
    printf("------------------------------------\n");
    printf("\tVerificacao de Turma\n");
    printf("------------------------------------\n\n");
}

int main(){
    //Variáveis
    int alunos;

    header();
    
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