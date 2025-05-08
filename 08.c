#include <stdlib.h>
#include<locale.h>
#include <stdio.h>
int main(){
    setlocale(LC_ALL,"");
    
    int i, res=0;  //Declaração de variavel
    
    //Processar os 200 números
    for (i=1; i<=200; i++){
        //Se número é par somar ele
        if(i%2==0){
            res= res+i;
        }
    }
    
    //Aparecer resultado
     printf ("A soma dos primeiros 100 números pares é : %d", res);
     
    
    return 0;
}