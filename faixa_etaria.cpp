#include <stdio.h>
/*solicita a idade do usuário e classifica-o em CRIANÇA, ADOLESCENTE, ADULTO ou IDOSO
dentro da faixa etária correspondente utilizando-se do comando
IF...ELSE SIMPLES ENCADEADO*/

int main()
{

int idade;
	printf("Digite sua idade atual: ");
	scanf("%d", &idade);

if (idade >=0 && idade < 12)
	printf("\nSua idade pertence a faixa etaria CRIANCAS.");
else
if (idade >= 12 && idade < 19)
	printf("\nSua idade pertence a faixa etaria ADOLESCENTES.");
else
if (idade > 18 && idade <= 64)
	printf("\nSua idade pertence a faixa etaria ADULTOS.");
else
if (idade > 64)
	printf("\nSua idade pertence a faixa etaria IDOSOS.");
else
	printf("\nVoce digitou uma idade invalida! Tente novamente...");
return 0;
}
