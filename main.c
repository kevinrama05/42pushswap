/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgramozi <vgramozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:18:40 by ekrama10          #+#    #+#             */
/*   Updated: 2025/12/14 17:36:54 by vgramozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	printf("[");
	while (i < size - 1)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("%d]", arr[size - 1]);
}

int	main(int argc, char **argv)
{
	t_args	a;
	int		*list;
	int		*copy_list;

	init_args(&a);
	check_arg(argv[1], &a);
	check_arg(argv[2], &a);
	valid_args(a);
	a.args = a.simple + a.medium + a.complex + a.complex + a.adaptive;
	a.args += a.bench;
	if (a.simple + a.medium + a.complex + a.adaptive == 0)
		a.adaptive++;
	list = create_list(argv + 1 + a.args, argc - 1 - a.args);
	copy_list = ft_copy_list(list, argc - 1 - a.args);
	bubble_sort(&copy_list, argc - 1 - a.args);
	if (dup_checker(copy_list, argc - 1 - a.args) == 1)
		duplicate_error(list, copy_list);
	print_array(list, argc - 1 - a.args);
	printf("\n");
	print_array(copy_list, argc - 1 - a.args);
	printf("\n");
	return (0);
}
