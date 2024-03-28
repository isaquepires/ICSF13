#include <stdio.h>
#define N 10

int main ()
{
	int num, i, total, media;
    	
	total = 0;

    	for(i = 0; i < N; i++)
    	{
        	scanf("%d", &num);
        	if (num < 20)
            		total += num;
    	}	

	media = total / N;

    	printf("%d\n", media);

	return 0;
}
