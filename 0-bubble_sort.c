#include "sort.h"
#include <stdbool.h>
/**
 * bubble_sort - fuction that arrange an array
 * @array: the array to range
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int l = 0;
	int i;
	bool swap;
	size_t j;

	if (size < 1)
		return;
	do {
		swap = false;
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				i = array[j];
				array[j] = array[j + 1];
				array[j + 1] = i;
				swap = true;
				print_array(array, size);
			}
		}
		l++;
	} while (swap);
}
