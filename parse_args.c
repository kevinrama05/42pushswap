#include "push_swap.h"
#include <stdlib.h>
#include <limits.h>

static int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (nptr[i] && ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}

static int	is_num(char *nptr)
{
	int			i;
	long long	num;

	i = 0;
	num = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		num = (num * 10) + (nptr[i] - '0');
		if (-num < INT_MIN || num > INT_MAX)
			return (0);
		i++;
	}
	if (nptr[i] != '\0')
		return (0);
	return (1);
}

int *create_list(char **args, int size)
{
    int *arr;
    int i;

    arr = (int *)malloc(sizeof(int) * size);
    i = 0;
    while (i < size)
    {
        if (is_num(args[i]) == 0)
            invalid_input_error(arr);
        else
            arr[i] = ft_atoi(args[i]);
        i++;
    }
    return (arr);
}

int *ft_copy_list(int *arr, int size)
{
	int i;
	int *a;

	a = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		a[i] = arr[i];
		i++;
	}
	return (a);
}