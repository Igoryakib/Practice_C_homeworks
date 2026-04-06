#include <stdio.h>
#include <stdint.h>


void main(void) {
	printf("%d", (uint8_t)(127 << 2));
	printf("%d", (int8_t)(127 << 2));
	printf("%d", (uint8_t)(10 >> 2));
	printf("%d", (int8_t)(10 >> 2));
	printf("%d", (uint8_t)(240 << 2));
	printf("%d", (int8_t)(240 << 2));
	printf("%d", (uint8_t)(100 >> 4));
	printf("%d", (int8_t)(100 >> 4));
}