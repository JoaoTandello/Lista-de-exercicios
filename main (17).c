
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    
    typedef struct{
        char nome[50];
        float nota[3];
    }aluno;
    
    int main() {
    setlocale (LC_ALL, "");
    
    float media;
    aluno notas;
    int i;
    char *aprovacao;
    
    printf("Informe o nome do aluno:\n");
    scanf("%[^\n]", notas.nome);
    getchar ();
    system("clear");
    
    for (i=0; i<3; i++){
        printf("Informe a nota %d do aluno:\n", i+1);
        scanf("%f", &notas.nota[i]);
        getchar();
        system ("clear");
    }
    
    for (i=0; i<3; i++){
    media= (media+ notas.nota[i])/3;
    }
    
    if(media>=7){
        aprovacao= "Aprovado!!";
    }
    else{
        aprovacao= "Reprovado!!";
    }
    
    printf("Média: %.1f\n", media);
    printf("Status:%s\n", aprovacao);
    
    return 0;
    }
    
    
    
    
    