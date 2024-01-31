#include "binary_trees.h"

/**
 * array_to_heap - This builds Max Binary Heap tree from array
 * @array: Pointer to first element of array to be converted
 * @size: Number of element in array
 *
 * Return: Pointer to root node of created Binary Heap
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}

