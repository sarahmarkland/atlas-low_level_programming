#include "search_algos.h"

/**
* linear_search - function that searches for a value in an array of
* integers using the Linear search algorithm
* @array: num of command-line args passed to program
* @size: array of pointers to command-line args
* @value: array of pointers to command-line args
* $rhmrklnd
* Return: 0
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
