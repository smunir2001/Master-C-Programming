#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char* argv[]) {
    printf("DataTypes.c -->\n");
    printf("---------------\n\n");
    
    int sami = 7;
    printf("(before) sami = %d\n", sami);
    sami = 10;
    printf("(after) sami = %d\n\n", sami);
    int var_int = 3351;
    printf("var_int = %d\n", var_int);
    float var_float = 23.333f;
    printf("var_float = %f\n", var_float);
    double var_double = 23.333333333333333333333e+7;
    printf("var_double = %f\n", var_double);
    bool var_bool = true;
    printf("var_bool = %d", var_bool);

    return EXIT_SUCCESS;
}