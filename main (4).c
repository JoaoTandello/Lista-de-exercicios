#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua idade?\n");
    scanf("%d", &idade);
    if (idade>=18 && idade<=69)
    {
        printf("Seu voto é obrigatório.");
    }
    else if (idade<16)
    {
        printf("Não pode votar.");
    }
    else
    {
        printf("Voto opcional.");
    }
    return 0;
}
    
    // o programa irá ler a idade. E usando o if e o else, ele era ver se a pessoa podera ou nao votar, alem do voto facultativo