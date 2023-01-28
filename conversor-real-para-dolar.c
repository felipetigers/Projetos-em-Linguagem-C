//algoritmo para converter graus Celsius em Fahrenheit

#include <stdio.h>

int main()
{
    float c, f;
    
    printf("Informe a temperatura em graus Celsius: ");
    scanf("%f", &c);
    
    f = (9 * c + 160) / 5;
    
    /*
    Pode-se usar essa outra fórmula para
    obter o mesmo resultado: f = c * 9 / 5 + 32;
    */
    
    printf("%.2f graus Celsius equivale a %.2f graus Fahrenheit.", c, f);

    return 0;
}



