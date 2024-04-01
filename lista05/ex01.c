#include <stdio.h>
#define MILHAO 1000000

int main ()
{
	int quantidade_dias, acessos, i, dias, total, meta;
	
	meta = 0;

	scanf("%d", &quantidade_dias);

	dias = -1;

	for (i = 0; i < quantidade_dias; i++)
	{
		scanf("%d", &acessos);

		total += acessos;

		if (total >= MILHAO && !meta)
		{
			meta = 1;
			dias = i + 1;
		}
	}


	printf("%d\n", dias);
	
	return 0;
}
