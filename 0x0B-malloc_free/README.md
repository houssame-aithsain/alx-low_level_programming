README

This repository contains solutions to several tasks related to dynamic memory allocation using malloc and free in the C programming language. Each task focuses on a specific aspect of memory allocation and provides a function to implement the required functionality.
Task 0: Float like a butterfly, sting like a bee

Create a function create_array that dynamically allocates an array of characters and initializes all elements with a specific character.

Prototype: char *create_array(unsigned int size, char c);

    If size is 0, the function should return NULL.
    If memory allocation fails, the function should also return NULL.
    Otherwise, the function should return a pointer to the allocated memory.

Task 1: The woman who has no imagination has no wings

Implement the function _strdup that duplicates a string by dynamically allocating memory and copying the contents of the original string into it.

Prototype: char *_strdup(char *str);

    If str is NULL, the function should return NULL.
    If memory allocation fails, the function should also return NULL.
    Otherwise, the function should return a pointer to the newly allocated memory containing the duplicated string.

Task 2: He who is not courageous enough to take risks will accomplish nothing in life

Write a function str_concat that concatenates two strings into a newly allocated memory space.

Prototype: char *str_concat(char *s1, char *s2);

    If s1 or s2 is NULL, treat it as an empty string.
    If memory allocation fails, the function should return NULL.
    Otherwise, the function should return a pointer to the newly allocated memory containing the concatenated strings, followed by a null terminator.

Task 3: If you even dream of beating me you'd better wake up and apologize

Implement a function alloc_grid that returns a pointer to a 2-dimensional array of integers.

Prototype: int **alloc_grid(int width, int height);

    Each element of the grid should be initialized to 0.
    If width or height is 0 or negative, the function should return NULL.
    If memory allocation fails, the function should also return NULL.
    Otherwise, the function should return a pointer to the newly allocated 2-dimensional array.

Task 4: It's not bragging if you can back it up

Write a function free_grid that frees a 2-dimensional grid previously created by alloc_grid.

Prototype: void free_grid(int **grid, int height);

    The function should properly free the memory occupied by the grid.

This concludes the description of the tasks in this repository. Each task provides a specific problem to solve and a corresponding function to implement. The tasks focus on different aspects of dynamic memory allocation and deallocation in the C programming language.
