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
## The preprocessor
Another unique feature of the C language that is not found in many other high-level programming languages.

Allows for programs to be easier to develop, easier to read, easier to modify, and easier to port to different computer systems.

Part of the C compilation process that recognizes special statements.
* analyzes these statements before analysis of the C program itself takes place
* an instruction to your compiler to do something before compiling the source code
* could be anywhere in your code

Preprocessor statements are identified by the presence of a pound sign, #, which must be the first non-space character on the line.
* also called a preprocessor directive

We will utilize the preprocessor to:
* create our own constants and macros with the #define statement
* build your own library files with the #include statement
* make more powerful programs with the conditional #ifdef, #endif, #else, and #ifndef statements
## The include statement
The #include statement is a preprocessor directive.
```C
#include <stdio.h>
```
It is not strictly part of the executable program, however the program won't work without it.

The symbol # indicatres this is a preprocessing directive.
* an instruction to your compiler to do something before compiling the source code
* many preprocessing directives
* are usually some at the beginning of the program source file, but they can be anywhere
* similar to the import statement in Java

In the above example, the compiler is instructed to "include" in your program the contents of the file with the name stdio.h
* called a header file because it is ually included at the head of a program source file
* .h extension
### Header files
Header files define information about some of the functions that are provided by that file.
* stdio.h is the standard C library header and provides functionality for displaying output, among many other things
* we need to include this file in a program when using the printf() function from the standard library
* stdio.h contains the information that the compiler needs to understand what printf() means, as well as other functions that deal with input and output
* stdio is short for standard input/output
* header files specify information that the compiler uses to integrate any predefined functions within a program
* header file names are case sensitive on some systems, so you should always write them in lowercase
* two ways to #include header files in a program
    * using angle brackets (#include <Jason.h>)
        * tells the preprocessor to look for the file in one or more standard system directories
    * using double quotes (#include "Jason.h")
        * tells the preprocessor to first look in the current directory
* you should use #ifndef and #define to protect against multiple inclusions of a header file
* header files includes many different things:
    * #define directives
    * structure declarations
    * typedef statements
    * function prototypes
## Displaying output
```C
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    # standard library function
    printf("Hello world!");
    return EXIT_SUCCESS:
}
```
__printf():__ a standard library function
* it outputs information to the command line (the standard output stream), which is the command line by default)
* the information displayed is based on what appears between the parentheses that immediately follow the function (printf)
* also notice that this line does end with a semicolon
* not only can simple phrases be displayed, but the values of variables and the results of computations can also be displayed
    * can be used for debugging