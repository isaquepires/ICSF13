#include<stdio.h>

int main ()
{
	float num, media, total;
	int i;
	
	total = 0;

	scanf("%f", &num);
	total += num;
	i++;

	for (i = 2; i < 6; i++)
	{
		scanf("%f", &num);
		total += num;
		media = total / i;
		printf("%.1f\n", media);
		
	}
	
	return 0;
}
