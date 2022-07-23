#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t n = 0, t = size;
	int holder;

	if (array == NULL)
		return;
	for (t = size; t > 0; t--)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				holder = array[n];
				array[n] = array[n + 1];
				array[n + 1] = holder;
				print_array(array, size);
			}
		}
	}
}