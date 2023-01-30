//ALGORITMO PARA CÁLCULO DO VALOR DE DELTA, USADO NA EQUAÇÃO DO SEGUNDO GRAU

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, delta;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    delta = pow(b, 2) - 4 * a * c;
    
    printf("O valor de delta eh: %d", delta);
    
    return 0;
}




