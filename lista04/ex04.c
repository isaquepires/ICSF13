#include <stdio.h>

int main ()
{	
	int anterior, maior_sequencia, numero, tamanho;
	
	scanf("%d", &numero);

	anterior = numero;
	
	tamanho = 1;

	maior_sequencia = tamanho;

	while (numero > 0)
	{
		scanf("%d", &numero);

		if (numero > anterior)
			tamanho++;
		else
			tamanho = 1;
		
		if (maior_sequencia < tamanho)
			maior_sequencia = tamanho;
		
		anterior = numero;
	}

	printf("%d\n", maior_sequencia);

	return 0;
}
