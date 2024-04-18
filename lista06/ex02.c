#include <stdio.h>

int main ()
{
        int n, div, mdc, achou;

        scanf("%d", &n);

        achou = 0;

        mdc = n;

        while (!achou)
        {
                for (div = 2; div <= n; div++)
                if (mdc % div != 0)
                        break;

                if (div > n)
                        achou = 1;
                else
                        mdc++;
        }

        printf("%d\n", mdc);

        return 0;
}
