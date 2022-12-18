#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;

    printf("\nBitwise Operators:\n");
    result = a & b;
    printf("result = %d\n", result);
    result = a | b;
    printf("result = %d\n", result);
    result = a ^ b;
    printf("result = %d\n", result);
    result = a << 2;
    printf("result = %d\n", result);
    result = b >> 2;
    printf("result = %d\n", result);

    return EXIT_SUCCESS;
}