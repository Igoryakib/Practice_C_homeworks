#include <stdio.h>
#include <stdint.h>

extern int counter;
extern void funcC(void);

// global variables
const int num1 = 10;
const int num2 = 20;

static void funcA();

static int funcB();

void main(void) {
	// we have access in main to num1, num2
	printf("Main scope - num1: %d \n", num1);
	printf("Main scope - num2: %d \n", num2);
	funcA();
	// example of static local
	printf("funcB %d \n", fun());
	printf("funcB %d \n", fun());
	// example of extern
	printf("extern counter: %d", counter);
	// When we are trying execute funcC - got error because funcC is static global
	//funcC();
}

static void funcA() {
	// local variable num1
	int num1 = 40;
	printf("funcA scope - num1: %d \n", num1);
	// access to global variable num2
	printf("funcA scope - num2: %d \n", num2);
}

static int fun() {
	static int count = 0;
	count++;
	if (count == 2) {
		return count = 25;
	}
	return count;
}