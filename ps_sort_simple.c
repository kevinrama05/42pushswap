#include "push_swap.h"

void	ft_sort_simple(t_ps_data *data)
{
	data->strategy_name = "Simple Sort";
	data->complexity_class = "O(n^2)";
	// --- TEMPORARY CRASH AVOIDANCE ---
	// For MVP run: sort two elements if possible
	sa(data);
	sa(data);
	pb(data);
	if (data->a->size == 2 && data->a->head->value > data->a->head->next->value)
		sa(data);
	// ---------------------------------
	// The actual complex N=3, N=4, N=5 logic will go here next.
}
