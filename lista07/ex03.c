#include <stdio.h>#include <stdio.h>

unsigned long long potencia (unsigned int base, unsigned int expoente);

int main()
{
    int base, expoente;

    scanf("%d %d", &base, &expoente);

    printf("%d\n", potencia(base, expoente));

    return 0;
}

unsigned long long potencia (unsigned int base, unsigned int expoente)
{
    int i;
    unsigned long long total = 1;

    for (i = 0; i < expoente; i++)
    {
        total *= base;
    }

    return total;
}
