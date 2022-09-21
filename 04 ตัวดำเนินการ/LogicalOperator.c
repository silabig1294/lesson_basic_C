#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

int main(int argc, char *argv[]) {
	bool x = true;
	bool y = false;

	printf("********AND********");
	if(x && y){
		printf("\nTrue");
	}else
	{
		printf("\nFalse");
	}

	printf("\n********OR********");
	if (x || y){
		printf("\nTrue");
	}else
	{
		printf("\nFalse");
	}

	printf("\n********Not********");
	printf("!x : %d", x);

	return 0;
}
