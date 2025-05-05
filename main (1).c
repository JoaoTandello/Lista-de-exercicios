#include <stdio.h>

int main () {
    int n; // declara uma variável inteira
    
    printf("Digite o numero:\n"); // exibe a mensagem pedindo o número
    scanf("%d", &n); // guarda a variavel
    
    if (n % 2 == 0) //pra ver se o numero é par ou impar
    {
        printf("Seu número é par!\n");
    }
    else //caso não seja par
    {
        printf("Seu número é impar!\n");
    }
    
    return 0; //comando que finaliza a função main
}