/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerama <kerama@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:29:07 by kerama            #+#    #+#             */
/*   Updated: 2025/12/16 14:54:33 by kerama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_node  *create_node(int value, int index)
{
    t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node *));
	new_node->prev = new_node;
	new_node->next = new_node;
	new_node->value = value;
	new_node->index = index;
}

void	add_front(t_node **head, int value, int index)
{
	t_node	*new_node;
	t_node	*tail;

	new_node = create_node(value, index);
	tail = (*head)->prev;
	new_node->prev = tail;
	tail->next = new_node;
	new_node->next = head;
	(*head)->prev = new_node;
	*head = (*head)->prev;
}

void	add_back(t_node **head, int value, int index)
{
	t_node	*new_node;
	t_node	*tail;

	new_node = create_node(value, index);
	tail = (*head)->prev;
	new_node->prev = tail;
	tail->next = new_node;
	new_node->next = head;
	(*head)->prev = new_node;
}

void	del_node(t_node **head, int value, int index)
{
	t_node	*temp;

	temp = *head;
	if (head == NULL)
		return ;
	if (temp->next == temp && head->data == )
}
