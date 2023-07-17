Structures and Typedef

This repository contains a collection of programs that demonstrate the usage of structures and typedef in the C programming language. Each program focuses on a specific task related to structures and typedef.
Task 0: Poppy

The program in 0-main.c defines a new type struct dog with three elements: name, age, and owner. The struct dog type is defined in the header file dog.h. The program creates an instance of struct dog named my_dog and initializes its elements with specific values. It then prints a message using the initialized values of my_dog.
Task 1: A dog is the only thing on earth that loves you more than you love yourself

The program in 1-main.c demonstrates the usage of a function init_dog that initializes a variable of type struct dog. The function takes a pointer to a struct dog variable, along with values for name, age, and owner, and initializes the struct with these values. The program creates an instance of struct dog named my_dog and initializes it using the init_dog function. It then prints a message using the initialized values of my_dog.
Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

The program in 2-main.c demonstrates the usage of a function print_dog that prints the elements of a struct dog. The function takes a pointer to a struct dog variable and prints its name, age, and owner. If any of the elements is NULL, it prints (nil) instead. If the pointer to struct dog is NULL, it does nothing. The program creates an instance of struct dog named my_dog and initializes its elements. It then calls the print_dog function to print the values of my_dog.
Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog, it's too dark to read

The program in 3-main.c defines a new type dog_t as a new name for the type struct dog. The dog_t type is defined in the header file dog.h. The program creates an instance of dog_t named my_dog and initializes its elements with specific values. It then prints a message using the initialized values of my_dog.
Task 4: A door is what a dog is perpetually on the wrong side of

The program in 4-main.c demonstrates the usage of a function new_dog that creates a new instance of struct dog and initializes its elements. The function takes name, age, and owner as parameters, and dynamically allocates memory to store the strings name and owner. It then initializes the struct dog with the provided values and returns a pointer to the newly created instance. If the function fails to allocate memory, it returns NULL. The program creates a new dog using the new_dog function and prints a message using its values. Finally, it frees the memory allocated for the dog.
Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

The program in 5-main.c demonstrates the usage of a function free_dog that frees the memory allocated for a struct dog instance. The function takes a pointer to a struct dog and frees the memory allocated for its name and owner elements. Finally, it frees the memory allocated for the struct dog itself. The program creates a new dog using the new_dog function, prints a message using its values, and then frees the memory using the free_dog function.

Each task provides an example of using structures and typedef to define custom data types and manipulate data. These examples demonstrate the creation, initialization, printing, and memory management of structures.

Please refer to the respective files in this repository for the complete implementation of each task.
