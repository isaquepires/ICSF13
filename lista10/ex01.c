#include <stdio.h>
#include <stdlib.h>
#define N 3
#define MIN -40
#define MAX 81

int main ()
{
    float v[N], total, media;
    int i;

    total = 0;
    media = 0;

    for (i = 0; i < N; i++)
    {
        v[i] = MIN + rand() % MAX;
        printf("%f\n", v[i]);

        while (v[i] < 0)
        {
            v[i] = MIN + rand() % MAX;
            printf("%f\n", v[i]);
        }

        total += v[i];
    }

    media = total / N;
    printf("media %f\n", media);

    for (i = 0; i < N; i++)
    {
        v[i] = MIN + rand() % MAX;

        while (v[i] < 0)
            v[i] = MIN + rand() % MAX;

        if (v[i] > media)
            printf("%f eh maior que a media\n", v[i]);
        else if (v[i] < media)
            printf("%f eh menor que a media\n", v[i]);
        else
            printf("%f eh igual que a media\n", v[i]);

    }

    return 0;
}
