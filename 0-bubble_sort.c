#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - sorts using bubble sort algorithms
 * @array: the array to be sorted
 * @size: the length of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int temp;

	if (size < 2 || array == NULL)
		return;

	for (j = size; j > 0; j--)
	{
		for (i = 0; (i != j - 1); i++)
		{
			if ((array[i]) > (array[j -(j -(i + 1))]))
			{
				temp = (array[j - (j - (i + 1))]);
				(array[j - (j - (i + 1))]) = (array[i]);
				(array[i]) = temp;
				print_array(array, size);
			}
		}
	}
}
