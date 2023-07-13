This repository contains solutions to several tasks related to dynamic memory allocation using malloc, calloc, and free in the C programming language. Each task focuses on a specific aspect of memory allocation and provides a function to implement the required functionality.
Task 0: Trust no one

Implement the function malloc_checked that allocates memory using malloc.

Prototype: void *malloc_checked(unsigned int b);

    The function returns a pointer to the allocated memory.
    If malloc fails to allocate memory, the malloc_checked function should cause normal process termination with a status value of 98.

Task 1: string_nconcat

Write a function string_nconcat that concatenates two strings into a newly allocated memory space.

Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);

    The returned pointer should point to a newly allocated space in memory.
    The memory should contain s1, followed by the first n bytes of s2, and be null-terminated.
    If the function fails, it should return NULL.
    If n is greater or equal to the length of s2, the entire string s2 should be used.
    If NULL is passed as any of the strings, treat it as an empty string.

Task 2: _calloc

Implement the function _calloc that allocates memory for an array using malloc.

Prototype: void *_calloc(unsigned int nmemb, unsigned int size);

    The _calloc function should allocate memory for an array of nmemb elements of size bytes each.
    The allocated memory should be set to zero.
    If nmemb or size is 0, _calloc should return NULL.
    If malloc fails to allocate memory, _calloc should also return NULL.

Task 3: array_range

Write a function array_range that creates an array of integers.

Prototype: int *array_range(int min, int max);

    The array created should contain all the values from min to max, inclusive, ordered from min to max.
    The function should return a pointer to the newly created array.
    If min is greater than max, the function should return NULL.
    If malloc fails to allocate memory, the function should also return NULL.

This concludes the description of the tasks in this repository. Each task provides a specific problem to solve and a corresponding function to implement. The tasks focus on different aspects of dynamic memory allocation and deallocation in the C programming language.
