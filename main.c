#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *a, int *b) {		//call by value

	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int x=10;
	int y=20;
	
	printf("x : %d, y : %d \n", x, y);
	
	swap(&x, &y);
	printf("x : %d, y : %d \n", x, y);
	
	return 0;
	
};
