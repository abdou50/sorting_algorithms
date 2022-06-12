#include "sort.h"
/**
 * @brief
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int  temp;
	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = j + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
			if(min != i)
			{
				temp = array[min];
				array[min] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
}