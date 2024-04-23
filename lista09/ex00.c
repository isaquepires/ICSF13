#include <stdio.h>

void segundosParaHMS (int total_segundos, int *h, int *m, int *s)
{
    *h = total_segundos / 3600;
    *m = (total_segundos % 3600) / 60;
    *s = (total_segundos % 3600) % 60;
}

int main()
{
    int segundos, hor, min, seg;

    segundos = 10000;

    segundosParaHMS(segundos, &hor, &min, &seg);

    printf("%d:%d:%d\n", hor, min, seg);


    return 0;
}
