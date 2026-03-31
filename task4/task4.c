#include <stdio.h>
#include <stdint.h>

uint32_t setBit(const uint32_t _arg, const uint8_t _bit);
uint32_t resetBit(const uint32_t _arg, const uint8_t _bit);

void main(void) {


	printf("%d \n", setBit(19, 6)); // expected 83
	printf("%d \n", resetBit(19, 4)); // expected 3
}

uint32_t setBit(const uint32_t _arg, const uint8_t _bit) {

	uint32_t mask = 0x1 << _bit;
	uint32_t result = _arg | mask;
	return result;
}

uint32_t resetBit(const uint32_t _arg, const uint8_t _bit) {

	uint32_t mask = 0x1 << _bit;
	uint32_t result = _arg & ~mask;
	return result;
}