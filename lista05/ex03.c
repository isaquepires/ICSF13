#include <stdio.h>

int main ()
{
	int n, i, numero_anterior, numero_atual, numero_posterior, soma, picos;

	scanf("%d", &n);

	scanf("%d", &numero_anterior);

	scanf("%d", &numero_atual);

	picos = 0;

	for (i = 2; i < n; i++)
	{
		
		scanf("%d", &numero_posterior);

		if (numero_atual < numero_anterior && numero_atual < numero_posterior)
			picos = 1;

		numero_anterior = numero_atual;

		numero_atual = numero_posterior;

	}

	if (picos)
		printf("N\n");
	else
		printf("S\n");
	
	return 0;
}
