/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define PI 3.14


int main()
{
        float raio, area;
        printf("Digite o raio: ");
        scanf("%f", &raio);
        area = PI * raio * raio;
        printf ("Área = %.2f\n", area);
    return 0;
}