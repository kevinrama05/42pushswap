#include "push_swap.h"

int	ft_is_sorted(t_stack *a)
{
	t_node	*current;

	if (!a || a->size < 2)
		return (1);
	current = a->head;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}


void	ft_solve(t_ps_data *data)
{
	if (ft_is_sorted(data->a))
	{
		data->strategy_name = "already sorted";
		data->complexity_class = "O(1)";
		return ;
	}
	if (data->a->size <= 5)
		ft_sort_simple(data);
	// else if (data->a->size <= 500 && ft_calculate_disorder(data->a) < 0.2)
	// 	ft_sort_chunk(data);
	// else
	// 	ft_sort_radix(data);
}
