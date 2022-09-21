#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	
	printf("Enter 1st number : ");
	scanf("%d", &num1);
	   
	printf("Enter 2nd number : ");
	scanf("%d", &num2);
	
	int result = num1 + num2;
	printf("Result : %d", result);
	
	return 0;
}
