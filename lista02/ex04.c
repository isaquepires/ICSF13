#include <stdio.h>

int main ()
{
	int l1, l2, l3;

	scanf("%d %d %d", &l1, &l2, &l3);

	if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2)
	{
		if (l1 == l2 && l2 == l3)
			printf("Equilatero\n");
		else if (l1 == l2 || l2 == l3 || l1 == l3)
			printf("Isosceles\n");
		else
			printf("Escaleno\n");
	}	

	return 0;
}
