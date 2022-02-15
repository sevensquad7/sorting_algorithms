#include "sort.h"

/**
 * selection_sort - Selection sort
 * @array: Array
 * @size: Size
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	int tmp;
	size_t j = 0;
	int *one = NULL;
	int *two = NULL;
	int min_idx = 0;
	int swap;

	if (size <= 1)
		return;

	for (i = 0 ; i < size ; i++)
	{
		swap = 0;
		min_idx = i;
		one = &array[i];
		for (j = i ; j < size ; j++)
		{
			two = &array[j];
			if (*two < *one)
			{
				min_idx = j;
				one = &array[min_idx];
				swap = 1;
			}
		}
		if (swap == 1)
		{
			one = &array[i];
			two = &array[min_idx];
			tmp = *one;
			*one = *two;
			*two = tmp;
			print_array(array, size);

		}
	}
}
