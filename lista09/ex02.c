#include <stdio.h>

// Dizemos que uma sequência de n inteiros positivos é k-alternante
// se for composta alternadamente por segmentos de números pares
// de tamanho k e segmentos de números ímpares de tamanho k.

int kalternante(int n, int* k)
{
    // Cada elemento da sequencia pode ser chamado de termo.
    int i, termos, pares, impares, paridade, maior_paridade, menor_paridade, flag_zero;

    pares = 0;
    impares = 0;
    paridade = 0;
    maior_paridade = 0;
    menor_paridade = 0;
    flag_zero = 0;

    // O primeiro termo nao pode ser comparado com o anterior,
    // pois não existe anterior, por isso ele esta fora do "for".
    scanf("%d", &termos);

    if (termos % 2 == 0)
        pares++;
    else
        impares++;

    paridade = pares - impares;

    // Lendo a quantidade de numeros da main menos o primeiro.
    for (i = 1; i < n; i++)
    {
        scanf("%d", &termos);

        // Encontrando termos pares e termos impares.
        if (termos % 2 == 0)
        {
            // Se houver padrao e a quantidade de pares
            // crescer mais que o padrao esperado ...
            if (flag_zero && paridade == maior_paridade)
                return 0;
            pares++;
        }
        else
        {
            // Se houver padrao e a quantidade de impares
            // crescer mais que o padrao esperado ...
            if (flag_zero && paridade == menor_paridade)
                return 0;
            impares++;
        }

        // Para encontrar a quantidade de pares na sequencia
        // se houver mais impares, paridade fica negativa.
        paridade = pares - impares;

        // Quando numero de pares e de impares sao iguais
        // paridade se iguala a zero e ha um padrao.
        if (paridade == 0 && i != 1)
            flag_zero = 1;

        // Encontrar a maior paridade.
        if (paridade > maior_paridade)
            maior_paridade = paridade;

        // Encontrar a menor paridade.
        if (paridade < menor_paridade)
            menor_paridade = paridade;
    }

    // Passsando por referencia os valores em modulo de k.
    if (maior_paridade > 0)
        *k = maior_paridade;
    else if (menor_paridade < 0)
        *k = -menor_paridade;

    return 1;
}

int main ()
{
    int numero, valor_k;

    // Lendo a quantidade de numeros para a sequencia.
    scanf("%d", &numero);

    // Se a sequencia for k alternante, exibir valor de k.
    if (kalternante(numero, &valor_k))
        printf("%d-alternante\n", valor_k);

    return 0;
}
