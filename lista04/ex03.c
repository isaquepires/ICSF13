#include <stdio.h>

int main ()
{
	int numero, digito, achou;

	scanf("%d", &numero);
	scanf("%d", &digito);

	achou = 0;

	while (numero > 0 && !achou)
	{
		if (numero % 10 == digito)
			achou = 1;

		numero /= 10;
	}	
	
	if (achou)
		printf("presente\n");
	else
		printf("ausente\n");

	return 0;
}	
