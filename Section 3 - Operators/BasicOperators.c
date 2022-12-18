#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int a = 33;
    int b = 15;
    int result = 0;

    printf("\nArithmetic Operators:\n");
    result = a + b;
    printf("result = %d\n", result);
    result = a % b;
    printf("result = %d\n", result);
    result = a - b;
    printf("result = %d\n", result);
    result = a * b;
    printf("result = %d\n", result);
    result = a / b;
    printf("result = %d\n", result);

    _Bool boolA = 1;
    _Bool boolB = 0;
    _Bool boolResult;

    printf("\nBoolean (Relational) Operators:\n");
    boolResult = a && b;
    printf("boolResult = %d\n", boolResult);
    boolResult = a || b;
    printf("boolResult = %d\n", boolResult);
    boolResult = !a && b;
    printf("boolResult = %d\n", boolResult);

    return EXIT_SUCCESS;
}