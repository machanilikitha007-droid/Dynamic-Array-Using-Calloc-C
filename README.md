# Dynamic Array Using calloc() in C

## Project Description

A simple C program that demonstrates dynamic memory allocation using the `calloc()` function. The program creates an integer array according to the size entered by the user, stores the elements, calculates their sum, and releases the allocated memory using `free()`.

## Features

- Accept array size from the user
- Allocate memory dynamically using `calloc()`
- Store elements in the dynamically allocated array
- Display array elements
- Calculate the sum of elements
- Check whether memory allocation was successful
- Release allocated memory using `free()`

## Technologies Used

- C
- Dynamic Memory Allocation
- `calloc()`
- `free()`
- Arrays
- Pointers

## How to Run

1. Create a file named `dynamic_array_calloc.c`.
2. Compile the program using a C compiler.
3. Run the compiled program.

Example using GCC:

```bash
gcc dynamic_array_calloc.c -o dynamic_array_calloc
./dynamic_array_calloc

===== Dynamic Array Using calloc() =====
Enter number of elements: 4
Enter 4 elements:
Element 1: 10
Element 2: 20
Element 3: 30
Element 4: 40

Array elements are:
10 20 30 40

Sum = 100
Memory released successfully.

Author

M.Likitha
