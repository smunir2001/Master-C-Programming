smunir2001@gmail.com | August 19, 2022 | Section1Notes.md
# Section 1 - Basic Concepts
## Files included:
* Comments.c
## Comments in C
Comments are used in a program to document a program and to enhance its readability.

There to remind you, or someone else reading your code, what the program does or what a particular line of code is doing.

Comments are ignored by the compiler.
* a programmer may return to a program that he coded six months ago and may not remember the purpose of a particular function or line of code
* a simple comment can save a significant amount of time otherwise wasted on having to re-understand the code

There are two ways to add comments into a C program.
* by using the two characters / and *
    * marks the beginning of the comment
    * these types of comments have to be terminated
    * to end the comment, the characters * and / are used without any embedded spaces
    * all characters included between the opening /* and closing */ are treated as part of the comment
    * referred to as a multi-line comment
```C
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    /*
    This is
        a multi-
            line
                comment
                    in  C.
    */
    printf('Hello world!');
    return EXIT_SUCCESS;
}
```
* by using two consecutive slash characters //
    * any characters that follow these slashes up to the end of the line are ignored by the compiler
    * single line comment
```C
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    // this is a single-line comment in C
    printf('Hello world!');
    return EXIT_SUCCESS;
}
```