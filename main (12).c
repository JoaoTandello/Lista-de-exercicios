#include <stdio.h>

int main() {
    int valores[10];
    int contador;

    printf("Digite 10 valores:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("\nNumeros pares encontrados:\n");
    for (int i = 0; i < 10; i++) {
        if (valores[i] % 2 == 0) {
            printf("%d ", valores[i]);
            contador++;
        }
    }


    printf("\nQuantidade de numeros pares: %d\n", contador);

    return 0;
}