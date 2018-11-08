#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int grade[5] = {10, 20, 30, 40, 50};
	int average=0;
	int *ptr;
	
	int i;
	
	ptr = grade; 	//pointer setting: 배열의 주소 자체가 메모리 주 소 

	//average caculation
	for (i=0;i<5;i++) {
		average += *ptr+i; 	// *ptr+i=ptr[i]
	}

	printf("average is %i\n", average/5);
	
	return 0;
}
