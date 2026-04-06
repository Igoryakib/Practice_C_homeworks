#include <stdio.h>

// despite latest C standart which is available in VS, %b specifier still doesn't work here, but in online compiler looks good

void main(void) {
	printf("%b \n", 19);
	printf("%b \n", -19);
	printf("%b \n", 2006);
	printf("%b \n", -2006);
}