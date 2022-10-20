#include "hash_tables.h"

/**
 * shash_table_create - Creates sorted hash table.
 * @size: hash table array index size
 * Return: pointer to the new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *shashArray;
unsigned long int i;

shashArray = malloc(sizeof(shash_table_t));
if (shashArray == NULL)
return (NULL);

shashArray->size = size;
shashArray->array = malloc(sizeof(shash_node_t *) * size);
if (shashArray->array == NULL)
return (NULL);
for (i = 0; i < size; i++)
shashArray->array[i] = NULL;
shashArray->shead = NULL;
shashArray->stail = NULL;

return (shashArray);
}

/**
 * shash_table_set - Adds or Updates an element in hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key, can not be an empty string
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int i;
char *copy_value;
shash_node_t *new, *tmp;

if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
return (0);
copy_value = strdup(value);
if (copy_value == NULL)
return (0);
i = key_index((const unsigned char *)key, ht->size);
tmp = ht->shead;
while (tmp)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = copy_value;
return (1);
}
tmp = tmp->snext;
}
new = malloc(sizeof(shash_node_t));
if (new == NULL)
return (free(copy_value), 0);
new->key = strdup(key);
if (new->key == NULL)
return (free(copy_value), free(new), 0);
new->value = copy_value;
new->next = ht->array[i];
ht->array[i] = new;
insert_ht(ht, new, key);
return (1);
}

/**
 * insert_ht - inserts a node in hash table
 * @ht: hash table you want to insert the key/value to
 * @new: a new Node to be inserted to the ht
 * @key: is the Key
 * Return: 1 if it succeeded, 0 otherwise
 */
void insert_ht(shash_table_t *ht, shash_node_t *new, const char *key)
{
shash_node_t *tmp;

if (ht->shead == NULL)
{
new->sprev = NULL;
new->snext = NULL;
ht->shead = new;
ht->stail = new;
}
else if (strcmp(ht->shead->key, key) > 0)
{
new->sprev = NULL;
new->snext = ht->shead;
ht->shead->sprev = new;
ht->shead = new;
}
else
{
tmp = ht->shead;
while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
tmp = tmp->snext;
new->sprev = tmp;
new->snext = tmp->snext;
if (tmp->snext == NULL)
ht->stail = new;
else
tmp->snext->sprev = new;
tmp->snext = new;
}
}


/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element, or NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int i;
shash_node_t *tmp;

if (ht == NULL || key == NULL)
return (NULL);
i = key_index((const unsigned char *)key, ht->size);
if (i >= ht->size)
return (NULL);

tmp = ht->shead;
while (tmp && strcmp(tmp->key, key) != 0)
tmp = tmp->snext;

if (tmp && strcmp(tmp->key, key) == 0)
return (tmp->value);

return (NULL);
}

/**
 * shash_table_print - prints a hash table.
 * @ht: is the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *tmp;

if (ht == NULL)
return;

tmp = ht->shead;
printf("{");
while (tmp != NULL)
{
printf("'%s': '%s'", tmp->key, tmp->value);
tmp = tmp->snext;
if (tmp != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_print_rev - rints a hash table in reverse
 * @ht: is the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *tmp;

if (ht == NULL)
return;

tmp = ht->stail;
printf("{");
while (tmp != NULL)
{
printf("'%s': '%s'", tmp->key, tmp->value);
tmp = tmp->sprev;
if (tmp != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: is the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
shash_table_t *shtable = ht;
shash_node_t *shtnode, *tmp;

if (shtable == NULL)
return;

shtnode = ht->shead;
while (shtnode)
{
tmp = shtnode->snext;
free(shtnode->key);
free(shtnode->value);
free(shtnode);
shtnode = tmp;
}
free(shtable->array);
free(ht);
}
