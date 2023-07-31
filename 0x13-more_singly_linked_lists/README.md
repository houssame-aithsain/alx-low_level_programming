# Singly Linked Lists - README

This repository contains a collection of C programs that demonstrate various operations on singly linked lists. Each program corresponds to a specific task related to singly linked lists and is located in the `0x13-more_singly_linked_lists` directory.

## Task 0: Print List

### Function Signature:
```c
size_t print_listint(const listint_t *h);
```

This function prints all elements of a `listint_t` linked list. It traverses the list starting from the given head (`h`) and prints the integer value (`n`) of each node. The function returns the number of nodes in the list.

## Task 1: List Length

### Function Signature:
```c
size_t listint_len(const listint_t *h);
```

This function returns the number of elements (nodes) in a `listint_t` linked list. It counts the number of nodes by traversing the list starting from the given head (`h`) and returns the total count.

## Task 2: Add Node at the Beginning

### Function Signature:
```c
listint_t *add_nodeint(listint_t **head, const int n);
```

This function adds a new node at the beginning of a `listint_t` linked list. It takes a double pointer `head` that points to the head of the linked list and an integer `n` as the data for the new node. The function creates a new node with the given data and adds it at the beginning of the linked list. It returns the address of the new node, or `NULL` if it fails to allocate memory for the new node.

## Task 3: Add Node at the End

### Function Signature:
```c
listint_t *add_nodeint_end(listint_t **head, const int n);
```

This function adds a new node at the end of a `listint_t` linked list. It takes a double pointer `head` that points to the head of the linked list and an integer `n` as the data for the new node. The function creates a new node with the given data and adds it at the end of the linked list. It returns the address of the new node, or `NULL` if it fails to allocate memory for the new node.

## Task 4: Free List

### Function Signature:
```c
void free_listint(listint_t *head);
```

This function frees a `listint_t` linked list. It takes the head of the linked list as input and frees all the nodes in the list, releasing the allocated memory.

## Task 5: Free List with Double Pointer

### Function Signature:
```c
void free_listint2(listint_t **head);
```

This function frees a `listint_t` linked list and sets the head pointer to `NULL`. It takes a double pointer `head` that points to the head of the linked list. The function frees all the nodes in the list and sets the head pointer to `NULL`, ensuring that the head is no longer pointing to the list.

## Task 6: Pop the Head Node

### Function Signature:
```c
int pop_listint(listint_t **head);
```

This function deletes the head node of a `listint_t` linked list and returns the data (integer value) of the deleted node. If the list is empty, it returns 0.

## Task 7: Get Node at Index

### Function Signature:
```c
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
```

This function returns the nth node of a `listint_t` linked list, where `index` is the index of the node starting from 0. If the node does not exist (i.e., the index is beyond the list's length), it returns `NULL`.

## Task 8: Sum of List

### Function Signature:
```c
int sum_listint(listint_t *head);
```

This function returns the sum of all the data (n) of a `listint_t` linked list. If the list is empty, it returns 0.

## Task 9: Insert Node at Index

### Function Signature:
```c
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
```

This function inserts a new node at a given position in a `listint_t` linked list. The `idx` parameter is the index where the new node should be added (index starts at 0). The function returns the address of the new node, or `NULL` if it fails to allocate memory for the new node or if it is not possible to add the new node at the given index.

## Task 10: Delete Node at Index

### Function Signature:
```c
int delete_nodeint_at_index(listint_t **head, unsigned int index);
```

This function deletes the node at a given index of a `listint_t` linked list. The `index` parameter is the index of the node that should be deleted (index starts at 0). The function returns 1 if the deletion is successful and -1 if it fails (e.g., the list is empty or the given index is beyond the list's length).
