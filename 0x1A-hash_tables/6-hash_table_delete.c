#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
hash_table_t *htable = ht;
hash_node_t *htnode, *tmp;
unsigned long int i;

for (i = 0; i < htable->size; i++)
if (htable->array[i] != NULL)
{
htnode = htable->array[i];
while (htnode != NULL)
{
tmp = htnode->next;
free(htnode->key);
free(htnode->value);
free(htnode);
htnode = tmp;
}
}

free(ht->array);
free(ht);
}
