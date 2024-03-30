#include<stdio.h>

int main ()
{

	// Desafio da lista 01 exercicio 03

	int hora_inicial, minuto_inicial, hora_final, minuto_final, horas_jogadas, minutos_jogados;

    	scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

	if (hora_final <= hora_inicial)
		hora_final += 24;
	
	horas_jogadas = hora_final - hora_inicial;
	
	if (minuto_inicial > minuto_final)
	{
		horas_jogadas -= 1;
		minuto_final += 60;
	}

	minutos_jogados = minuto_final - minuto_inicial;
	
	printf("%d %d\n", horas_jogadas, minutos_jogados);

	return 0;
}
