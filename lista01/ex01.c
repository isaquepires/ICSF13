#include<stdio.h>

int main ()
{
	int numero, unidade, dezena, centena, resposta;

    	scanf("%d", &numero);

    	// isolando casas numéricas
    	unidade = numero % 10;
    	dezena = (numero % 100)/10;
    	centena = numero / 100;

    	resposta = unidade * 100 + dezena * 10 + centena;
    	printf("%d\n", resposta);
	
	return 0;
}
