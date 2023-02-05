/******************************************************************************
2.Realizar a adição desses numeros, com a seguinte condicao:
    2.1 se a soma for >=10, somar 5 ao resultado
    2.2 se a soma for >10, subtrair 7 do resultado
3.Mostrar o resultado
*******************************************************************************/
#include <stdio.h>

int main()
{
    float a, b, soma, resultado;
    
    printf("Informe um numero real qualquer: ");
    scanf("%f", &a);
    
    printf("Informe um numero real qualquer: ");
    scanf("%f", &b);
    
    soma = a + b;
    
    if (soma >= 10){
        resultado = soma + 5;
    } else {
        resultado = soma - 7;
    }
        
    printf("\nResultado: %f", resultado);

    return 0;
}
