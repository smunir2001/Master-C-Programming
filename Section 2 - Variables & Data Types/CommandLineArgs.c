#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int numberOfArgs = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];

    printf("numberOfArgs = %d\n", numberOfArgs);
    printf("arg1: %s\n", arg1);
    printf("arg2: %s\n", arg2);

    return EXIT_SUCCESS;
}