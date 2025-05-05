#include <stdio.h>
int main(){

    float n1, n2, maior;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    if (n1 == n2) // se digitarem o mesmo numero
    {
    printf("Os números são iguais!\n");
    } else // se digitarem numeros diferentes 
    {
    maior = n1;
    if (n2 > maior)
    {
    maior = n2;
    }

    printf("O maior número é: %.f\n", maior);
    }
    return 0;
}