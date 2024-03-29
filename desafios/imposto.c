#include <stdio.h>

int main () {
	float rendimento, aliquota, imposto, faixa1, faixa2, faixa3;

	scanf("%f", &rendimento);
	
	faixa1 = (2300.51 - 1200.26) * 0.075;
	faixa2 = (3500.76 - 2300.51) * 0.15;
	faixa3 = (4000.00 - 3500.51) * 0.225;

	if  (rendimento > 4000)
		imposto = ((rendimento - 4000.00) * 0.275) + faixa3 + faixa2 + faixa1;
	else if (rendimento >= 3500.76)
                imposto = ((rendimento - 3500.76) * 0.225) + faixa2 + faixa1;	
	else if (rendimento >= 2300.51)
                imposto = ((rendimento - 2300.51) * 0.15) + faixa1;
	else if (rendimento >= 1200.26)
		imposto = (rendimento - 1200.26) * 0.075;
	else
		imposto = 0.0;

	printf("%.2f\n", imposto);

	return 0;
}
