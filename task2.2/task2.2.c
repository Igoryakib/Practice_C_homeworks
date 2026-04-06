#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>


void main(void) {

	bool const logical_result = 2 && 1;
	printf("%d\n", logical_result); // expected 1, got 1

	bool const bit_result = 2 & 1;
	printf("%d\n", bit_result); // expected 1, got 0
}