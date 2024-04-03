#include <stdio.h>
#define MIN_TERMO 0.2

int main ()
{
	float termo, soma;
	int i;

	soma = 1.0;

	termo = 1.0;

	for (i = 2; termo >= MIN_TERMO; i++)
	{
		printf("%f %f\n", termo, soma);
		termo = 1.0 / i;
		soma += termo;
	}

	return 0;
}
