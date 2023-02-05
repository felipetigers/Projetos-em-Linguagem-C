#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
	float raio, volume;

    printf("Informe o valor do raio, em cm: ");
    scanf("%f", &raio);

	volume = (4 * PI * pow(raio, 3)) / 3;	

	printf("O volume da esfera eh: %.3f metros cúbicos.", volume);
	
    return 0;
}


