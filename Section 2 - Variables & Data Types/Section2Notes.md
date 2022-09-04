smunir2001@gmail.com | September 3, 2022 | Section2Notes.md
# Section 2 - Variables & Data Types
## Files included:
* DataTypes.c
## Overview
Remember that a program needs to store the instructions of its program and the data that it acts upon while your computer is executing that program.
* this information is stored in memory (RAM)
* RAM's contents are lost when the computer is turned off
* hard drives store persistent data

You can think of RAM as an ordered sequence of boxes:
* the box is full when it represents 1 or the box is empty when it represents 0
* each box represents one binary digit, either 0 or 1 (true/false)
* each box is called a bit

Bits in memory are grouped into sets of eight (byte).
* each byte has been labeled with a number (address)
* the address of a byte uniquely references that byte in your computer's memory
* 1 byte = 8 bits / 8 bytes = 64 bits

Memory consists of a large number of bits that are in groups of eight (called bytes) and each byte has a unique address.
## Variables
The true power of programs you create is their manipulation of data.
* So we need to understand the different data types we can use, as well as how to create and name variables

__Constants__ are types of data that do not change and retain their values throughout the life of the program.

__Variables__ are types of data that may change or be assigned values as the program runs.
* Variables are the names you given to computer memory locations which are used to store values in a computer program.
### Naming variables in C
The rules for naming variables in C is that all names must begin with a letter or underscore (_) and can be followed by any combination of letters (uppercase/lowercase), underscores, or the digits 0-9.
* use meaningful names when selecting variable names
    * can dramatically increase the readability of a program and pay off in the debug and documentation phases
## Data types
Some types of data in programs are numbers, letters, or words.
* computers need a way to identify and use these different kinds of data
A __data type__ represents a type of the data which you can process using your program.
* examples include: ints, floats, doubles, etc.
* also correspond to byte sizes on the platform of your program
* __primitive data__ types are types that are not objects and store all sorts of data
## Declaring variables
Declaraing a variable is when you specify the type of the variable followed by the variable name.
* specifies to the compiler how a particular variable will be used by the program
```C
int my_fav_number = 7;
char my_fav_letter = 'S';
float my_fav_float = 1.234;

int x, y, z; // created 3 variables with no assignment
printf("%f", my_fav_float);
```
C requires that all program variables be declared before they are used in a program.
## Initializing variables
TO initialize a variable means to assign it a starting, or initial, value.
* this can be done as part of the declaration
    * follow the variable name with the assignment operator (=) and the value you want the variable to have
```C
int x = 21;
int a = 32, b = 14;
int y, z = 23; // valid, but poor, form
```

## Some examples of basic data types in C are:
* int
* float
* double
* char
* _Bool

The difference between the types is in the amount of memory they occupy and the range of values they can hold.
* the amount of storage that is allocated to store a particular type of dta
* depends on the computer you are running (machine-dependent)
* an integer might take up to 32 bits on your computer, or perhaps it might be stored in 64

### int
A variable of type int can be used to contain integral values (only values that do not contain decimal places).
* a minus sign preceding the data type and variable indicates that the value is negative
* the int type is a signed integer
    * it must be an integer and it can be positive, negative, or zero
* if an integer is preceded by a zero and the letter x (either lowercase or uppercase), the value is taken as being expressed in hexadecimal (base 16) notation
    * int rgbColor = 0xFFEF0D
### float
A variable to be of type float can be used for storing floating-point numbers (values containing decimal places).
### double
The double type is the same as type float, only with roughly twice the precision.
* used whenever the range provided by a float variable is not sufficient
* can store twice as many significant digits
* most computers represent double values using 64 bits

All floating-point constants are taken as double values by the C compiler.
* to explicitly express a float constant, append either an f or F to the end of the number
```C
float my_float = 12.5f;
```
### _Bool
The _Bool data type can be used to store just the values 0 or 1.
* used for indicating an on/off, yes/no, or true/false situation (binary choice)

_Bool variables are used in such programs that need to indicate a Boolean condition.
### Other data types
The int type will probably meet most of your integer needs when beginning with C.
* However, C offers many other integer types:
    * gives the programmer the option of matching a type to a particular use case
    * integer types vary in the range of values offered and in whether negative numbers can be used

C offers three adjective keywords to modify the basic integer ttype (can also be used by itself):
* short
* long
* unsigned

The type short int, or short may use less storage than int, thus saving space when only small numbers are needed.
* can be used when the program needs a lot of memory and the amount of available memory is limited

The type long int, or long, may use more storage that int, thus enabling you to express larger integer values.

The type long long int, or long long may use more storage than long.
* a constant value of type long int is formed by optionally appending the letter L (upper-or-lowercase) onto the end of an integer constant
```C
long int numberOfPoints = 131071100L;
long double US_deficit_2017;
long double my_long_double = 1.234e+7L;
```
The type unsigned int, or unsigned, is used for variables that have only nonnegative values (positive)
* unsigned int counter;
* the accuracy of the integer variable is extended

The keyword signed can be used with any of the signed types to make your intent explicit.
* short, short int, signed short, and signed short int are all names for the same type