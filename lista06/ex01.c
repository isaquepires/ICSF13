#include<stdio.h>
#define N 30

int main()
{
    int numero, divisor, soma, quant_primos, flag_primo;

	quant_primos = 1;

	numero = 3;

	soma = 2;

	printf("2\n");

    while (quant_primos < N)
	{
		flag_primo = 1;

		for (divisor = 3; divisor < numero; divisor+=2)
			if (numero % divisor == 0)
				flag_primo = 0;

		if (flag_primo)
		{
			soma += numero;
			quant_primos++;
			printf("%d\n", numero);
		}

		numero += 2;
	}

	printf("SOMA: %d", soma);

    return 0;
}
