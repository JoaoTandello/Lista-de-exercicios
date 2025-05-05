#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    int numero;
    printf("Digite o numero:\n");
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        printf("Seu número é Par!\n");
    }
    else
    {
        printf("Seu número é impar!\n");
    }
    return 0;
}