
#include <stdio.h>

int main(){
    int numero;
    int contador;
    
    
    printf("Digite qual numero você quer ver a tabuada ");
    scanf("%d",&numero);
    
    for(contador=1;contador<=10;contador++){
        
        printf("%d X %d = %d \n", numero, contador,
        numero*contador);
    }
    
    
    
    return 0;
}
