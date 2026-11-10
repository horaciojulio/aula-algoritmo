#include <stdio.h>

void exibirNota(float nota[], int tamanho)
{
    int i;
    
    for (i=0; i<tamanho; i++){
        printf("%f ", vetor[i]);
    }
    printf("\n");
}

void BubbleSort(float nota[], int tamanho)
{
    int i, j, auxiliar;
    
    for (i = 0; i<tamanho -1; i++){
        
        for(j=0; j<tamanho; j++){
            if (nota[j]>nota[j+1]){
                auxiliar = nota[j];
                nota[j] = nota[j+1];
                nota[j+1] = auxiliar;
            }
        }
    }
}




/*-------------------------------------------------------------------------------------------*/
int main(void)
{
    int notas[5]={6.5, 9.0, 7.5, 5.3, 8.0};
    int tamanho = 5;
    
    printf("senha antes: \n");
    exibirNota(notas, tamanho);
    
    printf("senha depois da ordenação: \n");
    BubbleSort(notas, tamanho);
    exibirNota(notas, tamanho);
    
}