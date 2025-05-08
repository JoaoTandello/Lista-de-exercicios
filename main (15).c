#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct{
    char nome[20];
    float preco;
    int quantidade;
}Carrinho;

 int main() {
    setlocale (LC_ALL, "");
    
    int i;
    float total[5];
    Carrinho produtos[5];
    
   
    for (i=0; i<5; i++){
        printf("Informe o nome do produto %d:\n", i+ 1);
        scanf("%s", produtos[i].nome);
        printf("Informe o preco do produto %d:\n", i+ 1);
        scanf("%f", &produtos[i].preco);
        printf("Informe a quantidade do produto %d:\n", i+ 1);
        scanf("%d", &produtos[i].quantidade);
        getchar ();
        system ("clear");
    }
    
   
     for(i=0; i<5; i++){
        total[i]= produtos[i].preco * produtos[i].quantidade;
     }
   
    for(i=0; i<5; i++){
    printf("%s: R$ %.2f\n", produtos[i].nome, total[i]);
    }
    
    return 0;
 }
    