#include "sort.h"

/**
 * selection_sort - use selection sort to sort list
 * @array: input array
 * @size: input size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min = 0;
	int tmp = 0;

	if (size == 0 || size == 1)
		return;
	while (i < size)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min])
				min = j;
			j++;
		}
		if (i != min)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
		i++;
	}
}
