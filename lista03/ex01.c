#include <stdio.h>

int main ()
{	
	int i, milhar_centena, dezena_unidade, soma;

   	 for (i = 1000; i < 9999; i++)
    	{
        	milhar_centena = i / 100;
        	dezena_unidade = i % 100;
        	soma = milhar_centena += dezena_unidade;
        	
		if (soma * soma == i)
            		printf("%d\n", i);

    	}

	return 0;
}
