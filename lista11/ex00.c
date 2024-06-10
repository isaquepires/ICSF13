#include <stdio.h>

int main ()
{
    int n_quest, i, acerto;

    acerto = 0;

    scanf("%d", &n_quest);

    char gabarito_quest[81], candidato_quest[81];

    scanf("%s", gabarito_quest);
    scanf("%s", candidato_quest);

    for (i = 0; i < n_quest; i++)
    {
        if (gabarito_quest[i] == candidato_quest[i])
            acerto++;
    }

    printf("%d\n", acerto);

    return 0;
}
