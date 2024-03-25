#include <stdio.h>
#include <math.h>

int main ()
{
	int raio;
	float volume;

	scanf("%d", &raio);

	volume =  (4.0/3.0) * M_PI * pow(raio, 3);

	printf("%f\n", volume);

	return 0;
}
