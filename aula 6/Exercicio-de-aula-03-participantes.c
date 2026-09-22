
#include <stdio.h>

int main(){
    int participantes;

       do{
          printf("digite o numero de participantes: ");
          scanf("%d", &participantes);
       }
       
       while(participantes <1 || participantes > 3);{
          printf("Equipe registrada");
       }
       
       
 
    return 0;
}
