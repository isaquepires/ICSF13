#include <stdio.h>

unsigned int inverteNum (unsigned int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", inverteNum(n));

    return 0;
}

unsigned int inverteNum (unsigned int n)
{
    int invertido = 0;

    while (n > 0)
    {
        invertido = invertido*10 + n%10;
        n /= 10;
    }
    return (invertido);
}
