smunir2001@gmail.com | December 14, 2022 | Section3Notes.md
# Section 3 - Operators
## Files included:
* BasicOperators.c
* BitwiseOperators.c
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
| <= | Checks if the valuye of the left operand is less than or equal to the value of the right operand. If yes, then the condition becomes true. | (A <= B) is true.
### Bitwise Operators
C offers bitwise logical and shift operators.
* look something like the logical operators you saw earlier but are quite different.
* operate on the bits in integer values.

One major use of the bitwise AND, &, and the bitwise OR, |, is present in operations to test and setr individual bits in an integer variable.
* can use individual bits to store data that involve one of two choices.

Example: you can use a single integer variable to store several characteristics of a person.
* store whether the person is a male or female with one bit
* use three other bits to specify whether the person can speak French, German, or Italian
* another bit to record whether the person's salary is more than $50,000 or more
* in just four bits you have a substantial set of data recorded
### Binary Numbers
A binary number is a number that includes only ones and zeroes.
* the number could be of any length
* the following are all examples of binary numbers

| Example 1) | Example 2) |
|------------|------------|
| 0 | 10101 |
| 1 | 0101010 | 
| 10 | 1011110101 |
| 01 | 0110101110 |
| 111000 | 000111 |

every binary number has a corresponding decimal value (and vice versa)

| Binary Number | Decimal Equivalent |
|---------------|--------------------|
| 1 | 1 |
| 10 | 2 |
| 11 | 3 |
| ... | ... |
| 1010111 | 87 |
* each position for a binary number has a value
* for each digit, multiply the digit by its position value
* add up all of the proudcts to get the final result
### Bitwise Operators
| Operator | Description | Example |
|----------|-------------|---------|
| & | Binary AND operator copies a bit to the result if it exists in both operands. | (A & B) = 12 |
| / | Binary OR operator copies a bit if it exists in either operand. | (A / B) = 61 |
| ^ | Binary XOR operator copies the bit if it is set in one operand but not both. | (A ^ B) = 49 |
| << | Binary Left Shift operator. The left operand's value is moved left by the number of bits specified by the right operand. | A << 2 = 240 |
| >> | Binary Right Shift operator. The left operand's value is moved right by the number of bits specified by the right operand. | A >> 2 |
### The Cast and __sizeof__ Operator
Type Conversions - conversion of data between different types can happen automatically (implicit conversion) by the language or explicit by the program.
* to effectively develop C programs, you must understand the rules used for the implicit conversion of floating-point and integer values in C

Normally, you shouldn't mix types, but there are occasions when it is useful.
* remember, C is flexible, and it gives you the freedom, but do not abuse it
* whenever a floating-point value is assigned to an integer variable in C, the decimal portion of the number gets truncated

```C
int x = 0;
float f = 12.125;
x = f; // value stored in x is the number 12, only the int portion is stored.
```
Assigning an integer variable to a floating variable does not cause any change in the value of the number.
* value is converted by the system and stored in the floating variable

When performing integer arithmetic:
* if two operands in an expression are integers, then any decimal portion resulting from a division operation is discarded, even if the result is assigned to a floating variable
* if one operand is an int and the other is a float, then the operation is performed as a floating-point operation
### The Cast Operator
Form of explicit conversion!
* the type cast operator has a higher precedence than all the arithmetic operators except the unary minus and unary plus
* cast from more precise -> less precise

```C
int result = (int) 21.51 + (int) 26.99;
// evalulated as 21 + 26
```
### __sizeof__ Operator
You can find out how many bytes are occupied in memory by a given type by using the __sizeof__ operator.
* __sizeof__ is a special keyword in C
* it is an actual operator, not a function
* evaluated at compile time and not at runtime, unless a variable-length array is used in its argument
* the argument to the __sizeof__ operator can be a variable, an array name, the name of a basic data type, the name of a derived data type, or an expression

__sizeof(int)__ will result in the number of bytes occupied by a variable of type int.
* you can also apply the __sizeof__ operator to an expression.
* use the __sizeof__ operator wherever possible to avoid having to calculate and hard-code sizes into your program
### Other Operators
The __*__ operator represents a pointer to a variable.
```C
int *a;
```
The __?__ operator is used for comparisons.
* if the condition is true ? then value X : otherwise value Y
* also know as the ternary operator

### Operator Precedence
Operator precedence determines the grouping of terms in an expression and decides how an expression is evaluated.
* dictates the order of evaluation when two operators share an operand
* certain operators have higher precedence than others
* for example, the multiplication operator has a higher precedence than the addition operator

```C
int x = 7 + 3 * 2;
// can result in 13 or 20 depending on the order of each operands evaluation
```
The order of executing the various operations can make a difference, so C needs unambiguous rules for choosing what to do first.
* each operator is assigned a precedence level
    * multiplication and division have a higher precedence than addition and subtraction, so they are performed first
* whatever is enclosed in parentheses is executed first (should just always use () to group expressoins)

Associativity - what if two operators have the same precedence?
* then associativty rules are applied
* if they share an operand, they are executed according to the order in which they occur in the statement (for most operators, the order is from left to right)