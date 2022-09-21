#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float Price = 1200;
	float VatRate = 0.07; 
	float Vat = Price * VatRate;
	float PriceWithVat = Price + Vat;

	printf("Profit : %f", PriceWithVat);

	return 0;
}
