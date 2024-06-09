#include <stdio.h>
#include <stdlib.h>
#define N 3
#define MIN 20
#define MAX 61

int main ()
{
    int v[N], i, total, media, maiores, menores, iguais;

    total = 0;
    media = 0;
    maiores = 0;
    menores = 0;
    iguais = 0;

    for (i = 0; i < N; i++)
    {
        v[i] = MIN + rand() % MAX;
        total += v[i];
    }

    media = total / N;

    for (i = 0; i < N; i++)
    {
        v[i] = MIN + rand() % MAX;

        if (v[i] > media)
            maiores++;
        else if (v[i] < media)
            menores++;
    }

    printf("media: %d\n", media);
    printf("maiores: %d\n", maiores);
    printf("menores: %d\n", menores);

    return 0;
}



