/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_arg_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgramozi <vgramozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:11:33 by vgramozi          #+#    #+#             */
/*   Updated: 2025/12/14 22:55:44 by vgramozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_arg_number(const char *arg)
{
	if (ft_is_strategy_selector(arg))
		return (0);
	if (ft_strcmp(arg, "--bench") == 0)
		return (0);
	if (arg[0] == '-' && arg[1] == '-')
		return (0);
	return (1);
}

char	**ft_collect_numbers(int argc, char **argv, int num_count,
		t_ps_data *data)
{
	char	**num_args;
	int		i;
	int		j;

	num_args = (char **)malloc(sizeof(char *) * (num_count + 1));
	if (!num_args)
		ft_clean_exit(data, EXIT_FAILURE);
	i = 1;
	j = 0;
	while (i < argc)
	{
		if (ft_is_arg_number(argv[i]))
		{
			num_args[j] = argv[i];
			j++;
		}
		i++;
	}
	num_args[j] = NULL;
	return (num_args);
}

void	ft_assign_strategy_details(t_ps_data *data, const char *arg)
{
	if (ft_strcmp(arg, "--simple") == 0)
	{
		data->flag_simple = 1;
		data->strategy_name = "Simple Sort (e.g., Insertion)";
		data->complexity_class = "O(n2)";
	}
	else if (ft_strcmp(arg, "--medium") == 0)
	{
		data->flag_medium = 1;
		data->strategy_name = "Medium Sort (e.g., Chunking)";
		data->complexity_class = "O(n√n)";
	}
	else if (ft_strcmp(arg, "--complex") == 0)
	{
		data->flag_complex = 1;
		data->strategy_name = "Complex Sort (e.g., Radix)";
		data->complexity_class = "O(n log n)";
	}
	else if (ft_strcmp(arg, "--adaptive") == 0)
	{
		data->flag_adaptive = 1;
		data->strategy_name = "Adaptive Sort";
		data->complexity_class = "Determined at Runtime";
	}
}
