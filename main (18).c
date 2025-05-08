#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char nome[20];
    int idade;
    float media;
}P;

 int main() {
    setlocale (LC_ALL, "");
    
    

    P alunos [3]={{"Mirella", 16, 9.5},
                  {"João", 18, 9.3},
                  {"Gabriela", 12, 6.5},
    };
    char nome[20];
   
    printf("Informe o nome do Aluno que deseja:\n");
    scanf("%s", nome);
       
    if (nome==alunos[0].nome){
        printf("Nome:%s\n", alunos[0].nome);
        printf("Idade:%d\n", alunos[0].idade);
        printf("Nome:%.1f\n", alunos[0].media);
    }
    else if (nome==alunos[1].nome){
        printf("Nome:%s\n", alunos[1].nome);
        printf("Idade:%d\n", alunos[1].idade);
        printf("Nome:%.1f\n", alunos[1].media);
    }
     else if (nome==alunos[2].nome){
        printf("Nome:%s\n", alunos[2].nome);
        printf("Idade:%d\n", alunos[2].idade);
        printf("Nome:%.1f\n", alunos[2].media);
    }
     else{
         printf("Aluno não encontrado!");
     }
    
    return 0;
 }