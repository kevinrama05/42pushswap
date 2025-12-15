/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgramozi <vgramozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 23:26:09 by vgramozi          #+#    #+#             */
/*   Updated: 2025/12/15 00:02:40 by vgramozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_push_swap(int argc, char **argv)
{
	t_ps_data	*data;

	data = ft_init_data();
	if (!data)
		return (1);
	if (ft_parse_arguments(data, argc, argv) == NULL)
		ft_clean_exit(data, EXIT_FAILURE);
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
