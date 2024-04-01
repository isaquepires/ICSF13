#include <stdio.h>

int main ()
{	
	int elemento, quantidade_elementos;

	scanf("%d", &elemento);

	quantidade_elementos = 1;

	while (elemento > 1)
	{
		if (elemento % 2 == 0)
			elemento /= 2;
		else
                	elemento = elemento * 3 + 1;
         	
		printf("%d\n", elemento);

		quantidade_elementos++;
	}

	printf("\n%d elementos gerados\n", quantidade_elementos);

	return 0;
}
