#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char c = 'A';	
	short age = 35;
	int Salary = 24000;	
	long Price = 120000;
	float Cost = 200.50;	

	printf("char : %c", c);
	printf("\nchar : %d", c);
	printf("\n---------------------\n");
	printf("short : %d", age);	
	printf("\nint : %d", Salary);
	printf("\nlong : %d", Price);
	printf("\nfloat : %f", Cost);
	
	return 0;
}
