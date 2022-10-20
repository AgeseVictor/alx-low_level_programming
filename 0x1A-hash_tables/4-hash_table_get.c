#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int i;
hash_node_t *tmp;

if (ht == NULL || key == NULL)
return (NULL);

i = key_index((const unsigned char *)key, ht->size);
if (i >= ht->size)
return (NULL);

tmp = ht->array[i];
while (tmp && strcmp(tmp->key, key) != 0)
tmp = tmp->next;

if (tmp && strcmp(tmp->key, key) == 0)
return (tmp->value);

return (NULL);
}
