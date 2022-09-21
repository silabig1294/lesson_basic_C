#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int Price = 1000;
	const float VATRATE = 0.07f;
	float Vat = Price * VATRATE;
	float PriceWithVat = Price + Vat;
	
	printf("Price : %d\n", Price);
	printf("Vat Rate: %f\n", VATRATE);
	printf("Vat : %f\n", Vat);
	printf("Price With Vat : %f",PriceWithVat);
	
	return 0;
}
