#include <stdio.h>

int main()
{
	float a, b, x;

    	printf("Informe um numero real qualquer: ");
    	scanf("%f", &a);

    	printf("Informe outro numero real qualquer: ");
    	scanf("%f", &b);

	x = a + b;
	
	if (x > 10)
	{
	    printf("\nA soma dos dois numeros é %f: ", x);
	}

    return 0;
}
