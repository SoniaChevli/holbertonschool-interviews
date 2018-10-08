#include "search_algos.h"
/**
 * print_array - prints the array
 * @array: array to print
 * @min: min number
 * @max: max number
 *
 * Return: nothing
 */
void print_array(int *array, int min, int max)
{
	printf("Searching in array: ");
	while (min < max)
	{
		if (min == max - 1)
			printf("%d", array[min]);
		else
			printf("%d, ", array[min]);
		min++;
	}
	printf("\n");

}
/**
 * binary_search - searches for a value in a sorted array
 * @array: array to search
 * @size: size of array searching
 * @value: value to search for
 *
 * Return: index where value is located. Otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int min;
	unsigned int mid;
	unsigned int max;

	if (array == NULL)
		return (-1);

	mid = size / 2;
	max = size;
	min = 0;
	print_array(array, min, max);
	while (max != mid || min != max)
	{
		if (value == array[mid])
			return (mid);
		else if (min == max - 1)
			return (-1);
		else if (value > array[mid])
		{
			min = mid;
			mid = ((max - min) / 2) + min;
		}
		else
		{
			max = mid;
			mid = max / 2;
		}
		print_array(array, min, max);
	}
	return (-1);

}
