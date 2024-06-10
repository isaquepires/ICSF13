#include <stdio.h>
#include <stdlib.h>
#define N 1024

int main ()
{
    int v[N], i, n;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        v[i] = rand()%10;
        printf("%d\n", v[i]);
    }

    printf("\n");

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}
