
#include <stdio.h>

int main(){
    int pontuacao;
    int total=0;
    int rodada=1;
    
   while(rodada <=3 ){
       printf("Digite a pontuaçao da rodada %d: ", rodada);
       scanf("%d", &pontuacao);
       
       rodada++;
       total = total + pontuacao;
   }
    
    printf("O valor total foi de : %d", total);
    
    return 0;
}
