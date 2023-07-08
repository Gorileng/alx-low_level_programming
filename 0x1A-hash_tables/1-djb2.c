#include "hash_tables.h"

/**
 * hash_djb2 - implement of djb2 algorithm
 * @str: string that is used to generate hash value
 *
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
