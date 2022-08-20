#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    char str[100];
    int i;
    printf("Enter a value: ");
    // standard C library function
    scanf("%s %d", str, &i);
    printf("\nYou entered: %s %d", str, i);
    return EXIT_SUCCESS;
}