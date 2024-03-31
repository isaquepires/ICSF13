#include <stdio.h>

int main ()
{
	int numero, unidade, dezena, centena, oremun, soma, verificador;

	scanf("%d", &numero);

	unidade = numero % 10;
	dezena = (numero % 100) / 10;
	centena = numero / 100;

	oremun = (unidade * 100) + (dezena * 10) + centena;

	soma = numero + oremun;

	if (soma >= 1000)
		soma = soma % 1000;
	
	unidade = soma % 10;
	dezena = (soma % 100) / 10;
	centena = soma / 100;

	soma = (centena * 1) + (dezena * 2) + (unidade * 3);

	verificador = soma % 10;

	printf("%d\n", verificador);

	return 0;
}
