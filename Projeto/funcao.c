#include "trabalho1.h"
#include <math.h>

float calculaDistanciaAntenas (float x1, float y1, float x2, float y2)
{
    /* Aplicando formula de distancia entre dois pontos */
    return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}

unsigned int definePontoDeAcesso (int n_antenas)
{
    int antena_base;
    int antena_comparada;
    int ponto_de_acesso = 0;
    float dist_antenas_mais_distantes = 0;
    float menor_dist = 0;
    float dist_antenas = 0;

    /* Para percorrer por todas as antenas como base. */
    for (antena_base = 0; antena_base < n_antenas; antena_base++)
    {
        /* Para comparar cada uma das antenas com as antenas base. */
        for (antena_comparada = 0; antena_comparada < n_antenas; antena_comparada++)

            /* Para uma antena nao ser comparada com ela mesma. */
            if (antena_base != antena_comparada)
            {
                /* Encontrar a distancia entre antenas usando as coordenadas das antenas base e comparada. */
                dist_antenas = calculaDistanciaAntenas(pegaX(antena_comparada), pegaY(antena_comparada), pegaX(antena_base), pegaY(antena_base));

                /* Selecionando as antenas mais distantes em relacao
                as distancias das antenas comparadas. */
                if (dist_antenas > dist_antenas_mais_distantes)
                    dist_antenas_mais_distantes = dist_antenas;

                /* Caso haja empate na menor das maiores distancias,
                seleciona-se a antena que tiver o menor identificador. */
                else if (dist_antenas == menor_dist)
                    if (antena_base < ponto_de_acesso)
                        ponto_de_acesso = antena_base;

                /* Se for a primeira antena, a menor distancia comecara sendo
                a distancia das antenas mais distantes em relacao a antena base. */
                if (!antena_base)
                    menor_dist = dist_antenas_mais_distantes;
            }

        /* Selecionando a menor distancia e o ponto de acesso
        dentre as distancias das antenas mais distantes entre si. */
        if (dist_antenas_mais_distantes < menor_dist)
        {
            menor_dist = dist_antenas_mais_distantes;
            ponto_de_acesso = antena_base;
        }

        /* Zerando a distancia da antena mais distante para receber os
        valores da proxima comparacao de distancias da antena_principal. */
        dist_antenas_mais_distantes = 0;
    }

    /* Retornando ponto de acesso deslocando 24 bits para a esquerda e adicionalmente,
    o valor da menor distancia arredondado para o inteiro positivo mais proximo. */
    return ((ponto_de_acesso << 24) + (unsigned int) (menor_dist + 0.5));
}
