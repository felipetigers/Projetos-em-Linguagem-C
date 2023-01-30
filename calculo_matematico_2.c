#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, x;
    
    printf("Informe o valor de A: ");
    scanf("%d", &a);
    
    printf("Informe o valor de B: ");
    scanf("%d", &b);
    
    x = pow((a - b), 2);
    
    printf("O resultado eh: %d", x);

    return 0;
}


