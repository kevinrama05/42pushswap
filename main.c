/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgramozi <vgramozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 23:26:09 by vgramozi          #+#    #+#             */
/*   Updated: 2025/12/15 19:05:13 by vgramozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_push_swap(int argc, char **argv)
{
	t_ps_data	*data;

	char **num_args;
	int num_count;
	data = ft_init_data();
	if (!data)
		return (1);
	num_args = ft_parse_arguments(data, argc, argv);
	if (num_args == NULL)
		ft_clean_exit(data, EXIT_FAILURE);
	num_count = ft_get_num_count(argc, argv);   
	ft_build_stack_a(data, num_count, num_args);
	free(num_args);
	ft_solve(data);
	ft_print_benchmark(data);
	ft_clean_exit(data, EXIT_SUCCESS);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	return (ft_push_swap(argc, argv));
}
