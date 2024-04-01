#include <stdio.h>

int main ()
{	
	int valor_inicial, valor, cedula, i, qtde;

	cedula = 200;
	
	scanf("%d", &valor_inicial);

	valor = valor_inicial;

	for (i = 1; i <= 7; i++)
	{
  // Quando i for 3 ou 6, o valor contido em cedula será dividido por 2.5 para formar valores como 20 a partir de 50 e 2 a partir de 5
		if (i % 3 == 0)
			cedula /= 2.5;
		else
			cedula /= 2;

		qtde = valor / cedula;

		if (valor / cedula)
			valor = valor % cedula;

		if (qtde != 0)
			printf("%d notas de %d\n", qtde, cedula);
	}
	
	return 0;
}
