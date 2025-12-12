/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrama10 <ekrama10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:13:03 by ekrama10          #+#    #+#             */
/*   Updated: 2025/12/11 11:17:55 by ekrama10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

typedef struct s_args
{
    int adaptive;
    int simple;
    int medium;
    int complex;
    int args;
}   t_args;
void init_args(t_args *args);
void check_arg(char *arg, t_args *args);
void valid_args(t_args args);

void args_error(void);
void invalid_input_error(int *arr);

int *create_list(char **args, int size);
int *ft_copy_list(int *arr, int size);

void *bubble_sort(int **a, int size);
int dup_checker(int *arr, int size);
#endif