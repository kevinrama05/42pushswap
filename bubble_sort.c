/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgramozi <vgramozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:34:59 by vgramozi          #+#    #+#             */
/*   Updated: 2025/12/14 18:25:22 by vgramozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_old.h"

static void	ft_swap(int *a, int *b, int *swapped)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
	*swapped = 1;
}

void	bubble_sort(int **a, int size)
{
	int	*arr;
	int	i;
	int	j;
	int	swapped;

	arr = *a;
	i = 0;
	j = 0;
	swapped = 0;
	while (i < size - 1)
	{
		while (j < size - 1 - i)
		{
			if (arr[j] > arr[j + 1])
				ft_swap(&arr[j], &arr[j + 1], &swapped);
			j++;
		}
		if (swapped == 0)
			break ;
		swapped = 0;
		j = 0;
		i++;
	}
}

int	dup_checker(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] == arr[i + 1])
			return (1);
		i++;
	}
	return (0);
}
