#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key of the hash table
 * @size: size of the array of the hash table
 * Return: the index of the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index = 0;
index = hash_djb2(key) % size;
return (index);
}
