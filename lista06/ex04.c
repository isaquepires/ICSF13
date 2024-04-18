#include <stdio.h>
#define CENTRO 2*n+1

int main()
{
    int n, cont_branco, cont_carac, meio, cima, branco, baixo;
    char caractere;

    scanf ("%c", &caractere);
    scanf ("%d", &n);

    branco = 0;

    // CIMA
    for (cima = 0; cima < n; cima++)
    {
        for (cont_branco = 0; cont_branco < n - branco; cont_branco++)
            printf(" ");

        for (cont_carac = 0; cont_carac < CENTRO - 2*cont_branco; cont_carac++)
            printf("%c", caractere);

        // incrementa aumentando espacos
        branco++;
        printf("\n");
    }

    // MEIO
    for (meio = 0; meio < CENTRO; meio++)
        printf("%c", caractere);

    printf("\n");

    // BAIXO
    branco = n-1;

    for (baixo = 0; baixo < n; baixo++)
    {
        for (cont_branco = 0; cont_branco < n - branco; cont_branco++)
            printf(" ");

        for (cont_carac = 0; cont_carac < CENTRO - 2*cont_branco; cont_carac++)
            printf("%c", caractere);

        // incrementa diminuindo espacos
        branco--;
        printf("\n");
    }

    return 0;
}
