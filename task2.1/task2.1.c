#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool static funcA(void);
bool static funcB(void);

void main(void) {

	bool result = true;
	
	result = funcA() || funcB();
	printf("%d\n", result); // func A executed, func B - not, result - 1

	result = funcA() && funcB();
	printf("%d\n", result); // func A & b were executed, result - 0

	result = funcB() && funcA();
	printf("%d\n", result); // func B was executed, func A - not, result - 0
}

bool static funcA(void) {

	printf("Func A was executed \n");
	return true;
}

bool static funcB(void) {

	printf("Func B was executed \n");
	return false;
}