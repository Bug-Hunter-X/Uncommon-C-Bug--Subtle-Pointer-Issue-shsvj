# Uncommon C Bug: Subtle Pointer Issue

This repository demonstrates a subtle bug in C code related to pointer usage. The code appears simple, but it highlights a potential issue that can lead to unexpected behavior, especially in larger, more complex programs.

## Bug Description
The provided C code showcases a seemingly straightforward operation: modifying a variable's value indirectly through a pointer. While this is a common practice, there's a potential for misuse.  The code works as expected in this simple example, but more complex scenarios involving arrays, structs, or dynamically allocated memory could introduce hard-to-detect errors.

## How to reproduce
1. Clone this repository
2. Compile the `bug.c` file using a C compiler (like GCC):  `gcc bug.c -o bug`
3. Run the executable: `./bug`
4. Observe the output (it will print 20)

## Solution
The solution file, `bugSolution.c`, addresses the potential issues. While the provided code functions correctly, the solution emphasizes best practices in using pointers and memory management.  This would involve things like always ensuring proper memory allocation and deallocation, careful consideration of pointer arithmetic, and thorough validation of pointer values.  It also demonstrates a more defensive style of coding to avoid potential pitfalls in similar contexts.

## Potential Issues in More Complex Scenarios
Consider scenarios where the pointer may be invalid (points to a location where it is not supposed to be pointing), or where there are concurrent accesses to that memory location.  These scenarios would demonstrate a more significant problem. 

This example is educational for developers to be attentive to pointer safety and memory management in C programming.