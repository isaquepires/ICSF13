#include<stdio.h>

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
            consecutivos++;
        else
            consecutivos = 1;

        if (consecutivos > maior_sequencia)
            maior_sequencia = consecutivos;

        valor_anterior = valor;
    }

    printf("maior sequencia: %d\n", maior_sequencia);

    return 0;
}
