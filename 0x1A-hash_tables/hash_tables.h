#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct hash_node_s - Node of hash table
 *
 * @key: the key, string
 * The key is very unique in HashTable
 * @value: The value corresponds to the key
 * @next: A pointer to a next node of a List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - The Hash table of the data structure
 *
 * @size: The size of array
 * @array: An array of the size @size
 * Each cell of array is a pointer to first node of the linked list,
 * because we do want our HashTable to use chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);


/**
 * struct shash_node_s - Node of sorted hash table
 *
 * @key: the key, string
 * The key is very unique in HashTable
 * @value: The value corresponds to the key
 * @next: A pointer to next node of List
 * @sprev: A pointer to previous element of sorted linked list
 * @snext: A pointer to next element of sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table of the data structure
 *
 * @size: The size of array
 * @array: An array of the size @size
 * Each cell of array is a pointer to first node of a linked list,
 * because we do want our HashTable to use the chaining collision handling
 * @shead: A pointer to first element of sorted linked list
 * @stail: A pointer to last element of sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);

#endif
