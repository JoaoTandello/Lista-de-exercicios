#include <stdio.h>

int main() {
    float n1, n2, media;
    printf ("Digite suas 2 notas: \n");
    scanf ("%f %f", &n1, &n2);
    media = (n1+n2)/2;
    if (media>=7) // se a media for maior que 7, o programa ira dar como aprovado
    {
        printf("Aprovado!");
    }
    else // caso contrario, sera dado como reprovado
    {
        printf("Reprovado!");
    }
    
    return 0;
}