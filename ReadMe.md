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
C produces compact and efficient programs.

C is one of the most important programming languages and will continue to be so.

The main features of C are the following:
* efficient
* portable
* powerful & flexible
* programmer oriented
#### Efficiency & portablility
C is an efficient language.
* takes advantage of the capabilities of current computers
* C programs are compact and fast (similar to assembly language programs)
* programmers can fine-tune their programs for maximum speed or most efficient use of memory

C is a portable langauge.
* C programs written on one system can be run on other systems with little or no modification
* a leader in portability
* compilers are available for many computer architectures

Linux/UNIX systems typically come with a C compiler as part of the package.
* compilers are used for personal computers

#### Power and flexibility
* the UNIX/Linux kernel is written in C
* many compilers and interpreters for other languages (FORTRAN, Perl, Python, Pascal, LISP, Logo, and BASIC) have been written in C
* C programs have been used for solving physics and engineering problems and even for animating special effects for movies
* C is flexible
    * used for developing just about everything you can imagine by way of a computer program
    * accounting applications to word processing and from games to operating systems
    * it is the basis for more advanced languages, such as C++
* it is also used for developing mobile phone apps in the form of Objective C
* C is easy to learn because of its compactness
    * it is an ideal first language to learn if you want to be a programmer
    * you will acquire sufficient knowledge for practical application development quickly and easily

Programmer oriented
* C fulfills the needs of programmers
    * gives you access to hardware
    * enables you to manipulate individual bits in memory
* C contains a large selection of operators which allows you to express yourself succinctly
* C is less strict than most languages in limiting what you can do
    * this can be both an advantage and a danger
        * advantage is that many tasks (such as covering forms of data) are easier in C
        * danger is that you can make mistakes (pointers) that are impossible in some languages
        * C gives you more freedom, but it also puts more responsibility on you
    * C implementations have a large library of useful C functions
        * deal with common needs of most programmers

Other features
* provides low level features that are generally provided by the lower-level languages
* programs can be manipulated using bits
    * ability to manage memory representation at bit level
    * provides wide variety of bit manipulation operations
#### Disadvantages
Flexibility and freedom also requires added responsibility.
* use of pointers is problematic and abused
* you can make programming errors that are difficult to trace

Sometimes because of its wealth of operators and its conciseness, it makes the language difficult to read and follow
* there is an opportunity to write obscure code
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
## Creating a C program
There are four fundamental tasks in the creation of any C program:
* Editing
* Compiling
* Linking
* Executing

The processes of editing, compiling, linking, and executing are essentially the same for developing programs in any environment and with any compiled language.

__Editing__ is the process of creating and modifying your C source code.
* source code is inside a file and contains the program instructions you write
* choose a wise name for your base file (all source files end in the .c extension)

__Compiling:__ a compiler coverts your source code into machine language and detects and reports errors.
* the input to your compiler is the file you produce during your editing (source file)
* compilation is a two-stage process
    * the first stage is called the preprocessing phase, during which your code may be modified or added to
    * the second stage is the actual compilation that generates the object code
* the compiler examines each program statement and checks it to ensure that it conforms to the syntax and semantics of the language
    * can also recognize structural errors (dead code)
    * does not find logic errors
    * typical errors reported might be due to an expression that has unbalanced parentheses (syntactic error), or due to the use of a variable that is not "defined" (semantic error)
* after all errors are fixed, the compiler will then take each statement of the program and translate it into assembly language
* the compiler will then translate the assembly language statements into actual machine instructions
    * the output from the compiler is known as object code and it is stored in files called object files (same name as source file with a .obj or .o extension)
* the standard command to compile your C programs will be cc (or the GNU compiler, which is gcc)
    * cc -c myProg.c or gcc -c myProg.c
    * if you omit the -c flag, your program will automatically be linked as well
__Linking:__ after the program has been translated into object code, it is ready to be linked
* the purpose of the linking phase is to get the program into a final form for execution on the computer
* linking usually occurs automatically when compiling depending on what system you are on, but can sometimes be a separate command
* the linked combines the object modules generated by the compiler with additional libraries needed by the program to create the whole executable
    * also detects and reports errors
        * if part of your program is missing or nonexistent library component is referenced
* program libraries support and extend the C language by providing routines to carry out operations that are not part of the language
    * input and output libraries, mathematical libraries, string manipulation libraries
* a failure during the linking phase means that once again you have to go back and edit your source code
* success will produce an executable file
    * in Windows environment, the executable file will have an .exe extension
    * in UNIX/Linux, there will be no such extension (a.out by default)
    * many IDE's have a build option, which will compile and link your program in a single operation to produce the executable
* a program of any significant size will consist of several source code files
    * each source code file needs the compiler to generate the object file that needs to be linked
* the program is much easier to manage by breaking it up into a number of smaller source files
    * it is cohesive and makes the development and maintenance of the program a lot easier
    * the set of source files that make up the program will usually be integrated under a project name, which is used to refer to the whole program

__Executing:__ the execution stage is where you run your program
* each of the statements of the program is sequentially executed in turn
* if the program requests any data from the user the program temporarily suspends its execution so that the input can be entered
* results that are displayed by the program (output) will appear in a window called the console
* this stage can also generate a wide variety of error conditions
    * producing the wrong output
    * just sitting there and doing nothing
    * crashing your computer
* if the program does not perform the intended functionality then it will be necessary to go back and reanalyze the program's logic
    * known as the debugging phase, correct all the known problems or bugs from the program
    * will need to make changes to the original source program
        * the entire process of compiling, linking, and executing the program must be repeated until the desired results are obtained
### Section 1 - Basic Concepts
* Comments, The preprocessor, The __#include statement__, Displaying output, Reading input from the terminal
### Section 2 - Variables and Data Types
* Basic data types, Enums and chars, Format specifiers, Command line arguments
### Section 3 - Operators
* Logical operators, Boolean operators, Assignment/relational operators, Expressions & statements, Bitwise operators, The __Cast__ and __sizeof__ operators, Operator precedence
### Section 4 - Control Flow
### Section 5 - Arrays
### Section 6 - Functions
### Section 7 - Character Strings
### Section 8 - Debugging
### Section 9 - Pointers
### Section 10 - Structures
### Section 11 - File Input and Output
### Section 12 - The Standard C Library