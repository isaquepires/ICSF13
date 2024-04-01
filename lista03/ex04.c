#include <stdio.h>

int main ()
{	
	int horas_a, minutos_a, segundos_a, horas_b, minutos_b, segundos_b;

	scanf("%d:%d:%d", &horas_a, &minutos_a, &segundos_a);
	scanf("%d:%d:%d", &horas_b, &minutos_b, &segundos_b);

	if (segundos_a >= 60 || segundos_b >= 60 || minutos_a >= 60 || minutos_b >= 60 ||
segundos_a < 0 || segundos_b < 0 || minutos_a < 0 || minutos_b < 0 || horas_a < 0 || horas_b < 0)
	{
		printf ("Entrada inválida!\n");
		return (1);
	}

	segundos_a += segundos_b;
	if (segundos_a >= 60)
	{
		segundos_a -= 60;
		minutos_a++;
	}
	
	minutos_a += minutos_b;
	if (minutos_a >= 60)
	{
		minutos_a -= 60;
		horas_a++;
	}
	horas_a += horas_b;

	printf ("%d:%d:%d\n", horas_a, minutos_a, segundos_a);	

	return 0;
}
