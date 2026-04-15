#include <stdio.h>
#include <stdint.h>
 
void main(void) {

	int num1 = 10;
	printf("main scope - variable num1: %d \n", num1);
	switch (num1) {
	case 10: {
		num1 = 40;
		printf("switch scope - variable num1: %d \n", num1);
		break;
	}
	case 20:
	{
		printf("switch scope - variable num1: %d \n", num1);
		break;
	}
	}
	printf("main scope - variable num1: %d \n", num1);
}