/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_old.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgramozi <vgramozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:13:03 by ekrama10          #+#    #+#             */
/*   Updated: 2025/12/14 18:25:03 by vgramozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_OLD_H
# define PUSH_SWAP_OLD_H

# include <stdlib.h>

typedef struct s_args
{
	int	adaptive;
	int	simple;
	int	medium;
	int	complex;
	int	bench;
	int	args;
}		t_args;

void	init_args(t_args *args);
void	check_arg(char *arg, t_args *args);
void	valid_args(t_args args);

void	args_error(void);
void	invalid_input_error(int *arr);
void	duplicate_error(int *arr, int *copy);

int		*create_list(char **args, int size);
int		*ft_copy_list(int *arr, int size);

void	bubble_sort(int **a, int size);
int		dup_checker(int *arr, int size);
#endif
