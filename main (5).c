#include <stdio.h>
#include <locale.h>
int main() {
   setlocale(LC_ALL,"");
  float n1, n2, resultado;
  int operador;
   
   printf ("Escolha a operação\n");
   printf ("1 - Soma\n");
   printf ("2 - Subtração\n");
   printf ("3 - Multiplicação\n");
   printf ("4 - Divisão\n");
   scanf ("%d", &operador);
   
   switch(operador)
  {
      case 1:
      
          printf("Digite o primeiro numero: ");
          scanf("%f", &n1);
          printf("Digite o segundo numero: ");
          scanf("%f", &n2);
          resultado = n1 + n2;
          printf ("O resultado da soma é: %.f", resultado);
          break;
     
     case 2:
     
          printf("Digite o primeiro numero: ");
          scanf("%f", &n1);
          printf("Digite o segundo numero: ");
          scanf("%f", &n2);
          resultado = n1 - n2;
          printf ("O resultado da subtração é: %.f", resultado);
          break;
     
     case 3:     
         
          printf("Digite o primeiro numero: ");
          scanf("%f", &n1);
          printf("Digite o segundo numero: ");
          scanf("%f", &n2);
          resultado = n1 * n2;
          printf ("O resultado da multiplicação é: %.f", resultado);
          break;
          
     case 4:
     
          printf("Digite o primeiro numero: ");
          scanf("%f", &n1);
          printf("Digite o segundo numero: ");
          scanf("%f", &n2);
          resultado = n1 / n2;
          printf ("O resultado da divisão é: %.f", resultado);
          break;
          
  }
  return 0;
}
    
     // utilizei o switch por conta que a resposta muda de acordo com o numero que o utilizador escolheu, entao o case represneta o numero que vem em frente.