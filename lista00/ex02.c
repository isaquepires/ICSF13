#include<stdio.h>

int main ()
{
	int num, dias, horas, minutos, segundos;

	scanf("%d", &num);

	dias = num / 86400;
	horas = (num % 86400) / 3600;
	minutos = ((num % 86400) % 3600) / 60;
	segundos = ((num % 86400) % 3600) % 60;
	printf("%d\n %d\n %d\n %d\n", dias, horas, minutos, segundos);

	return 0;
}
