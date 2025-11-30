/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerama <kerama@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 11:16:08 by kerama            #+#    #+#             */
/*   Updated: 2025/11/30 11:20:07 by kerama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	s_dcll
{
	int				data;
	int				rank;
	struct s_dcll	*prev;
	struct s_dcll	*next;
}					t_dcll;

#endif