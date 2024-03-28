#include <stdio.h>

int main ()
{	
	float nota, i, total, maior_nota, menor_nota;

    	scanf("%f", &nota);
    	maior_nota = nota;
    	menor_nota = nota;
    	total += nota;

    	for (i = 1; i < 6; i++)
    	{
        	scanf("%f", &nota);

        	if (nota > maior_nota)
            		maior_nota = nota;

        	if (nota < menor_nota)
            		menor_nota = nota;

        	total += nota;
    	}

    	total -= maior_nota;
    	total -= menor_nota;

    	printf("%.2f\n", total/4);

	return 0;
}
