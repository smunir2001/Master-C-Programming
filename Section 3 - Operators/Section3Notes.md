smunir2001@gmail.com | December 14, 2022 | Section3Notes.md
# Section 3 - Operators
## Files included:
* BasicOperators.c
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
An arithmetic operator is a mathematical function that takes two operands and performs a calculation on them.

A logical operator (sometimes called a "Boolean operator") is an operator that returns a Boolean result that is based on the Boolean result of one or two other expressions.

Assignment operators set variables equal to values.
* assigns the value of the expression at its right to the variable at its left

A relational operator will compare variables against eachother.
### Arithmetic Operators
| Operator | Description | Example |
|----------|-------------|---------|
| + | Adds two operands | A + B = 30 |
| - | Subtracts second operands from the first | A - B = -10 |
| * | Multiplies both operands | A * B = 200 |
| / | Divides numerator by de-numerator | B / A = 2 |
| % | Modulus operator and remainder of after an integer division | B % A = 0 |
| ++ | Increment operator increases the integer value by one | A++ = 11 |
| -- | Decrement operator decreases the integer value by one | A-- = 9 |
### Logical Operators
| Operator | Description | Example |
|----------|-------------|---------|
| && | Called logical AND operator. If both the operands are non-zero, then the condition becomes true. | (A && B) is false |
| // | Called logical OR operator. If any of the two operands is non-zero, then the condition becomes true. | (A // B) is true |
| ! | Called logical NOT operator. It is used to reverse the logical state of its operand. If a condition is true, then logical NOT operator will make it false. | !(A && B) is true |
### Assignment Operators
| Operator | Description | Example |
|----------|-------------|---------|
| = | Simple assignment operator | C = A + B will assign the value of A + B to C. |
| += | Add AND assignment operator. It adds the right operands to the left operand and assigns the result to the left operand. | C += A is equivalent to C = C + A. |
| -= | Subtract AND assignment operator. It subtracts the right operand from the left operand and assigns the result to the left operand. | C -= A is equivalent to C = C - A. |
| *= | Multiply AND assignment operator. It multiplies the right operand with the left operand and assigns the result to the left operand. | C *= A is equivalent to C = C * A. |
| <<= | Left shift AND assignment operator. | C <<= 2 is same as C = C << 2 |
| =>> | Right shift AND assignment operator. | C =>> 2 is same as C = C >> 2 |
| &= | Bitwise AND assignment operator. | C &= 2 is same as C & 2 |
| ^= | Bitwise exclusive OR and assignment operator. | C ^= 2 is same as C = C ^ 2 |
| != | Bitwise inclusive OR and assignment operator. | C != 2 is same as C = C ! 2 |
### Relational Operators
| Operator | Description | Example |
|----------|-------------|---------|
| == | Checks if the values of two operands are equal or not. If yes, then the condition becomes true. | (A == B) is not true. |
| != | Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true. | (A != B) is true. |
| > | Checks if the value of the left operand is greater than the value of the right operand. If yes, then the condition becomes true. | (A > B) is not true. |
| < | Checks if the value of the left operand is less than the value of the right operand. If yes, then the conidition becomes true. | (A < B) is true. |
| >= | Checks if the value of the left operand is greater than or equal to the value of the right operand. If yes, then the condition becomes true. | (A >= B) is not true. |
| <= | Checks if the valuye of the left operand is less than or equal to the value of the right operand. If yes, then the condition becomes true. | (A <= B) is true. |