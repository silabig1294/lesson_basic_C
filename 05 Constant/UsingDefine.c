#include <stdio.h>
#include <stdlib.h>
#define VATRATE 0.1f

int main(int argc, char *argv[]) {
	int Price = 1000;
	float Vat = Price * VATRATE;
	float PriceWithVat = Price + Vat;
	
	printf("Price : %d\n", Price);
	printf("Vat Rate: %f\n", VATRATE);
	printf("Vat : %f\n", Vat);
	printf("Price With Vat : %f",PriceWithVat);
	
	return 0;
}
