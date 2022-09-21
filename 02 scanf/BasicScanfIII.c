#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num1;
	int num2;  

	printf("Enter two numbers : ");
	scanf("%d, %d", &num1, &num2);

	printf("1st number is %d\n", num1);
	printf("2nd number is %d\n", num2);
	
	int result = num1 + num2;
	printf("Result : %d", result);
	
	return 0;
}
