# Bit Manipulation Tasks

This repository contains C functions that perform various operations on binary numbers using bit manipulation techniques. Each function is implemented in a separate file and tested using corresponding test files. Below are the details of each task:

## Task 0: binary_to_uint

This function converts a binary number represented as a string to an unsigned integer.

### Prototype:
```c
unsigned int binary_to_uint(const char *b);
```
- `b`: A pointer to a string containing 0 and 1 characters.

### Returns:
- The converted number if successful.
- 0 if the input string contains characters other than 0 or 1 or if `b` is `NULL`.

## Task 1: print_binary

This function prints the binary representation of a given unsigned long integer.

### Prototype:
```c
void print_binary(unsigned long int n);
```

## Task 2: get_bit

This function returns the value of a bit at a specified index.

### Prototype:
```c
int get_bit(unsigned long int n, unsigned int index);
```
- `n`: The number from which to retrieve the bit.
- `index`: The index of the bit to retrieve (starting from 0).

### Returns:
- The value of the bit at the specified index (0 or 1).
- -1 if an error occurred.

## Task 3: set_bit

This function sets the value of a bit at a specified index to 1.

### Prototype:
```c
int set_bit(unsigned long int *n, unsigned int index);
```
- `n`: A pointer to the number in which to set the bit.
- `index`: The index of the bit to set (starting from 0).

### Returns:
- 1 if successful.
- -1 if an error occurred.

## Task 4: clear_bit

This function sets the value of a bit at a specified index to 0.

### Prototype:
```c
int clear_bit(unsigned long int *n, unsigned int index);
```
- `n`: A pointer to the number in which to clear the bit.
- `index`: The index of the bit to clear (starting from 0).

### Returns:
- 1 if successful.
- -1 if an error occurred.

## Task 5: flip_bits

This function calculates the number of bits that need to be flipped to convert one number to another.

### Prototype:
```c
unsigned int flip_bits(unsigned long int n, unsigned long int m);
```
- `n`: The first number.
- `m`: The second number.

### Returns:
- The number of bits that need to be flipped.

## Compilation and Testing

To compile and test the functions, follow these steps for each task:

1. Clone the GitHub repository:
```
git clone <repository-url>
```

2. Navigate to the appropriate directory for the task:
```
cd alx-low_level_programming/0x14-bit_manipulation
```

3. Compile the source files along with the corresponding test file:
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <test-file.c> <task-file.c> -o <output-file>
```

4. Run the compiled executable to test the function:
```
./<output-file>
```

Replace `<repository-url>`, `<test-file.c>`, `<task-file.c>`, and `<output-file>` with the actual values.

Feel free to explore the repository to view the source code and test files for each task.

## Contributors

These tasks were completed as part of the ALX Low-Level Programming curriculum. Contributions and improvements are welcome through pull requests to the GitHub repository.
