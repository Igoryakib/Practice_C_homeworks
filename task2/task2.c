#include <stdio.h>
#include <stdint.h>

int8_t add_age(const int8_t _arg);

void main(void) {

	printf("Signed int: \n");
	printf("%b \n", add_age(127));
	printf("%d \n", add_age(127));

	printf("%b \n", add_age(-1));
	printf("%d \n", add_age(-1));

	printf("%b \n", add_age(10));
	printf("%d \n", add_age(10));

	printf("%b \n", add_age(-128));
	printf("%d \n", add_age(-128));

}

int8_t add_age(const int8_t _arg) {

	return 19 + _arg;
}
