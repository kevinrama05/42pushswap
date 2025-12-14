/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgramozi <vgramozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:24:25 by vgramozi          #+#    #+#             */
/*   Updated: 2025/12/14 18:53:20 by vgramozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_UTILS_H
# define PUSH_SWAP_UTILS_H

# include "push_swap_structs.h"

t_node		*ft_new_node(int value);
void		ft_add_node_front(t_stack *stack, t_node *new);
t_node		*ft_del_node_front(t_stack *stack);
void		ft_add_node_back(t_stack *stack, t_node *new);
t_node		*ft_del_node_back(t_stack *stack);
void		ft_free_stack(t_stack *stack);

t_ps_data	*ft_init_data(void);
void		ft_clean_exit(t_ps_data *data, int success_code);

#endif