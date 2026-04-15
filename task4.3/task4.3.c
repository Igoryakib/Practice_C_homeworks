#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

void main(void) {


	const int arr[4] = {2, 3, 27, 50};

	const int* ptr = arr;
	const int* p = &arr[1];
	// task 1
	uint64_t var64 = (uint64_t)ptr;

	int* restored_ptr = (int*)var64;

	printf("ptr - %p \n", ptr);
	printf("converted ptr in uint64_t - %llu \n", var64);
	printf("restored ptr from uint64_t - %p \n", restored_ptr);

	ptr++;

	printf("ptr increment %p - %d \n", ptr, *ptr); // 3

	ptr--;

	printf("ptr decrement %p - %d \n", ptr, *ptr); // 2

	int res = p - ptr;
	printf("subtraction of pointers - %d\n", res); // 4 byte - 1 element
	printf("address p - %p\n", p);
	printf("address ptr - %p\n", ptr);
	
	// task 2
	printf("converted ptr in uint64_t %p - %llu \n", ptr, var64);
	var64++;
	int* incremented_ptr = (int*)var64;
	printf("after increment *incremented_ptr - %d, incremented_ptr - %p, uint64_t - %llu\n", *incremented_ptr, incremented_ptr, var64);


	// task 3
	uint16_t const number = 0x1;
	unsigned const char* const c = (unsigned const char*)&number;

	if (0 != *c) {
		printf("Little-endian\n");
	}
	else {
		printf("Big-endian\n");
	}

	// task 4
	void (*ptr_func)(void);
	extern void (*get_func(void))(void);
	ptr_func = get_func();
	ptr_func();
}