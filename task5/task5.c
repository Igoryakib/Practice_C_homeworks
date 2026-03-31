#include <stdio.h>
#include <stdint.h>
#include <windows.h>

void main(void) {

    uint8_t status = 0x0;
    for (;;) {
        status ^= 0x1;
        Sleep(500);
        printf("%d \n", status);
    }
}