#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hs = malloc(sizeof(hash_node_t) * size);
    return (hs) ? hs : NULL;
}
