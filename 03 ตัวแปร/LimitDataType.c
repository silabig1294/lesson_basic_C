#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[]) {
    printf("char-Max : %d\n", CHAR_MAX);
    printf("char-Min : %d\n", CHAR_MIN);
    printf("--------------------------------------\n");
    printf("int-Max : %d\n", INT_MAX);
    printf("int-Min : %d\n", INT_MIN);
    printf("--------------------------------------\n");
    printf("long-Max : %ld\n", LONG_MAX);
    printf("long-Min : %ld\n", LONG_MIN);
    printf("--------------------------------------\n");
	printf("float-Max : %.6e\n", FLT_MAX);
    printf("float-Min : %.6e\n", FLT_MIN);
    printf("--------------------------------------\n");
    printf("double-Max : %.15e\n", DBL_MAX);
    printf("double-Min : %.15e", DBL_MIN);
	   	
	return 0;
}



