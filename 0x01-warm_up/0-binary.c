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
	while (min <= max)
	{
		printf("%d", array[min]);
		min++;
		if (min <= max)
			printf(", ");
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
	unsigned int min = 0;
	unsigned int mid = 0;
	unsigned int max = size - 1;

	if (array == NULL)
		return (-1);


	while (min <= max)
	{
		print_array(array, min, max);
		mid = min + (max - min) / 2;

		if (value == array[mid])
			return (mid);

		else if (value < array[mid])
			max = mid - 1;

		else
			min = mid + 1;


	}
	return (-1);

}
