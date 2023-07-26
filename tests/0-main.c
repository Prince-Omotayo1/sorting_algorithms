#include <stdio.h>
#include <stdlib.h>
#include "../sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t l = sizeof(array) / sizeof(array[0]);

	print_array(array, l);
	printf("\n");
	bubble_sort(array, l);
	printf("\n");
	print_array(array, l);
	return (0);
}
