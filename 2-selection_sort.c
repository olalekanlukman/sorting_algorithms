#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - sorts in ascending order using sort
 * @array:  the array to be sorted
 * @size: length of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

	if ((size < 2) || (!array))
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
