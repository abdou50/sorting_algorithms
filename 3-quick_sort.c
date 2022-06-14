#include "sort.h"
/**
 * swap - swaps two value
 *
 * @x: int
 * @y: int
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * partition - the function to get the meduim of the array
 *
 * @array: the array
 * @low: index 0
 * @higher: index the size:
 * Return: int
 */
int partition(int *array, int low, size_t higher)
{
	int x;
	size_t i = 0;
	size_t j;

	x = array[higher];
	for (j = low; j < higher; j++)
	{
		if (array[j] <= x)
		{
			swap(&array[i], &array[j]);
			print_array(array, higher);
			i++;
		}
	}
	swap(&array[i], &x);
	return (i);
}
/**
 * quicksort_recu - recursive function
 *
 * @array: array
 * @low: index 0
 * @higher: the length
 */
void quicksort_recu(int *array, size_t low, size_t higher)
{
	int pivot;

	if (low < higher)
	{
		pivot = partition(array, low, higher);
		quicksort_recu(array, low, pivot - 1);
		quicksort_recu(array, pivot + 1, higher);
	}
}
/**
 * quick_sort - function
 *
 * @array: the array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	if (size < 1)
		return;
	quicksort_recu(array, 0, size - 1);
}
