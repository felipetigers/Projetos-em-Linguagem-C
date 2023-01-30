
#include <stdio.h>

int main()
{
    int a, b, x;
    
    printf("Digite um valor pra A: ");
    scanf("%d", &a);
    
    printf("Digite um valor pra B: ");
    scanf("%d", &b);
    
    x = a; //100
    a = b; //50
    b = x; //100
    
    printf("O valor de A eh %d e o valor de b eh %d", a, b);
    
    return 0;
}


