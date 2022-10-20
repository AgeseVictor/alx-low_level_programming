#include "hash_tables.h"

/**
 * hash_table_set - adds or updates an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key, can not be an empty string
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
char *copy_value;
unsigned long int index, i;
hash_node_t *new;

if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
return (0);

copy_value = strdup(value);
if (copy_value == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = copy_value;
return (1);
}
}

new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);

new->key = strdup(key);
new->value = copy_value;
new->next = ht->array[index];
ht->array[index] = new;

return (1);
}

