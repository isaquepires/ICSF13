#include <stdio.h>

int main ()
{
	int n, soma, i;

	scanf("%d", &n);

	soma = 0;

	for (i = 1; i < n; i++)
		if (n % i == 0)
			soma += i;
	
	if (soma == n)
		printf("Perfeito\n");
	else
		printf("Imperfeito\n");
	
	return 0;
}
