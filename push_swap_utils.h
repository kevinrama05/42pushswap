/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgramozi <vgramozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:24:25 by vgramozi          #+#    #+#             */
/*   Updated: 2025/12/15 00:05:18 by vgramozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_UTILS_H
# define PUSH_SWAP_UTILS_H

# include "push_swap_structs.h"

t_ps_counts	*ft_init_counts(void);
t_stack		*ft_init_stack(char name);
t_ps_data	*ft_init_data(void);
void		ft_free_stack(t_stack *stack);
void		ft_clean_exit(t_ps_data *data, int success_code);

t_node		*ft_new_node(int value);
void		ft_add_node_front(t_stack *stack, t_node *new);
t_node		*ft_del_node_front(t_stack *stack);
void		ft_add_node_back(t_stack *stack, t_node *new);
t_node		*ft_del_node_back(t_stack *stack);

char		**ft_parse_arguments(t_ps_data *data, int argc, char **argv);
int			ft_is_strategy_selector(const char *arg);
void		ft_set_strategy(t_ps_data *data, const char *arg);
int			ft_get_num_count(int argc, char **argv);

void		ft_assign_strategy_details(t_ps_data *data, const char *arg);
int			ft_is_arg_number(const char *arg);
void		ft_check_unrecognized_flag(const char *arg);
char		**ft_collect_numbers(int argc, char **argv, int num_count,
				t_ps_data *data);
void		ft_error_exit(void);
void		ft_is_sorted(t_ps_data *data);

void		ft_putchar_fd(char c, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_print_benchmark(t_ps_data *data);
int			ft_strcmp(const char *s1, const char *s2);

void		ft_solve(t_ps_data *data);
void		ft_sort_simple(t_ps_data *data);
// void		ft_sort_radix(t_ps_data *data);
// void		ft_sort_chunk(t_ps_data *data);

// void		ft_push_min_index(t_ps_data *data, int index);

#endif