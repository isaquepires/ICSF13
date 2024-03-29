#include<stdio.h>

int main ()
{	
	float x, y;

	scanf("%f %f", &x, &y);

	if (x && y)
	{
		if (x > 0)
		{
			if (y > 0)
				printf("Q1\n");
			else
				printf("Q4\n");
		}
		else
		{
			if (y > 0)
				printf("Q2\n");
			else
				printf("Q3\n");
		}
	}
	else
	{
		if (x != 0)
			printf("Eixo x\n");
		else if (y != 0)
			printf("Eixo y\n");
		else
			printf("Origem\n");
	}

	return 0;
}
