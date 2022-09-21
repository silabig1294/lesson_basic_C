#include <stdio.h>

typedef enum {	
	Apple,
	Google
} Mobile;

int main(int argc, char *argv[]) {
	Mobile m = Apple;

	switch (m) {
	case Apple:
		printf("Your phone is iPhone");
		break;
	case Google:
		printf("Your phone is Android");
		break;
	default:
		break;
	}	
	
	return 0;
}


