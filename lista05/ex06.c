#include<stdio.h>

// 2 3 3 3 2 1

int main()
{
    int n, i, valor, sequencia, consecutivos, valor_anterior, maior_sequencia;

    consecutivos = 1;

    scanf("%d", &n);

    scanf("%d", &valor);

    valor_anterior = valor;

    maior_sequencia = consecutivos;

    for (i = 1; i < n; i++)
    {
        scanf("%d", &valor);

        if (valor == valor_anterior)
        {
            consecutivos++;
        }
        else
            consecutivos = 1;

        if (consecutivos > maior_sequencia)
            maior_sequencia = consecutivos;

        printf("consec: %d\n", maior_sequencia);

        valor_anterior = valor;

    }

    printf("%d\n", maior_sequencia);

    return 0;
}
