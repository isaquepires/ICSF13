#include <stdio.h>

void removeExtremos (int *n, int *pri, int *ult)
{
    int tn, pot = 1;

    tn = *n;
    while(tn >= 10)
    {
        tn = tn/10;
        pot *= 10;
    }

    *pri = *n / pot;
    *ult = *n % 10;
    *n = *n % pot;
    *n = *n / 10;
}

int main ()
{
    int numero, primeiro, ultimo, flag_palindromo;

    numero = 121;

    flag_palindromo = 1;

    while (numero > 9)
    {
        removeExtremos(&numero, &primeiro, &ultimo);

        if (primeiro != ultimo)
        {
            flag_palindromo = 0;
            break;
        }
    }

    if (flag_palindromo)
            printf("palindromo\n");

    return 0;
}

