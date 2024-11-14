#include "push_swap.h"

int	is_sorted(t_node *a)
{
	int	i;

	i = a->number;
	while (a)
	{
		if (i > a->number)
			return (0);
		i = a->number;
		a = a->next;
	}
	return (1);
}

void	tiny_sort(t_node **a)
{
	t_node	*highest_node;
	
	highest_node = get_highestnode(*a); 	//TODO
	if (*a == highest_node)
		ra(a, 0);
	else if ((*a)->next == highest_node)
		rra(a, 0);
	if ((*a)->number > (*a)->next->number)
		sa(a, 0);
}
void	sort(t_node **a)
{

	if (2 == stack_len(*a))
		sa(a, 0);
	else if (3 == stack_len(*a))
		tiny_sort(a);


}
