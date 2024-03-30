#include <stdio.h>

int main ()
{
	int n, valor_atual, valor_anterior, i, flag_crescente, flag_decrescente;
	
	scanf("%d", &n);

	scanf("%d", &valor_atual);

	valor_anterior = valor_atual;
	
	flag_crescente = 1;

	flag_decrescente = 1;

	for (i = 1; i < n; i++)
	{
		scanf("%d", &valor_atual);
		
		if (valor_atual < valor_anterior)
			flag_crescente = 0;
		else if (valor_atual > valor_anterior)
			flag_decrescente = 0;

		valor_anterior = valor_atual;
	}


	if (flag_decrescente && (!flag_crescente))
		printf("decrescente\n");
	else if (flag_crescente && (!flag_decrescente))
		printf("crescente\n");
	else
		printf("Nenhum dos dois\n");

	return 0;
}
