#include <stdio.h>

int proxFibonacci (int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", proxFibonacci(n));

    return 0;
}

int proxFibonacci (int n)
{
	int anterior, atual, i, soma;

	anterior = 0;
	atual = 1;

	for (i = 2; atual < n; i++)
	{
		soma = anterior + atual;
		anterior = atual;
		atual = soma;
	}

	return atual;
}
