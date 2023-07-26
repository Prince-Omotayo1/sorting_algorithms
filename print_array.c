#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t k;

	k = 0;
	while (array && k < size)
	{
		if (k > 0)
			printf(", ");
		printf("%d", array[k]);
		++k;
	}
	printf("\n");
}
