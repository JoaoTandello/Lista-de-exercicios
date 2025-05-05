#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    setlocale(LC_ALL,"");
    int n, i, tabuada,opcao;
    do {
    printf("Digite o número da respectiva tabuada: \n");
    scanf("%d", &n);
    
    printf("O numero escolhido foi %d\n", n);
    for(i=0;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,tabuada = n *i);
    }
    printf("Digite 1 para continuar e 0 para sair");
    scanf("%d", &opcao);
    system("clear");
    }while(opcao==1);
return 0;    
}