#include<stdio.h>
#define N 6

int main()
{
    int rows, cols, i, j, count_carac;

    rows = 2;
    cols = 3;
    count_carac = 0;

    while (rows <= N)
    {
        printf("%d\n", rows);

        for (i = 1; i <= rows; i++)
        {
            for (j = 1; j <= cols; j++)
            {
                if (j - i == rows - 1 || i + j == rows + 1)
                {
                    printf("#");
                    count_carac++;
                }
                else if (count_carac == 1 && i != 1)
                        printf("#");
                else
                    printf(" ");
            }
            count_carac = 0;
            printf("\n");
        }
        rows++;
        cols += 2;
        printf("\n");
    }

    return 0;
}
