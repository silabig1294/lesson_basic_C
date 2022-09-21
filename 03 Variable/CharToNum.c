#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char  x[]="100.6";
	char  y[]="200";

	float result;

	//result = atoi(x) + atoi(y);
	result = atof(x) + atof(y);
	printf("Result : %f", result);

	return 0;
}
