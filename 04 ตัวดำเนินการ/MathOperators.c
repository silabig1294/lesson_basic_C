#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x, y;
	x = 7;
	y = 3;

	printf("x : %d\n", x);
	printf("y : %d\n\n", y);

	printf("----------------------\n");
	printf("x + y \t = %d\n", x + y);
	printf("x - y \t = %d\n", x - y);
	printf("x * y \t = %d\n", x * y);
	printf("x / y \t = %d\n", x / y);
	printf("x %% y \t = %d", x % y);

	return 0;
}
