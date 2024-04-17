#include<stdio.h>
#include<math.h>

int selecionar(int numero, int posicao)
{
    int divisor = pow(10, posicao - 1);

    return (numero / divisor) % 10;
}

int main ()
{
    int numero, casas, ordem, oremun, algarismo;

    scanf("%d", &numero);

    oremun = 0;
    casas = numero;

    for (ordem = 0; casas > 0; ordem++)
    {
        printf("ordem: %d casas: %d\n", ordem, casas);
        casas /= 10;
    }

    casas = ordem - 1;

    while (ordem >= 0)
    {
        algarismo = selecionar(numero, ordem + 1);
        algarismo *= pow(10, casas - ordem);
        oremun += algarismo;
        ordem--;
    }

    if (numero == oremun)
        printf("Palindromo\n");

    return 0;
}
