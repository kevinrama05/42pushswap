#include <stdlib.h>
#include <unistd.h>

void args_error(void)
{
	write(1, "Error\n", 6);
	exit(1);	
}

void invalid_input_error(int *arr)
{
	free(arr);
	write(1, "Error\n", 6);
	exit(1);
}

void duplicate_error(int *arr, int *copy)
{
	free(arr);
	free(copy);
	write(1, "Error\n", 6);
	exit(1);
}