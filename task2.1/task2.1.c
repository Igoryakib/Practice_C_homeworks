#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void main(void) {

	bool a = true;
	uint8_t const b = 1;
	bool result = true;
	
	result = a && b;
	printf("%d\n", result); // 1

	a = false;
	result = a || b;
	printf("%d\n", result); // 1

	result = a && b;
	printf("%d\n", result); // 0

}