#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num;
	printf("Please enter your number (1-365) : ");
	scanf("%d", &num);

	if ((num < 1) || (num > 365))
	{ 
		printf("Your number must be between 1-365!!!"); 
	}
	else
	{ 
		printf("You number : %d", num); 
	}
	
	return 0;
}
