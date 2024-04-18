#include <stdio.h>

int arredonda (double x)
{
    if (x >= 0)
        return ((int) (x + 0.5));

    return ((int) (x - 0.5));
}

int main()
{
    double x;

    scanf("%lf", &x);

    printf("%d\n", arredonda(x));

    return 0;
}
