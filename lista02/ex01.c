#include <stdio.h>

int main ()
{
	int dia_nasc, mes_nasc, ano_nasc,
	dia_atual, mes_atual, ano_atual, idade;

	scanf("%d %d %d %d %d %d", &dia_nasc, &mes_nasc, &ano_nasc, &dia_atual, &mes_atual, &ano_atual);
	
	idade = ano_atual - ano_nasc;

	if (mes_atual < mes_nasc || mes_atual == mes_nasc && dia_atual < dia_nasc)
		idade = idade - 1;
		
	printf("%d\n", idade);

	return 0;
}
