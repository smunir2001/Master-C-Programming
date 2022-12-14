smunir2001@gmail.com | December 14, 2022 | Section3Notes.md
# Section 3 - Operators
## Files included:
* 
## Overview
Operators are functions that use a symbolic name.
* perform mathematical or logical functions

Operators are predefined in C, just like they are in most other languages, and most oeprators tend to be combined with the infix style
* A logical operator (sometimes called a "Boolean operator") is an operator that returns a Boolean result that is based on the Boolean result of one or two other expressions
* An arithmetic operator is a mathematical function that takes two operands and performs a calculation on them
* Other operators include assignment, relational (<, >, !=), bitwise (<<, >>, ~)
## Expressions & Statements
Statements form the basic program steps of C, and most statements are constructed from expressions.
* a program is a series of statements with a special syntax ending with a semicolon (simple statements)
```C
// declaration statement:
int sami;
// assignment statement:
sami = 7;
// function call statement:
printf("Hello World\n");
// structure statement:
while (sami < 10) {
    printf("Hello World!\n");
    sami = sami + 1;
}
// return statement:
return EXIT_SUCCESS;
```

C considers any expression to be a statement if you append a semicolon (expression statements).


An expression consists of a combination of operators and operands.
* operands are what an operator operates on
* operands can be constants, variables, or combinations of the two
* every expression has a value
### Compound Statements
Two or more statments grouped together by enclosing them in braces (block).
```C
int index = 0;
while (index < 10) {
    printf("Hello\n");
    index = index + 1;
}
```