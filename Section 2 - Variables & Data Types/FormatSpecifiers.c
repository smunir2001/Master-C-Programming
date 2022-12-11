#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char* argv[]) {
    int my_integer = 100;
    float my_float = 331.79;
    double my_double = 8.44e+11;
    char my_char = 'S';
    bool my_bool = 1;

    printf("my_integer = %i\n", my_integer);
    printf("my_float = %f\n", my_float);
    printf("my_double = %e\n", my_double);
    printf("my_char = %c\n", my_char);
    printf("my_bool = %i\n", my_bool);

    return EXIT_SUCCESS;
}