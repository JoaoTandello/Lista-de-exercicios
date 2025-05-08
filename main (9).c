#include <stdlib.h>
#include<locale.h>
#include <stdio.h>
int main(){
    setlocale(LC_ALL,"");
    
    int i, n, res=1;
    
    printf("Inisira o número que deseja calcular o fatorial:\n");
    scanf("%d", &n);
    
    //Apagar informações
    system ("clear");
    
    for (i=1; i<=n; i++){
        res= res*i;
    }
    
  
     printf ("O fatorial é : %d", res); 
     
    return 0;
}