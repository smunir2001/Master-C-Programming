smunir2001@gmail.com | August 18, 2022 | ReadMe.md
# ReadMe file for this repository!
## Important Notes
Overview of C --> efficient, portable, power and flexibility, programmer oriented.

Language features --> imperative language, top-down planning, structured programming and modular design.
### Fundamentals of a program
Computers are very dumb machines: they only do what they are told to do!

The basic operations of a computer will form what is known as the computer's instruction set.

To solve a problem using a computer, you must provide a solution to the problem by sending instructions to the instruction set.
* a computer program sends the instructions necessary to solve a specific problem.
The approach or method that is used to solve the problem is known as an algorithm.
* The statements that solve the problem becomes the prgram.
* The method that is used to solve the problem is the algorithm.
To write a program, you need to write the instructions necessary to implement the algorithm.
* These instructions would be expressed in the statements of a particular computer language, such as Java, C++, Objective-C, or C.
### Terminology
CPU (central processing unit)
* does most of the computing work
* instructions are executed here

RAM (random access memory)
* stores the date of a program while it is running

Hard drive (permanent storage)
* stores files that contain program source code, even while the computer is turned off

Operating system
* developed to help make it more convenient to use computers
* a program that controls the entire operation of a computer
    * all input/output
    * manages the computer's resources and handles the execution of programs
    * Windows, UNIX, Android, iOS, etc

Fetch/execute cycle (life of a CPU)
* fetches an instruction from memory (using registers) and executes it (loop)
* a gigahertz CPU can do this about a billion times a second

Higher-level programming language
* high-level programming languages make it easier to write programs
    * opposite of assembly language
    * C is a higher-level programming language that describes actions in a more abstract form
    * the instructions (statements) of a program look more like problem solving steps
    * do not have to worry about the precise steps a particular CPU would have to take to accomplish a particular task

Compilers
* a program that translates high-level langauge source code into the detailed set of machine language instructions the computer requires
* the program does high-level thinking and the compiler generates tedious instructions to the CPU
* compilers will also check that your program has valid syntax for the programming language that you are compiling
    * finds errors and it reports them to you and does not produce an executable until you fix them
* high-level languages are easier to learn and much easier to program in that are machine lanaguages

Writing a program
* the act of writing a C program can be broken down into multiple steps
1. Define the program objectives
    * understand the requirements of the problem
    * get a clear idea of what you want the program to accomplish
2. Design the program
    * decide how the program will meet the above requirements
    * what should the user interface be like?
    * how should the program be organized?
3. Write the code
    * start implementation, translate the design in the syntax of C
    * you need to use a text editor to create what is called a *source code* file
4. Compile
    * translate the source code into machine code (executable code)
    * consists of detailed instructions to the CPU expressed in numeric code
5. Run the program
    * the executable file is a program you can run
6. Test/debug the pgoram
    * just because a program is running, does not mean it works as intended
    * need to test, to see that your program does what it is supposed to do (may find bugs)
        * debugging is the process of finding and fixing program errors
        * making mistakes is a natural part of learning
7. Maintain/modify the program
    * programs are released and used by many people
    * have to continue to fix new bugs or add new features
### Overview
C is a general-purpose, imperative computer programming language that supports structured programming.
* uses statements that change a program's state, focuses on how

Currently, it is one of the most widely used programming languages of all time

C is a modern language
* has most basic control structures and features of modern languages
* designed for top-down planning
* organized around the use of functions (modular design) structured programming
* a very reliable and readable program

C is used on everything from minicomputers, Unix/Linux systems to PC's and mainframes.

C is the preferred language for producing word processing programs, spreadsheets, and compilers.

C  has become popular for programming embedded systems.
* used to program microprocessors found in automobiles, cameras, DVD players, etc

C has and continues to play a strong role in the development of Linux.

C programs are easy to modify and easy to adapt to new models or languages.

C provides constructs that map efficiently to typical machine instructions and thus is used by programs that were previously implemented in assembly language.
* provides low-level access to memory (has many low-level capabilites)
* requires minimal run-time support
### History of C language
In the 1990s, many software houses began turning to the C++ language for large programming projects.
* C is a subset of C++ with object-oriented programming tools added
    * any C program is a valid C++ program
    * by learning C, you also learn much of C++

C was invented in 1972 by Dennis Ritchie of Bell Laboratories.
* Ritchie was working on the design of the UNIX operating system
* was created as a tool for working programmers
    * main goal is to be a useful language
    * easy readability and writability

C initially became widely known as the development language of the UNIX operating system.
* virtually all new major operating systems are written in C and/or C++

C evolved from a previous programming language named B.
* uses many of the important concepts of B while adding data typing and other powerful features
    * B was a "typeless" language --- every data item occupied one "word" in memory, and the burden of typing variables fell on the shoulders of the programmer

C is available for most computers.

C is also hardware independent.

By the late 1970s, C had evolved into what is now referred to as "traditional C".

The rapid expansion of C working on many different hardware platforms led to many variations that were similar but often incompatible.
* a standard version of C was created (C89/C90/C99, C11)

A program wrriten only in Standard C and without any hardware-dependent assumptions will run correctly on any platform with a standard C compiler.
* non-standard C programs may run only on a certain platform or with a particular compiler
* C89 is supported by current C compilers
    * most C code being written today is based on it
### Language features
## Course Curriculum
* Overview of C
* Language features
* How to use modern, cross platform IDE's
* Basic C concepts
* Makefiles
* Variables
* Data types
* Basic operators
* Conditional statements
* Repeating code
* Arrays
* Functions
* Debugging
* Structs
* Character strings
* Pointers
* The preprocessor
* Input/output
* File input/output
* Standard C library
### Section 1 - Basic Concepts
* Comments, The preprocessor, The #include statement, Displaying output, Reading input from the terminal
### Section 2 - Variables and Data Types
### Section 3 - Operators
### Section 4 - Control Flow
### Section 5 - Arrays
### Section 6 - Functions
### Section 7 - Character Strings
### Section 8 - Debugging
### Section 9 - Pointers
### Section 10 - Structures
### Section 11 - File Input and Output
### Section 12 - The Standard C Library