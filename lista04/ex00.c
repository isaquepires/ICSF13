#include <stdio.h>

int main ()
{	
	int num, fat, i;

	fat = 1;

	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		fat *= i;

	printf("%d\n", fat);

	return 0;
}
