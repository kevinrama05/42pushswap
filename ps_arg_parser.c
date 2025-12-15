/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_arg_parser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgramozi <vgramozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:10:21 by vgramozi          #+#    #+#             */
/*   Updated: 2025/12/14 19:17:47 by vgramozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_strategy_selector(const char *arg)
{
	if (ft_strcmp(arg, "--simple") == 0)
		return (1);
	if (ft_strcmp(arg, "--medium") == 0)
		return (1);
	if (ft_strcmp(arg, "--complex") == 0)
		return (1);
	if (ft_strcmp(arg, "--adaptive") == 0)
		return (1);
	return (0);
}

void	ft_set_strategy(t_ps_data *data, const char *arg)
{
	if (data->flag_simple || data->flag_medium || data->flag_complex
		|| data->flag_adaptive)
		ft_error_exit();
	ft_assign_strategy_details(data, arg);
}

static void	ft_parse_flags(t_ps_data *data, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '-')
		{
			if (ft_is_strategy_selector(argv[i]))
				ft_set_strategy(data, argv[i]);
			else if (ft_strcmp(argv[i], "--bench") == 0)
				data->flag_bench = 1;
			else
				ft_error_exit();
		}
		i++;
	}
	if (!data->flag_simple && !data->flag_medium && !data->flag_complex
		&& !data->flag_adaptive)
		ft_set_strategy(data, "--adaptive");
}

int	ft_get_num_count(int argc, char **argv)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		if (ft_is_arg_number(argv[i]))
			count++;
		i++;
	}
	return (count);
}

char	**ft_parse_arguments(t_ps_data *data, int argc, char **argv)
{
	char	**num_args;
	int		num_count;

	ft_parse_flags(data, argc, argv);
	num_count = ft_get_num_count(argc, argv);
	if (num_count == 0)
	{
		if (argc > 1)
			ft_error_exit();
		ft_clean_exit(data, EXIT_SUCCESS);
	}
	num_args = ft_collect_numbers(argc, argv, num_count, data);
	return (num_args);
}
