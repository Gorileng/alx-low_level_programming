#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *
 * @n: Integers
 * @index: Index of a node in the list
 * @next: Pointer for the next node
 *
 * Desc: A singly linked list node structure
 */
typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - A singly linked list with the express lane
 *
 * @n: Integers
 * @index: Index of a node in the list
 * @next: Pointer for the next node
 * @express: Pointer for the next node in express lane
 *
 * Description: A singly linked list node structure with the express lane
 */
typedef struct skiplist_s
{
				int n;
				size_t index;
				struct skiplist_s *next;
				struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);


#endif /* SEARCH_ALGOS_H */
