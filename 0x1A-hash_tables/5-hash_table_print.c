#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *tmp;
int flag = 0;

if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
if (ht->array[i] != NULL)
{
if (flag == 1)
printf(", ");
tmp = ht->array[i];
while (tmp != NULL)
{
printf("'%s': '%s'", tmp->key, tmp->value);
tmp = tmp->next;
if (tmp != NULL)
printf(", ");
}
flag = 1;
}
printf("}\n");
}
