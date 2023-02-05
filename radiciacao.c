#include <stdio.h>
#include <math.h>

int main()
{
    float base;
    double raiz;
    
    printf("Informe o valor da base: ");
    scanf("%f", &base);
    
    raiz = sqrt(base); 
    
    printf("A raiz quadrada de %.1f eh %.1f ", base, raiz);
    
    return 0;
}

