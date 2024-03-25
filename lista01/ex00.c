#include<stdio.h>

int main()
{
    	float preco_litro_alcool;
    	float preco_litro_gasolina;
    	float km_por_litro_alcool;
    	float km_por_litro_gasolina;
    	float custo_por_km_alcool;
    	float custo_por_km_gasolina;

    	scanf("%f", &preco_litro_alcool);
    	scanf("%f", &preco_litro_gasolina);
    	scanf("%f", &km_por_litro_alcool);
    	scanf("%f", &km_por_litro_gasolina);

    	custo_por_km_alcool = preco_litro_alcool / km_por_litro_alcool;
    	custo_por_km_gasolina = preco_litro_gasolina / km_por_litro_gasolina;

    	if (custo_por_km_alcool < custo_por_km_gasolina)
        	printf("melhor usar alcool\n");
    	else
        	printf("melhor usar gasolina\n");

	return 0;
}
