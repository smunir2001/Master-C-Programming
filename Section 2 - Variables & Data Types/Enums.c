#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char* argv[]) {
    enum gender {male, female};
    enum gender myGender = male;
    enum gender anotherGender = female;

    bool isMale = (myGender == anotherGender);

    return EXIT_SUCCESS;
}