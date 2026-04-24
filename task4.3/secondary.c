#include <stdio.h>
static void funcb(void) {
	printf("funcb is executed\n");
}

void (*get_func(void))(void) {
	return funcb;
}