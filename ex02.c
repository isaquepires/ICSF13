#include <stdio.h>

int main ()
{	
	int n, anterior, atual, i, soma;

	scanf("%d", &n);

	anterior = 0;
	atual = 1;

	printf("%d\n%d\n", anterior, atual);

	for (i = 2; i < n; i++)
	{	
		soma = anterior + atual;
		anterior = atual;
		atual = soma;

		printf("%d\n", soma);
	}

	return 0;
}
