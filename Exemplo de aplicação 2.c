/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
        float preco, total;
        int quantidade;
        
        printf("Digite a quantidade de cafés: ");
        scanf("%d",&quantidade);
        printf("Digite o preço do café: ");
        scanf("%f",&preco);
        
        total = preco*quantidade;
        
        printf("O valor total da conta é R$ %.2F.", total);
        
        
        
        return 0;
}