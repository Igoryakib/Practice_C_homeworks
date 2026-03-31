#include <stdio.h>
#include <stdint.h>

uint8_t add_age(const uint8_t _arg);

void main(void) {

	printf("Unsigned int: \n");
	printf("%b \n", add_age(127));
	printf("%d \n", add_age(127));

	printf("%b \n", add_age(255));
	printf("%d \n", add_age(255));

	printf("%b \n", add_age(10));
	printf("%d \n", add_age(10));

	printf("%b \n", add_age(240));
	printf("%d \n", add_age(240));
}

uint8_t add_age(const uint8_t _arg) {

	return 19 + _arg;
}