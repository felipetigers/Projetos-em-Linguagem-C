#include <stdio.h>

int main()
{
    float velocidade, distancia, tempo;
    
    printf("Informe a distancia percorrida pelo projétil, em km: ");
    scanf("%f", &distancia);
    
    printf("Informe o tempo gasto pelo projétil, em minutos: ");
    scanf("%f", &tempo);
    
    velocidade = (distancia * 1000)/(tempo * 60);
    
    printf("A velocidade percorrida pelo projétil foi de %.2f m/s: ", velocidade);
    
    return 0;
}

