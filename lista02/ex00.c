#include <stdio.h>

int main ()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
		if (b > c)
			printf("%d %d %d\n", c, b, a);
		else if (c > a)
			printf("%d %d %d\n", b, a, c);
		else
			printf("%d %d %d\n", b, c, a);
	else if (b > a)
		if (a > c)
			printf("%d %d %d\n", c, a, b);
		else if (c > b)
			printf("%d %d %d\n", a, b, c);
		else
			printf("%d %d %d\n", a, c, b);	

	return 0;
}
