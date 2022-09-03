smunir2001@gmail.com | August 19, 2022 | Section1Notes.md
# Section 1 - Basic Concepts
## Files included:
* Comments.c
* DisplayingOutput.c
* ReadingInput.c
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
## Reading input from the terminal
We have discussed output, now lets learn a bit about input.
* very useful to ask the user to enter data into a program
    * via the terminal/console
* the C library contains several input functions, and scanf() is the most general of them
    * can ready a variety of formats
* reads the input from the standard input stream __stdin__ and scans that input according to the __format__ provided
    * format can be a simple constant string, but you can specify %s, %d, %c, %f, etc..., to read strings, integers, characters, or floats
* if the stdin is input from the keyboard then text is read in because the keys generate text characters: letters, digits, and punctuation
    * when you enter the integer 2014, you type the characters 2, 0, 1, and 4
    * if you want to store that as a numerical value rather than as a string, your program has to convert the string character-by-character to a numerical value and this is the job of the scanf() function.

__scanf():__ like printf(), this function uses a control string followed by a list of arguments.
* control string indicates the destination data types for the input stream of characters
* the printf() function uses variable names, constants, and expressions as its argument list
* the scanf() function uses pointers to variables
* remember these 3 rules about __scanf()__
    * returns the number of items that it successfully reads
    * if you use scanf() to read a value for one of the basic variable types we've discussed, precede the variable name with an &
    * if you use scanf() to read a string into a character array, don't use an &
* the scanf() function uses whitespace (newlines, tabs, and spaces) to decide how to divide the input into separate fields
* scanf() is the inverse of printf(), which converts integers, floating-point numbers, characters, and C strings to text that is to be displayed onscreen
# Section 1 complete: September 3, 2022