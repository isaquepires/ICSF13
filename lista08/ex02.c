#include <stdio.h>
#define LARGURA_FAIXA 6 /* Largura da faixa de tecido, em cm. */

void main ()
{
    int i, j, quantidade_pontos;

    j = 0;
    quantidade_pontos = 0;

    /* Funciona até desligar ou o tecido acabar. */
    while (1)
    {
        for (i = 0; i < LARGURA_FAIXA; i++)
            if (i < quantidade_pontos)
                moveAgulha();
            else
                if (j % 2 == 0)
                    pontoRolo1();
                else
                    pontoRolo2();

        if (quantidade_pontos == LARGURA_FAIXA - 1)
        {
            quantidade_pontos = 0;
            j++;
        }
        else
            quantidade_pontos++;

        rolaTecido ();
    }
}

void pontoRolo1()
{
    printf("v");
}

void pontoRolo2()
{
    printf("a");
}

void moveAgulha()
{
    printf(" ");
}

void rolaTecido()
{
    printf("\n");
}

