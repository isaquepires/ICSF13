#include<stdio.h>

int main ()
{
	int hora_inicial, hora_final, horas_jogadas;

    	scanf("%d %d", &hora_inicial, &hora_final);

	if (hora_final <= hora_inicial)
		hora_final += 24;
	
	horas_jogadas = hora_final - hora_inicial;
	
	printf("%d\n", horas_jogadas);

	return 0;
}
