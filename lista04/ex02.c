#include <stdio.h>

int main ()
{
	int n1, n2, quociente, resto;

	scanf("%d %d", &n1, &n2);

	for (quociente = 0; n1 >= n2; quociente++)
		n1 -= n2;
	
	resto = n1;
	printf("%d %d\n", quociente, resto);

	return 0;
}
