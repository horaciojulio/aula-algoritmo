#include <stdio.h>

int main()
{
    float media, frequencia;
    
    
    printf("Digite sua frequencia: ");
    scanf ("%f", &frequencia);
    
    printf("Digite sua media: ");
    scanf ("%f", &media );
    
    
    
    if (frequencia<75){
        printf("Reprovado por faltas. \n");
    }
    else{
        if (media>=6){
            printf("Você foi aprovado!!! \n");
        }
        else{
            printf("Reprovado por média :( \n");
        }
    }
        


    return 0;
}