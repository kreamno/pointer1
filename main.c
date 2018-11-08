#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x=10;
	int y=20;
	int *ptr;
	
	ptr = &x;
	printf("prt value of x : %d\n", *ptr);

	ptr = &y;
	printf("prt value of y : %d\n", *ptr);
	
	ptr = &x;
	*ptr=20;
	printf("changed value of x : %d\n", x);
	
	return 0;
}
